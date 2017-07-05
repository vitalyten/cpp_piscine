/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:46:14 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 15:40:59 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
# include <iostream>
# include <fstream>

class Logger {
public:
	Logger(std::string);
	~Logger();

	void log(std::string const & dest, std::string const & message);
private:
	std::string _file;

	void logToConsole(std::string);
	void logToFile(std::string);
	std::string makeLogEntry(std::string);
};

typedef void (Logger::*fp)(std::string);

#endif
