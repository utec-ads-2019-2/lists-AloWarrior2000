cmake_minimum_required(VERSION 3.14)
project(SortProblems)

set(CMAKE_CXX_STANDARD 14)

add_executable(lists-AloWarrior2000-master
        main.cpp
        test/tester.cpp
        mock/mocker.cpp
        iterators/forward_iterator.h
        iterators/bidirectional_iterator.h
        )