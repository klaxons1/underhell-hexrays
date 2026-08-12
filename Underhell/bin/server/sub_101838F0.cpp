int __thiscall sub_101838F0(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx

  v2 = this[77];
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1], v3[1] == v2 >> 12) && (v4 = *v3) != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 80))(v4, a2);
  else
    return 16;
}
