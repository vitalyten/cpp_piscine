/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtenigin <vtenigin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:46:01 by vtenigin          #+#    #+#             */
/*   Updated: 2017/07/05 15:50:11 by vtenigin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void) {
	Logger logger("file.log");

	logger.log("logToConsole", "log console entry 001");
	logger.log("logToConsole", "log console entry 002");
	logger.log("logToFile", "log file entry 001");
	logger.log("logToFile", "log file entry 002");
	logger.log("logToFile", "log file entry 003");
	return 0;
}
