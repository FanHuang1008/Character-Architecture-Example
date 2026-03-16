#ifndef CHARACTER_API_HPP_
#define CHARACTER_API_HPP_

#include <memory>

class Character
{
public:
	virtual ~Character() {}

	static std::shared_ptr<Character> Create();

	virtual void CharacterInit() = 0;

	int GetHealth() const { return health_; }
	int GetMana() const { return mana_; }
	int GetMoveRange() const { return move_range_; }

	virtual void MoveForward(const int distance) = 0;
	virtual void MoveBackward(const int distance) = 0;
	virtual void MoveLeft(const int distance) = 0;
	virtual void MoveRight(const int distance) = 0;

	virtual void Attack() = 0;
	virtual void SpecialAttack() = 0;

	virtual void Rest() = 0;

protected:
	void SetMoveRange(const int move_range) { move_range_ = move_range; }
	void SetHealth(const int health) { health_ = health; }
	void SetMana(const int mana) { mana_ = mana; }

private:
	int health_;
	int mana_;
	int move_range_;
};  // class Character

#endif  // CHARACTER_API_HPP_