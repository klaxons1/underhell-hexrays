int __thiscall sub_10240AF0(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  char *v6; // eax

  v3 = this[273];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = (char *)*v4;
        else
          v6 = 0;
        sub_102409D0(v6, a2);
      }
    }
  }
  return sub_102587A0((int)this, a2);
}
