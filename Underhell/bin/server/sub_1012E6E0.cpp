int __thiscall sub_1012E6E0(unsigned int *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  unsigned int *v6; // eax
  int *v7; // ecx

  v3 = *this;
  if ( *this == -1 || (v4 = &off_1061BE18[4 * (*this & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( v5 != a2 )
  {
    v6 = this - 206;
    if ( *((_BYTE *)this - 740) )
    {
      *((_BYTE *)v6 + 88) |= 1u;
    }
    else
    {
      v7 = (int *)v6[6];
      if ( v7 )
        sub_100194B0(v7, 824);
    }
    if ( a2 )
    {
      *this = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      return a2;
    }
    *this = -1;
  }
  return a2;
}
