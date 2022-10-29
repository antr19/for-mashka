/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:24:25 by blino             #+#    #+#             */
/*   Updated: 2022/10/29 17:53:47 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact{

private:
	
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	
	Contact(void);
	~Contact(void);

	std::string	GetFirstname();
	std::string	GetLastname();
	std::string	GetNickname();
	std::string	GetNumber();
	std::string	GetSecret();
	void		SetContact(std::string *data);
};

#endif