#include "mage.hpp"

std::shared_ptr<Character> Character::Create()
{
	return std::make_shared<Mage>();
}

Mage::Mage() {};

Mage::~Mage() {};

void Mage::CharacterInit()
{
    int health = 5;
    int mana = 100;
    int move_range = 1;
    
    SetHealth(health);
    SetMana(mana);
    SetMoveRange(move_range);
    std::cout << "Mage initialized with " << GetHealth() << " health, "
              << GetMana() << " mana, and move range of " << GetMoveRange()
              << ".\n" << std::endl;
}

void Mage::MoveForward(const int distance)
{
	int move_range = GetMoveRange();
    if (distance > move_range) {
		std::cout << "Mage can only move " << move_range << " units at a time."
				  << std::endl;
		std::cout << "Mage moves forward " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Mage moves forward " << distance << " units.\n"
				  << std::endl;
	}
}

void Mage::MoveBackward(const int distance)
{
	int move_range = GetMoveRange();
    if (distance > move_range) {
		std::cout << "Mage can only move " << move_range << " units at a time."
				  << std::endl;
		std::cout << "Mage moves backward " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Mage moves backward " << distance << " units.\n"
				  << std::endl;
	}
}

void Mage::MoveLeft(const int distance)
{
	int move_range = GetMoveRange();
    if (distance > move_range) {
		std::cout << "Mage can only move " << move_range << " units at a time."
				  << std::endl;
		std::cout << "Mage moves left " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Mage moves left " << distance << " units.\n" << std::endl;
	}
}

void Mage::MoveRight(const int distance)
{
	int move_range = GetMoveRange();
    if (distance > move_range) {
		std::cout << "Mage can only move " << move_range << " units at a time."
				  << std::endl;
		std::cout << "Mage moves right " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Mage moves right " << distance << " units.\n" << std::endl;
	}
}

void Mage::Attack() { std::cout << "Mage casts a fireball!\n" << std::endl; }

void Mage::SpecialAttack()
{
	std::cout << "Mage casts a powerful lightning strike!\n" << std::endl;
}

void Mage::Rest()
{
	std::cout << "Mage is meditating...\n" << std::endl;
}