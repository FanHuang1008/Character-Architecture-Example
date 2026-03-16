#ifndef RANGER_HPP_
#define RANGER_HPP_

#include "api.hpp"
#include <iostream>

class Ranger : public Character
{
public:
    Ranger();
    ~Ranger();

    void CharacterInit() override;

    void MoveForward(const int distance) override;
    void MoveBackward(const int distance) override;
    void MoveLeft(const int distance) override;
    void MoveRight(const int distance) override;
    
    void Attack() override;
    void SpecialAttack() override;

    void Rest() override;
};

#endif // RANGER_HPP_