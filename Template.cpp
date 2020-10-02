/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: excalibur <excalibur@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:31:43 by excalibur         #+#    #+#             */
/*   Updated: 2020/03/27 10:46:41 by excalibur        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

// COPLIEN =====================================================================

/**
 * @brief Constructor:
 * The "Template".
 */
Template::Template() {}

/**
 * @brief Copy:
 * Copy the "Template".
 * 
 * @param copy the "Template" to copy.
 */
Template::Template(const Template& copy) { (void)copy; }

/**
 * @brief Destructor:
 * Called when the object "Template" is delete
 */
Template::~Template() {}

Template & Template::operator=(const Template& op)
{
	if (this == &op)
		return (*this); 
	return (*this);
}
// =============================================================================

// GETTER - SETTER =============================================================

/**
 * @brief Get plop of the "Template".
 * 
 * @return the plop of the "Template".
 */

// =============================================================================

// ADDITIONNAL =================================================================
// =============================================================================

// EXCEPTIONS ==================================================================
// =============================================================================

// FUNCTIONS SUP ===============================================================
// =============================================================================