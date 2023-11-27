/* libusershell_econf.so: *usershell() functions using libeconf
   Copyright (C) 2023 Thorsten Kukuk

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with program; if not, see <https://www.gnu.org/licenses/>. */

#include <stdio.h>
#include <unistd.h>

#include "usershell_econf.h"

/* Test case: call checkusershell_econf()  */

int
main (void)
{
  printf ("/bin/sh entry should exist\n");
  if (!checkusershell_econf("/bin/sh"))
    return 1;

  printf ("/does/not/exists entry should not exist\n");
  if (checkusershell_econf("/does/not/exists"))
    return 1;

  return 0;
}
