char __thiscall sub_103F1210(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  char *v5; // eax
  char **v6; // edi
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // eax

  v3 = this[519];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[519] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      if ( *v4 )
      {
        sub_103F0C10(this);
        this[519] = -1;
      }
    }
  }
  v5 = (char *)sub_101811E0("weapon_striderbuster", -1);
  v6 = (char **)v5;
  if ( v5 )
  {
    sub_10260750(v5);
    v7 = this[518];
    if ( v7 == -1 || off_1061BE18[4 * (this[518] & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (this[518] & 0xFFF) + 1];
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    (*((void (__thiscall **)(char **, int, _DWORD, _DWORD))*v6 + 104))(v6, v8 + 580, 0, 0);
    v9 = this[518];
    if ( v9 == -1 || off_1061BE18[4 * (this[518] & 0xFFF) + 2] != v9 >> 12 )
      LOBYTE(v5) = sub_103F0680(0, (int)this, v6);
    else
      LOBYTE(v5) = sub_103F0680(off_1061BE18[4 * (this[518] & 0xFFF) + 1], (int)this, v6);
  }
  return (char)v5;
}
