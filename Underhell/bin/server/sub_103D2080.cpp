int __thiscall sub_103D2080(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // eax

  v3 = this[103];
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1], v5 = v3 >> 12, v4[1] == v5)
    && *v4
    && (v4[1] != v5 ? (v6 = 0) : (v6 = *v4),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)
     && (v7 = this[103], v7 != -1)
     && off_1061BE18[4 * (this[103] & 0xFFF) + 2] == v7 >> 12) )
  {
    return off_1061BE18[4 * (this[103] & 0xFFF) + 1];
  }
  else
  {
    return 0;
  }
}
