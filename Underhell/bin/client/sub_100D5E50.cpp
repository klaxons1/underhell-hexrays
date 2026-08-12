int __thiscall sub_100D5E50(_BYTE *this, int a2, int a3, int a4)
{
  if ( (a3 == 107 || a3 == 108) && this[184] )
    return 0;
  if ( dword_1044CC48 )
    return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1044CC48 + 68))(dword_1044CC48, a2, a3, a4);
  return 1;
}
