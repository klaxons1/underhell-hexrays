void __thiscall sub_1019F980(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  unsigned int i; // edi
  int v5; // eax

  v2 = (_DWORD *)this[1];
  *this = &CNavMesh::`vftable';
  if ( v2 )
    sub_1019EFF0(v2, 3);
  v3 = this[313];
  this[1] = 0;
  if ( v3 )
    sub_10184660(v3);
  for ( i = 0; i < this[266]; ++i )
    sub_10184660(*(_DWORD *)(this[265] + 4 * i));
  this[327] = 0;
  if ( (int)this[326] >= 0 )
  {
    if ( this[324] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[324]);
      this[324] = 0;
    }
    this[325] = 0;
  }
  v5 = this[324];
  this[328] = v5;
  if ( (int)this[326] >= 0 )
  {
    if ( v5 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
      this[324] = 0;
    }
    this[325] = 0;
  }
  sub_1019EB70(this + 314);
  if ( (int)this[316] >= 0 )
  {
    if ( this[314] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[314]);
      this[314] = 0;
    }
    this[315] = 0;
  }
  sub_1018EC70(this + 300);
  if ( (int)this[302] >= 0 )
  {
    if ( this[300] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[300]);
      this[300] = 0;
    }
    this[301] = 0;
  }
}
