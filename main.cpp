#include "include/api.hpp"

int main()
{
    std::shared_ptr<Character> character = Character::Create();
    character->CharacterInit();

    character->MoveForward(3);
    character->MoveBackward(6);
    character->MoveLeft(9);
    character->MoveRight(12);

    character->Attack();
    character->SpecialAttack();

    character->Rest();

    return 0;
}