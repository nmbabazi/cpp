/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:24:48 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 16:13:28 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include <iostream>
# include <string>
# include <time.h> 
# include "FragTrap.hpp"

class ScravTrap
{

	public:

		ScravTrap();
		ScravTrap(std::string name);
		ScravTrap( ScravTrap const & src );
		~ScravTrap();

		ScravTrap &		operator=( ScravTrap const & rhs );
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				challengeNewcomer(FragTrap & target);

		std::string 	getName();
		int				getHitPoints();
		unsigned int 	getMaxHitPoints();
		int 			getEnergyPoints();
		unsigned 		getMaxEnergyPoints();
		int 			getLevel();
		int 			getMeleeAttackDamage();
		int 			getRangedAttackDamage();
		int 			getArmorDamageReduction();

	private:

		std::string		_name;
		int				_hitPoints;
		unsigned int	_maxHit;
		int				_energyPoints;
		unsigned int	_maxEnergy;
		int				_level;
		int				_meleeAttack;
		int				_rangeAttack;
		int				_armorDamage;

};

#endif 