cmake_minimum_required(VERSION 3.0.0)
project(concurrent VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)


find_package (Threads REQUIRED)

set(CHAPTERS
    chapter2
    chapter3
    chapter10
)

set(chapter2
    function.cpp
    functor.cpp
    lambda.cpp
    hang_ref.cpp
    catch.cpp
)

set(chapter3
    main.cpp
)

set(chapter10
    main.cpp
)

foreach(CHAPTER ${CHAPTERS})
    foreach(DEMO ${${CHAPTER}})
        set(NAME "${CHAPTER}_${DEMO}")
        set(SOURCE "${CHAPTER}/${DEMO}")
        add_executable(${NAME} ${SOURCE})
        target_link_libraries(${NAME}
            ${CMAKE_THREAD_LIBS_INIT}
        )
    endforeach(DEMO)
endforeach(CHAPTER)