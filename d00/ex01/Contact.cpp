/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:11:05 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/03 21:10:40 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

void Contact::set_first_name(std::string str) {
	this->first_name = str;
}

void Contact::set_last_name(std::string str) {
	this->last_name = str;
}

void Contact::set_nickname(std::string str) {
	this->nickname = str;
}

void Contact::set_login(std::string str) {
	this->login = str;
}

void Contact::set_postal_address(std::string str) {
	this->postal_address = str;
}

void Contact::set_email_address(std::string str) {
	this->email_address = str;
}

void Contact::set_phone_number(std::string str) {
	this->phone_number = str;
}

void Contact::set_birthday_date(std::string str) {
	this->birthday_date = str;
}

void Contact::set_favorite_meal(std::string str) {
	this->favorite_meal = str;
}

void Contact::set_underwear_color(std::string str) {
	this->underwear_color = str;
}

void Contact::set_darkest_secret(std::string str) {
	this->darkest_secret = str;
}


std::string Contact::get_first_name() {
	return this->first_name;
}

std::string Contact::get_last_name() {
	return this->last_name;
}

std::string Contact::get_nickname() {
	return this->nickname;
}

std::string Contact::get_login() {
	return this->login;
}

std::string Contact::get_postal_address() {
	return this->postal_address;
}

std::string Contact::get_email_address() {
	return this->email_address;
}

std::string Contact::get_phone_number() {
	return this->phone_number;
}

std::string Contact::get_birthday_date() {
	return this->birthday_date;
}

std::string Contact::get_favorite_meal() {
	return this->favorite_meal;
}

std::string Contact::get_underwear_color() {
	return this->underwear_color;
}

std::string Contact::get_darkest_secret() {
	return this->darkest_secret;
}
