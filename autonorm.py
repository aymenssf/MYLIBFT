from sys import argv
import subprocess
import glob, os
import re
from pathlib import Path
from shutil import copytree
import clipboard

defines = []

def remove_empty_lines(text):
    lines = text.split("\n")
    non_empty_lines = [line for line in lines if line.strip() != ""]
    return "\n".join(non_empty_lines)

def convert_file(path: str, normed_path: str):
    f = open(path, mode='r')
    file = f.read()
    f.close()

    pattern = r'//.*|/\*[\s\S]*?\*/'
    file = re.sub(pattern, '', file)
    file = remove_empty_lines(file)


    file_defines = []
    file = file.splitlines()
    file = [s.lstrip() for s in file]
    


    cpy = []
    for i in range(len(file)):
        if (file[i][0] == "#"):
            file_defines.append(file[i])
        else:
            cpy.append(file[i])
    file = cpy
    
    file = [s + "\\" for s in file]
    file[len(file) - 1] = file[len(file) - 1][:-1]
    file = '\n'.join(file)
    file = file.replace("\"", "\\\"")

    define = "-D _" + (normed_path.upper().replace("/", "_")[:-2]) + "=\"" + file + "\""
    return (define, file_defines)

def copy2clip(txt):
    clipboard.copy(txt)

if (len(argv) != 2):
    exit(1)

argv[1] = os.path.abspath(argv[1])
normed_dir = argv[1] + "/../normed/"
copytree(argv[1], argv[1] + "/../normed", dirs_exist_ok=True)

for file in glob.glob(argv[1] + "/**/*.c", recursive=True):

    file2 = "/" + '/'.join(file.split('/')[1:])
    full_path = os.path.abspath(file)
    dir = '/'.join(full_path.split("/")[:-2]) + "/normed/"

    normed_path = normed_dir + file2.removeprefix(argv[1])
    print(normed_path)
    converted_file, defines_file = convert_file(full_path, normed_path)
    defines.append(converted_file)

    print(normed_path)
    normed_file = open(normed_path, 'w+')
    normed_file.truncate()
    normed_file.seek(0)
    normed_file.write("\n".join(defines_file) + "\n\n")
    normed_file.write("_" + (normed_path.upper().replace("/", "_")[:-2]))
    normed_file.close()

copy2clip(' '.join(defines))
print("Defines copied to clipboard.\nCreate a new variable in make file, assign it to clipboard content (CTRL+V)\
 and compile with that variable as an argument to your compiler")
