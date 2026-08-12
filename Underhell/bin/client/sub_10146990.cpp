char __thiscall sub_10146990(_DWORD *this, const void *a2, unsigned int *a3, int *a4)
{
  int v5; // eax
  int v6; // eax

  sub_10145000(this, a2);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
  *a4 = v5;
  if ( v5 == 1 || *(_DWORD *)(dword_1043BF64 + 48) == 2 )
  {
    if ( *(_DWORD *)(dword_1043BF64 + 48) )
    {
      v6 = sub_100422D0();
      if ( v6 )
      {
        if ( *(_DWORD *)(v6 + 3712) == 255 )
          v6 = 0;
        else
          v6 += 3692;
      }
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  this[39] = v6;
  if ( !v6 )
    return 0;
  this[34] = *a3;
  *a3 = *a3 & 0xFFFFFFD8 | 2;
  this[33] = 112;
  if ( *(_DWORD *)(dword_1043BFAC + 48) )
    this[33] = 2160;
  return 1;
}
