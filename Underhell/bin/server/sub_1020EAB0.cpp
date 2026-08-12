void __thiscall sub_1020EAB0(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int *v4; // ecx

  v2 = this + 143;
  if ( this[143] != a2 )
  {
    v3 = this - 280;
    if ( *((_BYTE *)this - 1036) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *v2 = a2;
    }
    else
    {
      v4 = (int *)v3[6];
      if ( v4 )
        sub_100194B0(v4, 1692);
      *v2 = a2;
    }
  }
}
