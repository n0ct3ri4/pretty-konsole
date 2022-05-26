@echo off
mkdir build

g++ Example.cpp -o ./build/Example.exe

cd build 
explorer .
