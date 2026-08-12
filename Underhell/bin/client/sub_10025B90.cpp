void __thiscall sub_10025B90(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx

  v3 = this[2];
  if ( v3 >= 0 )
  {
    v4 = this[1];
    v5 = v4 + a2;
    if ( v3 )
    {
      v4 = v3 * ((v5 - 1) / v3 + 1);
    }
    else
    {
      if ( !v4 )
        v4 = 1;
      for ( ; v4 < v5; v4 *= 2 )
        ;
    }
    this[1] = v4;
    if ( v4 < v5 )
    {
      if ( v4 || v5 > -1 )
      {
        do
          v4 = (v5 + v4) / 2;
        while ( v4 < v5 );
        this[1] = v4;
      }
      else
      {
        this[1] = -1;
      }
    }
    if ( *this )
      *this = (*(int (__thiscall **)(_DWORD, _DWORD, int))(*g_pMemAlloc + 12))(g_pMemAlloc, *this, 76 * this[1]);
    else
      *this = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 76 * this[1]);
  }
}
