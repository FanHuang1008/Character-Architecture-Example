#ifndef MAGE_HPP_
#define MAGE_HPP_

#include "api.hpp"
#include <iostream>

class Mage : public Character
{
public:
    Mage();
    ~Mage();

    void CharacterInit() override;

    void MoveForward(const int distance) override;
    void MoveBackward(const int distance) override;
    void MoveLeft(const int distance) override;
    void MoveRight(const int distance) override;
    
    void Attack() override;
    void SpecialAttack() override;

    void Rest() override;
};

#endif // MAGE_HPP_