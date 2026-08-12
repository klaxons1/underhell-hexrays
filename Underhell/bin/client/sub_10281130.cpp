int __thiscall sub_10281130(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ebp
  unsigned int v6; // ebp
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  bool v13; // sf
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int result; // eax

  v2 = this + 26;
  *this = &vgui::BuildGroup::`vftable';
  if ( sub_10237C80(this + 26) )
  {
    v3 = sub_10237C80(v2);
    if ( v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 120))(v3, 1);
  }
  sub_102393F0(v2, 0);
  sub_10034930(this[24]);
  sub_10034930(this[25]);
  v4 = this + 44;
  v5 = 4;
  do
  {
    if ( *v4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v4 + 120))(*v4, 1);
      *v4 = 0;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = this[1] & 0xFFFFF;
  if ( v6 < dword_10481998 )
  {
    v7 = (_DWORD *)(dword_1048198C + 8 * v6);
    v8 = *v7 ^ (*v7 ^ (*v7 + 1)) & 0x7FFFFFFF;
    *v7 = v8;
    if ( v8 >= 0 )
    {
      *v7 = v8 | 0x80000000;
      --dword_10481988;
    }
    v7[1] = 0;
    if ( (*v7 & 0x7FFFFFFFu) < 0x7FF )
    {
      v9 = dword_104819AC;
      v10 = dword_104819AC;
      if ( dword_104819AC + 1 > dword_104819A4 )
      {
        sub_1010AFF0(&dword_104819A0, dword_104819AC - dword_104819A4 + 1);
        v9 = dword_104819AC;
      }
      v11 = dword_104819A0;
      dword_104819AC = v9 + 1;
      v12 = v9 - v10;
      dword_104819B0 = dword_104819A0;
      if ( v12 > 0 )
      {
        memcpy((void *)(dword_104819A0 + 4 * v10 + 4), (const void *)(dword_104819A0 + 4 * v10), 4 * v12);
        v11 = dword_104819A0;
      }
      *(_DWORD *)(v11 + 4 * v10) = v6;
    }
  }
  this[1] = -1;
  v13 = (int)this[51] < 0;
  this[52] = 0;
  if ( !v13 )
  {
    if ( this[49] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[49]);
      this[49] = 0;
    }
    this[50] = 0;
  }
  v13 = (int)this[51] < 0;
  v14 = this[49];
  this[53] = v14;
  if ( !v13 )
  {
    if ( v14 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
      this[49] = 0;
    }
    this[50] = 0;
  }
  v13 = (int)this[41] < 0;
  this[42] = 0;
  if ( !v13 )
  {
    if ( this[39] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[39]);
      this[39] = 0;
    }
    this[40] = 0;
  }
  v13 = (int)this[41] < 0;
  v15 = this[39];
  this[43] = v15;
  if ( !v13 )
  {
    if ( v15 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v15);
      this[39] = 0;
    }
    this[40] = 0;
  }
  v13 = (int)this[36] < 0;
  this[37] = 0;
  if ( !v13 )
  {
    if ( this[34] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[34]);
      this[34] = 0;
    }
    this[35] = 0;
  }
  v13 = (int)this[36] < 0;
  v16 = this[34];
  this[38] = v16;
  if ( !v13 )
  {
    if ( v16 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v16);
      this[34] = 0;
    }
    this[35] = 0;
  }
  v13 = (int)this[31] < 0;
  this[32] = 0;
  if ( !v13 )
  {
    if ( this[29] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[29]);
      this[29] = 0;
    }
    this[30] = 0;
  }
  v13 = (int)this[31] < 0;
  v17 = this[29];
  this[33] = v17;
  if ( !v13 )
  {
    if ( v17 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v17);
      this[29] = 0;
    }
    this[30] = 0;
  }
  v13 = (int)this[21] < 0;
  this[22] = 0;
  if ( !v13 )
  {
    if ( this[19] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[19]);
      this[19] = 0;
    }
    this[20] = 0;
  }
  v13 = (int)this[21] < 0;
  result = this[19];
  this[23] = result;
  if ( !v13 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      this[19] = 0;
    }
    this[20] = 0;
  }
  return result;
}
