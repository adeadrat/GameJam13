#include "Player.h"
#include <SFML\Window\Keyboard.hpp>

Player::Player(sf::Vector2f startPos): Entity(startPos), mDown(
{
	mYvel = mXvel = 2;
}


Player::~Player(void)
{
}


void Player::update()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		mPos.x += mXvel;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		mPos.x -= mXvel;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		mPos.y -= mYvel;
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		mPos.y += mYvel;
}
void Player::render()
{

}