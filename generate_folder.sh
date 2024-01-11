#!/bin/bash


read -p 'Problem number: ' number

read -p 'Problem Name (English): ' nameE

read -p 'Problem Name (Chinese): ' nameC

read -p 'EASY/MEDIUM/HARD: ' comp

folder=$number"_"$nameE"_"$nameC"_"$comp
cpp_filename="solution_"$number"_"$nameE"_cpp.cpp"
py_filename="solution_"$number"_"$nameE"_python.py"
md_filename=$number"_"$nameE"_"$nameC"_"$comp".md"

# mkdir
# https://stackoverflow.com/a/246128
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
echo cd to $SCRIPT_DIR“/problems”
cd $SCRIPT_DIR
cd problems
echo Creating folder $folder
mkdir -p $folder
echo cd to $folder
cd $folder

echo Creating markdown file $md_filename
touch $md_filename

echo Creating cpp file $cpp_filename
touch $cpp_filename

echo Creating python file $py_filename
touch $py_filename

cd ..