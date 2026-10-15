// maybe something here...
#include "vector_util.h"
#include <SFML/System/Vector2.hpp>

struct BasicTransform {
    sf::Vector2f scale;
    sf::Vector2f translation;
    BasicTransform(sf::Vector2f scale, sf::Vector2f translation) : scale(scale), translation(translation) {}

    sf::Vector2f applyPoint(const sf::Vector2f& p) const { 
        float resX = p.x * scale.x;
        float resY = p.y * scale.y;
        resX += translation.x;
        resY += translation.y;

        return sf::Vector2f(resX, resY);
    }

    sf::Vector2f applyVector(const sf::Vector2f& p) const { 
        float resX = p.x * scale.x;
        float resY = p.y * scale.y;

        return sf::Vector2f(resX, resY);
    }

    bool operator==(const BasicTransform& other) {
        return ((scale == other.scale) && (translation == other.translation));
    }
};
