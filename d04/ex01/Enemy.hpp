#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {

public:
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &src);
	virtual ~Enemy(void);
	Enemy &operator=(Enemy const &rhs);

	const std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);

protected:
	int					_hp;
	std::string			_type;

	Enemy(void);

private:

};

#endif
