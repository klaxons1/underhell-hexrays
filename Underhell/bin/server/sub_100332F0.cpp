int *__thiscall sub_100332F0(int *this, _DWORD *a2)
{
  int v3; // edi
  int *v4; // eax
  int *v6; // ecx

  v3 = *this & *a2;
  if ( *this != v3 )
  {
    v4 = this - 62;
    if ( *((_BYTE *)this - 164) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v3;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 248);
    *this = v3;
  }
  return this;
}
