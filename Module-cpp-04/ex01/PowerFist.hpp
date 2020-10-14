/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/13 22:28:30 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

// LIBS ========================================================================
# include "AWeapon.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class PowerFist;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(const PowerFist & copy);
        virtual ~PowerFist();
        PowerFist &operator=(const PowerFist& op);
        
        // Additionnal
        void    attack() const;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif