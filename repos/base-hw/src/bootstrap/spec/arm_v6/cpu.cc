/*
 * \brief  CPU driver for core
 * \author Norman Feske
 * \author Martin stein
 * \author Stefan Kalkowski
 * \date   2012-08-30
 */

/*
 * Copyright (C) 2012-2017 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

#include <cpu.h>

void Genode::Arm::clean_invalidate_data_cache() {
	asm volatile ("mcr p15, 0, %[rd], c7, c14, 0" :: [rd]"r"(0) : ); }


void Genode::Cpu::translation_added(Genode::addr_t const addr,
                                    Genode::size_t const size) { }
