#include "warrior.hpp"

std::shared_ptr<Character> Character::Create()
{
    return std::make_shared<Warrior>();
}

Warrior::Warrior() {};

Warrior::~Warrior() {};

void Warrior::CharacterInit()
{
    int health = 100;
    int mana = 5;
    int move_range = 5;

    SetHealth(health);
    SetMana(mana);
    SetMoveRange(move_range);
    std::cout << "Warrior initialized with " << GetHealth() << " health, "
              << GetMana() << " mana, and move range of " << GetMoveRange()
              << ".\n" << std::endl;
}

void Warrior::MoveForward(const int distance)
{
    int move_range = GetMoveRange();
    if (distance > move_range) {
        std::cout << "Warrior can only move " << move_range
                  << " units at a time." << std::endl;
        std::cout << "Warrior moves forward " << move_range << " units.\n"
                  << std::endl;
    }
    else {
        std::cout << "Warrior moves forward " << distance << " units.\n"
                  << std::endl;
    }
}

void Warrior::MoveBackward(const int distance)
{
    int move_range = GetMoveRange();
    if (distance > move_range) {
        std::cout << "Warrior can only move " << move_range
                  << " units at a time." << std::endl;
        std::cout << "Warrior moves backward " << move_range << " units.\n"
                  << std::endl;
    }
    else {
        std::cout << "Warrior moves backward " << distance << " units.\n"
                  << std::endl;
    }
}

void Warrior::MoveLeft(const int distance)
{
    int move_range = GetMoveRange();
    if (distance > move_range) {
        std::cout << "Warrior can only move " << move_range
                  << " units at a time." << std::endl;
        std::cout << "Warrior moves left " << move_range << " units.\n"
                  << std::endl;
    }
    else {
        std::cout << "Warrior moves left " << distance << " units.\n"
                  << std::endl;
    }
}

void Warrior::MoveRight(const int distance)
{
    int move_range = GetMoveRange();
    if (distance > move_range) {
        std::cout << "Warrior can only move " << move_range
                  << " units at a time." << std::endl;
        std::cout << "Warrior moves right " << move_range << " units.\n"
                  << std::endl;
    }
    else {
        std::cout << "Warrior moves right " << distance << " units.\n"
                  << std::endl;
    }
}

void Warrior::Attack()
{
    std::cout << "Warrior swings a sword to attack!\n" << std::endl;
}

void Warrior::SpecialAttack()
{
    std::cout << "Warrior performs a powerful spinning attack!\n" << std::endl;
}

void Warrior::Rest()
{
    std::cout << "Warrior is resting to recover energy...\n" << std::endl;
}