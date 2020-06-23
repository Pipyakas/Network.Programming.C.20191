cmake_minimum_required(VERSION 3.3)
project(SI_Client)
link_libraries(SDL2 SDL2_ttf SDL2_image pthread)
set(SOURCE_FILES
        engine/assets.c
        engine/assets.h
        engine/engine.c
        engine/engine.h
        engine/network.c
        engine/network.h
        engine/renderer.c
        engine/renderer.h
        engine/screen.c
        engine/screen.h
        game/enemy.c
        game/enemy.h
        game/gameobject.c
        game/gameobject.h
        game/player.c
        game/player.h
        main.c
        screen/connect.c
        screen/connect.h
        screen/field.c
        screen/field.h
        screen/game.c
        screen/game.h
        screen/gameover.c
        screen/gameover.h
        screen/main_menu.c
        screen/main_menu.h
        util/font.c
        util/font.h
        util/queue.c
        util/queue.h
        util/time.c
        util/time.h
        )
add_executable(SI_Client ${SOURCE_FILES})
add_custom_target(valgrind /usr/bin/valgrind ${PROJECT_BINARY_DIR}/SI_Client)