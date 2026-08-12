int __thiscall sub_1041E7C0(_DWORD *this)
{
  int v2; // edi
  bool v3; // cc
  int v4; // ebp
  int i; // edi
  int v6; // ecx
  int v7; // ebp
  int j; // ebp
  _DWORD *v9; // edi
  bool v10; // sf
  int v11; // eax
  int k; // ebp
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int result; // eax

  v2 = 0;
  v3 = this[9] <= 0;
  *this = &CChoreoScene::`vftable';
  if ( !v3 )
  {
    do
    {
      v4 = *(_DWORD *)(this[6] + 4 * v2);
      if ( v4 )
      {
        sub_102375F0((int *)(v4 + 256));
        sub_10184660(v4);
      }
      ++v2;
    }
    while ( v2 < this[9] );
  }
  this[9] = 0;
  for ( i = 0; i < this[4]; ++i )
  {
    v6 = this[1];
    v7 = *(_DWORD *)(v6 + 4 * i);
    if ( v7 )
    {
      sub_1041C5F0(*(int **)(v6 + 4 * i));
      sub_10184660(v7);
    }
  }
  this[4] = 0;
  for ( j = 0; j < this[14]; ++j )
  {
    v9 = *(_DWORD **)(this[11] + 4 * j);
    if ( v9 )
    {
      v10 = (int)v9[35] < 0;
      v9[36] = 0;
      if ( !v10 )
      {
        if ( v9[33] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v9[33]);
          v9[33] = 0;
        }
        v9[34] = 0;
      }
      v10 = (int)v9[35] < 0;
      v11 = v9[33];
      v9[37] = v11;
      if ( !v10 )
      {
        if ( v11 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v11);
          v9[33] = 0;
        }
        v9[34] = 0;
      }
      sub_10184660((int)v9);
    }
  }
  this[14] = 0;
  for ( k = sub_100BB3F0(this + 89); k != -1; k = sub_100BBAC0(this + 89, k) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[90] + 24 * k + 16));
  sub_100BBA00(this + 89);
  sub_100BBA00(this + 89);
  this[95] = -1;
  if ( (int)this[92] >= 0 )
  {
    if ( this[90] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[90]);
      this[90] = 0;
    }
    this[91] = 0;
  }
  this[96] = -1;
  if ( (int)this[92] >= 0 )
  {
    if ( this[90] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[90]);
      this[90] = 0;
    }
    this[91] = 0;
  }
  v10 = (int)this[86] < 0;
  this[87] = 0;
  if ( !v10 )
  {
    if ( this[84] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[84]);
      this[84] = 0;
    }
    this[85] = 0;
  }
  v10 = (int)this[86] < 0;
  v13 = this[84];
  this[88] = v13;
  if ( !v10 )
  {
    if ( v13 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v13);
      this[84] = 0;
    }
    this[85] = 0;
  }
  v10 = (int)this[77] < 0;
  this[78] = 0;
  if ( !v10 )
  {
    if ( this[75] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[75]);
      this[75] = 0;
    }
    this[76] = 0;
  }
  v10 = (int)this[77] < 0;
  v14 = this[75];
  this[79] = v14;
  if ( !v10 )
  {
    if ( v14 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
      this[75] = 0;
    }
    this[76] = 0;
  }
  v10 = (int)this[28] < 0;
  this[29] = 0;
  if ( !v10 )
  {
    if ( this[26] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[26]);
      this[26] = 0;
    }
    this[27] = 0;
  }
  v10 = (int)this[28] < 0;
  v15 = this[26];
  this[30] = v15;
  if ( !v10 )
  {
    if ( v15 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
      this[26] = 0;
    }
    this[27] = 0;
  }
  v10 = (int)this[23] < 0;
  this[24] = 0;
  if ( !v10 )
  {
    if ( this[21] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[21]);
      this[21] = 0;
    }
    this[22] = 0;
  }
  v10 = (int)this[23] < 0;
  v16 = this[21];
  this[25] = v16;
  if ( !v10 )
  {
    if ( v16 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
      this[21] = 0;
    }
    this[22] = 0;
  }
  v10 = (int)this[18] < 0;
  this[19] = 0;
  if ( !v10 )
  {
    if ( this[16] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[16]);
      this[16] = 0;
    }
    this[17] = 0;
  }
  v10 = (int)this[18] < 0;
  v17 = this[16];
  this[20] = v17;
  if ( !v10 )
  {
    if ( v17 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
      this[16] = 0;
    }
    this[17] = 0;
  }
  v10 = (int)this[13] < 0;
  this[14] = 0;
  if ( !v10 )
  {
    if ( this[11] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[11]);
      this[11] = 0;
    }
    this[12] = 0;
  }
  v10 = (int)this[13] < 0;
  v18 = this[11];
  this[15] = v18;
  if ( !v10 )
  {
    if ( v18 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v18);
      this[11] = 0;
    }
    this[12] = 0;
  }
  v10 = (int)this[8] < 0;
  this[9] = 0;
  if ( !v10 )
  {
    if ( this[6] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[6]);
      this[6] = 0;
    }
    this[7] = 0;
  }
  v10 = (int)this[8] < 0;
  v19 = this[6];
  this[10] = v19;
  if ( !v10 )
  {
    if ( v19 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19);
      this[6] = 0;
    }
    this[7] = 0;
  }
  v10 = (int)this[3] < 0;
  this[4] = 0;
  if ( !v10 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  v10 = (int)this[3] < 0;
  result = this[1];
  this[5] = result;
  if ( !v10 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      this[1] = 0;
    }
    this[2] = 0;
  }
  return result;
}
