#include "ranger.hpp"

std::shared_ptr<Character> Character::Create()
{
	return std::make_shared<Ranger>();
}

Ranger::Ranger() {};

Ranger::~Ranger() {};

void Ranger::CharacterInit()
{
	int health = 55;
	int mana = 50;
	int move_range = 10;

	SetHealth(health);
	SetMana(mana);
	SetMoveRange(move_range);
	std::cout << "Ranger initialized with " << GetHealth() << " health, "
			  << GetMana() << " mana, and move range of " << GetMoveRange()
			  << ".\n" << std::endl;
}

void Ranger::MoveForward(const int distance)
{
	int move_range = GetMoveRange();
	if (distance > move_range) {
		std::cout << "Ranger can only move " << move_range
				  << " units at a time." << std::endl;
		std::cout << "Ranger moves forward " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Ranger moves forward " << distance << " units.\n"
				  << std::endl;
	}
}

void Ranger::MoveBackward(const int distance)
{
	int move_range = GetMoveRange();
	if (distance > move_range) {
		std::cout << "Ranger can only move " << move_range
				  << " units at a time.\n" << std::endl;
		std::cout << "Ranger moves backward " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Ranger moves backward " << distance << " units.\n"
				  << std::endl;
	}
}

void Ranger::MoveLeft(const int distance)
{
	int move_range = GetMoveRange();
	if (distance > move_range) {
		std::cout << "Ranger can only move " << move_range
				  << " units at a time." << std::endl;
		std::cout << "Ranger moves left " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Ranger moves left " << distance << " units.\n" << std::endl;
	}
}

void Ranger::MoveRight(const int distance)
{
	int move_range = GetMoveRange();
	if (distance > move_range) {
		std::cout << "Ranger can only move " << move_range
				  << " units at a time." << std::endl;
		std::cout << "Ranger moves right " << move_range << " units.\n"
				  << std::endl;
	}
	else {
		std::cout << "Ranger moves right " << distance << " units.\n"
				  << std::endl;
	}
}

void Ranger::Attack()
{
    std::cout << "Ranger shoots an arrow!\n" << std::endl;
}

void Ranger::SpecialAttack()
{
    std::cout << "Ranger performs a powerful multi-shot!\n" << std::endl;
}

void Ranger::Rest()
{
    std::cout << "Ranger is maintaining the bow...\n" << std::endl;
}
