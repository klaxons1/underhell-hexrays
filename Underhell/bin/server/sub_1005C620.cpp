void __thiscall sub_1005C620(_BYTE *this, char a2, char a3, char a4, char a5)
{
  _BYTE *v6; // eax
  int *v7; // ecx
  _BYTE *v8; // eax
  int *v9; // ecx
  _BYTE *v10; // eax
  int *v11; // ecx
  _BYTE *v12; // eax
  int *v13; // ecx

  if ( *this != a2 )
  {
    v6 = this - 116;
    if ( *(this - 32) )
    {
      v6[88] |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)v6 + 6);
      if ( v7 )
        sub_100194B0(v7, 116);
    }
    *this = a2;
  }
  if ( this[1] != a3 )
  {
    v8 = this - 116;
    if ( *(this - 32) )
    {
      v8[88] |= 1u;
    }
    else
    {
      v9 = (int *)*((_DWORD *)v8 + 6);
      if ( v9 )
        sub_100194B0(v9, 116);
    }
    this[1] = a3;
  }
  if ( this[2] != a4 )
  {
    v10 = this - 116;
    if ( *(this - 32) )
    {
      v10[88] |= 1u;
    }
    else
    {
      v11 = (int *)*((_DWORD *)v10 + 6);
      if ( v11 )
        sub_100194B0(v11, 116);
    }
    this[2] = a4;
  }
  if ( this[3] != a5 )
  {
    v12 = this - 116;
    if ( *(this - 32) )
    {
      v12[88] |= 1u;
      this[3] = a5;
    }
    else
    {
      v13 = (int *)*((_DWORD *)v12 + 6);
      if ( v13 )
        sub_100194B0(v13, 116);
      this[3] = a5;
    }
  }
}
