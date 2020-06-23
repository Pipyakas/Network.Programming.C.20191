cmake_minimum_required(VERSION 3.3)
project(SI_Server)
link_libraries(pthread)
set(SOURCE_FILES
        game/enemy.c
        game/enemy.h
        game/field.c
        game/field.h
        game/game.c
        game/game.h
        game/gameobject.c
        game/gameobject.h
        game/player.c
        game/player.h
        game/rectangle.c
        game/rectangle.h
        main.c
        network/net.c
        network/net.h
        network/packer.c
        network/packer.h
        network/packet.c
        network/packet.h
        util/queue.c
        util/queue.h
        util/time.c
        util/time.h
        )
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
add_executable(SI_Server ${SOURCE_FILES})
add_custom_target(valgrind /usr/bin/valgrind ${PROJECT_BINARY_DIR}/SI_Server)