/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:23:36 by obouykou          #+#    #+#             */
/*   Updated: 2021/02/12 12:35:45 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage): 
_name(name),
_APCost(apcost),
_damage(damage)
{
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

AWeapon::AWeapon(const AWeapon &src)
{
	*this = src;
	return ;
}

AWeapon &AWeapon::operator=(const AWeapon &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_APCost = src._APCost;
		this->_damage = src._damage;
	}
	return *this;
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getAPCost() const
{
	return this->_APCost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}
