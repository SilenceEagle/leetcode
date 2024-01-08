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
echo Creating folder $folder
mkdir -p $folder
cd $folder

echo Creating markdown file $md_filename
touch $md_filename

echo Creating cpp file $cpp_filename
touch $cpp_filename

echo Creating python file $py_filename
touch $py_filename

cd ..