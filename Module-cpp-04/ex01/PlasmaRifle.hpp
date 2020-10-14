/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:24:44 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

// LIBS ========================================================================
# include "AWeapon.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class PlasmaRifle;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(const PlasmaRifle & copy);
        virtual ~PlasmaRifle();
        PlasmaRifle &operator=(const PlasmaRifle& op);
        
        // Additionnal
        void    attack() const;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif