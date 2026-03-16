#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include "api.hpp"
#include <iostream>

class Warrior : public Character
{
public:
    Warrior();
    ~Warrior();

    void CharacterInit() override;

    void MoveForward(const int distance) override;
    void MoveBackward(const int distance) override;
    void MoveLeft(const int distance) override;
    void MoveRight(const int distance) override;
    
    void Attack() override;
    void SpecialAttack() override;

    void Rest() override;
};

#endif // WARRIOR_HPP_