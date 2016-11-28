// HippoMocks, a library for using mocks in unit testing of C++ code.
// Copyright (C) 2008, Bas van Tiel, Christian Rexwinkel, Mike Looijmans,
// Peter Bindels
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
// You can also retrieve it from http://www.gnu.org/licenses/lgpl-2.1.html

#ifndef HIPPOMOCKS_REVERSE_H
#define HIPPOMOCKS_REVERSE_H

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4510) // MSVC 2013 says: Cannot generate default constructor. This is fine, as we won't use it.
#pragma warning(disable: 4512) // MSVC 2013 says: Cannot generate assignment operator. This is fine, as we won't use it.
#pragma warning(disable: 4610) // MSVC 2013 says: Cannot create object. It's wrong.
#endif
template <typename T>
struct reversed_container {
	T& container; 
};
#ifdef _MSC_VER
#pragma warning(pop)
#endif

template <typename T>
auto begin(reversed_container<T> container) -> decltype(container.container.rbegin()) { return container.container.rbegin(); }

template <typename T>
auto end(reversed_container<T> container) -> decltype(container.container.rend()) { return container.container.rend(); }

template <typename T>
reversed_container<T> reverse_order(T& container) { return { container }; }

#endif


