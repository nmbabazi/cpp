/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nailambz <nailambz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 17:51:11 by nailambz          #+#    #+#             */
/*   Updated: 2021/02/09 16:07:40 by nailambz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

class FragTrap
{

	public:

		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap &		operator=(FragTrap const & rhs);
		unsigned int	rangedAttack(std::string const & target);
		unsigned int	meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned int	vaulthunter_dot_exe(std::string const & target);
		void			sniperAttack(std::string const & target);
		void			rocketAttack(std::string const & target);
		void			laserAttack(std::string const & target);

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