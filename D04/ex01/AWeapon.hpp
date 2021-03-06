/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouykou <obouykou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:53:29 by obouykou          #+#    #+#             */
/*   Updated: 2021/02/12 12:46:03 by obouykou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &src);
		virtual ~AWeapon();
		AWeapon 		&operator=(const AWeapon &src);
		
		std::string 	getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		
		virtual void	attack() const = 0;

	protected:
		std::string	_name;
		int			_APCost;
		int			_damage;
};


#endif // !AWEAPON_H