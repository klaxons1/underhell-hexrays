void __thiscall sub_1007FE00(_DWORD *this)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // edi
  void (__thiscall ****v5)(_DWORD, int); // eax
  void (__thiscall ***v6)(_DWORD, int); // eax
  bool v7; // sf
  int v8; // ecx

  v2 = 0;
  this[93] = 0;
  if ( (int)this[92] >= 0 )
  {
    if ( this[90] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[90]);
      this[90] = 0;
    }
    this[91] = 0;
  }
  this[94] = this[90];
  sub_1007DA10(this + 7);
  if ( (int)this[9] >= 0 )
  {
    if ( this[7] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[7]);
      this[7] = 0;
    }
    this[8] = 0;
  }
  this[15] = this[7];
  this[12] = 0xFFFF;
  this[14] = -1;
  sub_1007F580(this + 25);
  sub_1007E180(this + 16);
  if ( (int)this[18] >= 0 )
  {
    if ( this[16] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[16]);
      this[16] = 0;
    }
    this[17] = 0;
  }
  v3 = this[16];
  this[21] = 0xFFFF;
  this[23] = -1;
  this[24] = v3;
  if ( (int)this[5] > 0 )
  {
    v4 = 12;
    do
    {
      v5 = (void (__thiscall ****)(_DWORD, int))(v4 + this[2]);
      if ( *v5 )
      {
        v6 = *v5;
        if ( v6 )
          (**v6)(v6, 1);
        *(_DWORD *)(v4 + this[2]) = 0;
      }
      ++v2;
      v4 += 16;
    }
    while ( v2 < this[5] );
  }
  v7 = (int)this[4] < 0;
  this[5] = 0;
  if ( !v7 )
  {
    if ( this[2] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    this[3] = 0;
  }
  this[6] = this[2];
  sub_1007F580(this + 45);
  sub_1007F860(this + 65);
  this[88] = 0;
  if ( (int)this[87] < 0 )
  {
    this[89] = this[85];
  }
  else
  {
    if ( this[85] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[85]);
      this[85] = 0;
    }
    v8 = this[85];
    this[86] = 0;
    this[89] = v8;
  }
}
