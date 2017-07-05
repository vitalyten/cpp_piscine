/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:46:11 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 15:47:27 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name) : _file(name) {
	std::cout << "Logger created." << std::endl;
}

Logger::~Logger() {
	std::cout << "Logger destroyed." << std::endl;
}

void Logger::logToConsole(std::string entry) {
	std::cout << entry << std::endl;
}

void Logger::logToFile(std::string entry) {
	std::ofstream outfile(this->_file, std::ios_base::app);
	outfile << entry << std::endl;
	outfile.close();
}

std::string Logger::makeLogEntry(std::string message) {
	std::string entry = "[";
	return entry + __TIMESTAMP__ + "] " + message;
}

void Logger::log(std::string const & dest, std::string const & message) {
	fp actions[2] = {&Logger::logToConsole, &Logger::logToFile};
	std::string action_names[2] = {"logToConsole", "logToFile"};
	std::string entry = Logger::makeLogEntry(message);
	for (int i = 0; i < 2; i++) {
		if (dest == action_names[i])
			(this->*(actions[i]))(entry);
	}
}
