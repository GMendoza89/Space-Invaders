//
// Created by Jurgen Zellhuber on 13/04/23.
//
#pragma once

class Animation
{

    unsigned short animation_iterator;

    unsigned short animation_speed;
    unsigned short current_frame;

    unsigned short frame_width;

    unsigned short total_frames;

    sf::Sprite sprite;

    sf::Texture texture;
public:
    Animation(unsigned short i_animation_speed, unsigned short i_frame_width, const std::string& i_texture_location);

    bool change_current_frame();
    bool update();

    void draw(short i_x, short i_y, sf::RenderWindow& i_window, const sf::Color& i_color = sf::Color(255, 255, 255));
    void reset();
};
#ifndef HELLOSFML_ANIMATION_HPP
#define HELLOSFML_ANIMATION_HPP

#endif //HELLOSFML_ANIMATION_HPP
