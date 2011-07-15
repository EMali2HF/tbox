/*!The Tiny Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2011, ruki All rights reserved.
 *
 * \author		ruki
 * \file		gif.c
 *
 */

/* /////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* /////////////////////////////////////////////////////////
 * types
 */


/* /////////////////////////////////////////////////////////
 * details
 */


/* /////////////////////////////////////////////////////////
 * interfaces
 */

tb_size_t tb_format_gif_probe(tb_gstream_t* st)
{
	tb_byte_t const* p = tb_gstream_need(st, 6);
	if ( 	p 
		&& 	p[0] == 'G'
		&& 	p[1] == 'I' 
		&& 	p[2] == 'F' 
		&& 	p[3] == '8' 
		&& ( 	p[4] == '7'
			|| 	p[4] == '9') 
		&& 	p[5] == 'a')
		return 60;
	else return 0;
}
