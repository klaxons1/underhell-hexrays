int __thiscall sub_1029FC90(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int v7; // eax

  v4 = this[17];
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v5[1] != v4 >> 12) )
    v6 = 0;
  else
    v6 = *v5;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 340))(v6);
  return (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v7 + 124))(v7, this[1], a2, a3);
}
