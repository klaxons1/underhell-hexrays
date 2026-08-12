void __thiscall sub_103E60D0(_BYTE *this, char a2)
{
  _BYTE *v2; // esi
  _BYTE *v3; // eax
  int *v4; // ecx

  v2 = this + 461;
  if ( a2 != this[461] )
  {
    v3 = this - 1120;
    if ( *(this - 1036) )
    {
      v3[88] |= 1u;
      *v2 = a2;
    }
    else
    {
      v4 = (int *)*((_DWORD *)v3 + 6);
      if ( v4 )
        sub_100194B0(v4, 1581);
      *v2 = a2;
    }
  }
}
