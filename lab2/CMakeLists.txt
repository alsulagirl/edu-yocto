cmake_minimum_required(VERSION 3.0) #Проверка версии CMake
project(HelloCMake)#Имя проекта
set(SRC_EXE main.cpp) #Определение переменной исходников основного проекта
###########################################################################################
set(SRC_LIB hellocmake.cpp) #Определение переменной исходников main.cpp
set(HEADERS_LIB hellocmake.h) #Определение переменной заголовочников библиотеки
add_library(HelloLib STATIC ${SRC_LIB} ${HEADERS_LIB})#Создание библиотеки
############################################################################################
set(SRC_LIB_2 quicksort.cpp) #Определение переменной исходников main.cpp
set(HEADERS_LIB_2 quicksort.h) #Определение переменной заголовочников библиотеки
add_library(quicksortLib STATIC ${HEADERS_LIB_2} ${SRC_LIB_2})#Создание библиотеки
############################################################################################
add_executable(${PROJECT_NAME} ${SRC_EXE})
target_link_libraries(${PROJECT_NAME} HelloLib quicksortLib)#Статическая линковка
