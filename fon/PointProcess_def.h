/* PointProcess_def.h
 *
 * Copyright (C) 1992-2005,2011,2014-2018 Paul Boersma
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */


#define ooSTRUCT PointProcess
oo_DEFINE_CLASS (PointProcess, Function)

	#if oo_DECLARING
		oo_INTEGER (maxnt)
	#endif

	oo_INTEGER (nt)
	oo_VEC (t, nt)

	#if oo_COPYING
		thy maxnt = thy nt;
	#elif oo_READING
		our maxnt = our nt;
	#endif

	#if oo_DECLARING
		void v_info ()
			override;
		int v_domainQuantity ()
			override { return MelderQuantity_TIME_SECONDS; }
		void v_shiftX (double xfrom, double xto)
			override;
		void v_scaleX (double xminfrom, double xmaxfrom, double xminto, double xmaxto)
			override;
	#endif

oo_END_CLASS (PointProcess)
#undef ooSTRUCT


/* End of file PointProcess_def.h */
