/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blino <blino@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:16:32 by blino             #+#    #+#             */
/*   Updated: 2022/10/29 18:06:11 by blino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook(void){
	count = 0;
}

Phonebook::~Phonebook(void){
	;
}

void	Phonebook::Add(std::string *data){
	if (this->count != 8){
		this->contact[this->count].SetContact(data);
		this->count++;
	}
	else{
		for (int i = 0; i < 7; i++){
			this->contact[i] = this->contact[i + 1];
		}
		this->contact[7].SetContact(data);
	}
}

void	Phonebook::Search(void)
{
	int	i;

	std::cout << SEARCH_HEADER << std::endl;
	if (this->count == 0)
	{
		std::cout << "Phone book is empty" << std::endl;
		return ;
	}
	i = 0;
	while (i < this->count)
	{
		std::cout << "|" << std::setw(10) << i;
		if (this->contact[i].GetFirstname().length() > 10)
			std::cout << "|" << this->contact[i].GetFirstname().substr(
				0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contact[i].GetFirstname();
		if (this->contact[i].GetLastname().length() > 10)
			std::cout << "|" << this->contact[i].GetLastname().substr(
				0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contact[i].GetLastname();
		if (this->contact[i].GetNickname().length() > 10)
			std::cout << "|" << this->contact[i].GetNickname().substr(
				0, 9) << ".";
		else
			std::cout << "|" << std::setw(10) << this->contact[i].GetNickname();
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << SEARCH_FOOTER << std::endl;
}

void	Phonebook::DisplayContact(void)
{
	int	i;

	if (this->count == 0)
		return ;
	std::cout << "index> ";
	if (std::cin >> i)
	{
		if ( i >= this->count || i < 0)
		{
		std::cout << "Index out of range!" << std::endl;
		return ;
		}
		std::cout << std::endl;
		std::cout << "First name:	"
			<< this->contact[i].GetFirstname() << std::endl;
		std::cout << "Last name:	"
			<< this->contact[i].GetLastname() << std::endl;
		std::cout << "Nickname:	"
			<< this->contact[i].GetNickname() << std::endl;
		std::cout << "Phone number:	"
			<< this->contact[i].GetNumber() << std::endl;
		std::cout << "Darkest secret:	"
			<< this->contact[i].GetSecret() << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Invalid index value entered!" << std::endl;
		std::cin.clear();
		std::cin.ignore();
	}
}
