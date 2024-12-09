#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include "bn_sprite_items_testplayer.h"

int main()
{
    bn::core::init();

    // Create a basic sprite in the center of the screen
    bn::sprite_ptr playersprite = bn::sprite_items::testplayer.create_sprite(0,0);
    

    // When this part of the code is reached, the clouds background has gone out of scope and will be removed
    while(true)
    {
        bn::core::update();

        if(bn::keypad::left_held()){

            // Decease the x position to move it to the left
            playersprite.set_x(playersprite.x()-bn::fixed(2));

        }else if(bn::keypad::right_held()){

            // Increase the x position to move it to the right
            playersprite.set_x(playersprite.x()+bn::fixed(2));
        }


        if(bn::keypad::up_held()){

            // Decrease the y  position to move it upwards
            playersprite.set_y(playersprite.y()-bn::fixed(2));
        }else if(bn::keypad::down_held()){

            // Increase the y  position to move it downwards
            playersprite.set_y(playersprite.y()+bn::fixed(2));
        }

    }
}