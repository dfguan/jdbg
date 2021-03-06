/*  This file is part of Jellyfish.

    Jellyfish is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Jellyfish is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Jellyfish.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <include/err.hpp>

namespace err {
  std::ostream &operator<<(std::ostream &os, const err::substr &ss) {
    os.write(ss._s, ss._l);
    return os;
  }

  std::ostream &operator<<(std::ostream &os, const err::no_t &x) {
    x.write(os, errno);
    return os;
  }
}
