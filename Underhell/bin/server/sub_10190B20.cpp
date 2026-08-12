void __thiscall sub_10190B20(int *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int i; // esi
  _DWORD *v7; // esi
  int j; // ebx
  _DWORD *v9; // esi
  int k; // [esp+Ch] [ebp-4h]

  sub_1018F580(this + 30);
  if ( !byte_106B7A14 )
  {
    v2 = dword_10632630;
    if ( dword_10632630 != -1 )
    {
      v3 = dword_10632624;
      do
      {
        v4 = 12 * v2;
        v5 = *(int **)(v4 + v3);
        if ( v5 != this )
        {
          sub_1018F6A0(v5, (int)this);
          v3 = dword_10632624;
        }
        v2 = *(_DWORD *)(v4 + v3 + 8);
      }
      while ( v2 != -1 );
    }
    for ( i = *(_DWORD *)(dword_106B8370 + 1212); i != -1; i = *(_DWORD *)(12 * i
                                                                         + *(_DWORD *)(dword_106B8370 + 1200)
                                                                         + 8) )
      sub_1019C170(this);
    sub_1019FF30(this);
  }
  sub_1018EC70(this + 189);
  if ( this[191] >= 0 )
  {
    if ( this[189] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[189]);
      this[189] = 0;
    }
    this[190] = 0;
  }
  v7 = this + 185;
  for ( j = 1; j >= 0; --j )
  {
    v7 -= 9;
    sub_1018EC70(v7);
    if ( (int)v7[2] >= 0 )
    {
      if ( *v7 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v7);
        *v7 = 0;
      }
      v7[1] = 0;
    }
  }
  v9 = this + 167;
  for ( k = 3; k >= 0; --k )
  {
    v9 -= 9;
    sub_1018EC70(v9);
    if ( (int)v9[2] >= 0 )
    {
      if ( *v9 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v9);
        *v9 = 0;
      }
      v9[1] = 0;
    }
  }
  sub_1018EC70(this + 30);
  if ( this[32] >= 0 )
  {
    if ( this[30] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[30]);
      this[30] = 0;
    }
    this[31] = 0;
  }
  sub_1018EC70(this + 21);
  if ( this[23] >= 0 )
  {
    if ( this[21] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[21]);
      this[21] = 0;
    }
    this[22] = 0;
  }
}
