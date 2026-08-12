void __thiscall sub_100C35E0(_BYTE *this, char a2, char a3, char a4)
{
  _BYTE *v5; // eax
  int *v6; // ecx
  _BYTE *v7; // eax
  int *v8; // ecx
  _BYTE *v9; // eax
  int *v10; // ecx

  if ( *this != a2 )
  {
    v5 = this - 116;
    if ( *(this - 32) )
    {
      v5[88] |= 1u;
    }
    else
    {
      v6 = (int *)*((_DWORD *)v5 + 6);
      if ( v6 )
        sub_100194B0(v6, 116);
    }
    *this = a2;
  }
  if ( this[1] != a3 )
  {
    v7 = this - 116;
    if ( *(this - 32) )
    {
      v7[88] |= 1u;
    }
    else
    {
      v8 = (int *)*((_DWORD *)v7 + 6);
      if ( v8 )
        sub_100194B0(v8, 116);
    }
    this[1] = a3;
  }
  if ( this[2] != a4 )
  {
    v9 = this - 116;
    if ( *(this - 32) )
    {
      v9[88] |= 1u;
      this[2] = a4;
    }
    else
    {
      v10 = (int *)*((_DWORD *)v9 + 6);
      if ( v10 )
        sub_100194B0(v10, 116);
      this[2] = a4;
    }
  }
}
