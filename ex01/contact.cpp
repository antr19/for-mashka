/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:48:30 by blino             #+#    #+#             */
/*   Updated: 2022/10/29 17:56:24 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void){
	;
}

Contact::~Contact(void){
	;
}

std::string	Contact::GetFirstname(){
	return this->firstname;
}

std::string	Contact::GetLastname(){
	return this->lastname;
}

std::string	Contact::GetNickname(){
	return this->nickname;
}

std::string	Contact::GetNumber(){
	return this->phone_number;
}

std::string	Contact::GetSecret(){
	return this->darkest_secret;
}

void	Contact::SetContact(std::string *data){
	this->firstname = data[0];
	this->lastname = data[1];
	this->nickname = data[2];
	this->phone_number = data[3];
	this->darkest_secret = data[4];
}