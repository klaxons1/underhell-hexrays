char __thiscall sub_100E6C90(_DWORD *this)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v2 = (int)(this + 1);
  *this = &CUtlCachedFileData<CModelSoundsCache>::`vftable';
  v10 = this + 1;
  sub_100DDC70((int)(this + 1));
  v3 = this[11];
  v4 = 0;
  v11 = v3;
  v12 = 0;
  if ( v3 > 0 )
  {
    do
    {
      v5 = *(_DWORD **)(this[8] + 4 * v4);
      if ( v5 )
      {
        v5[4] = 0;
        if ( (int)v5[3] >= 0 )
        {
          if ( v5[1] )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v5[1]);
            v5[1] = 0;
          }
          v5[2] = 0;
        }
        v6 = v5[1];
        v5[5] = v6;
        if ( (int)v5[3] >= 0 )
        {
          if ( v6 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v6);
            v5[1] = 0;
          }
          v5[2] = 0;
        }
        sub_10184660(v5);
        v3 = v11;
        v4 = v12;
      }
      v12 = ++v4;
    }
    while ( v4 < v3 );
    v2 = (int)v10;
  }
  this[11] = 0;
  if ( (int)this[10] >= 0 )
  {
    if ( this[8] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[8]);
      this[8] = 0;
    }
    this[9] = 0;
  }
  v7 = this[8];
  this[12] = v7;
  if ( (int)this[10] >= 0 )
  {
    if ( v7 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
      this[8] = 0;
    }
    this[9] = 0;
  }
  LOBYTE(v8) = sub_100DDC70(v2);
  *(_WORD *)(v2 + 20) = -1;
  if ( *(int *)(v2 + 12) >= 0 )
  {
    v8 = *(_DWORD *)(v2 + 4);
    if ( v8 )
    {
      LOBYTE(v8) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v2 + 4));
      *(_DWORD *)(v2 + 4) = 0;
    }
    *(_DWORD *)(v2 + 8) = 0;
  }
  *(_WORD *)(v2 + 22) = -1;
  if ( *(int *)(v2 + 12) >= 0 )
  {
    v8 = *(_DWORD *)(v2 + 4);
    if ( v8 )
    {
      LOBYTE(v8) = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v2 + 4));
      *(_DWORD *)(v2 + 4) = 0;
    }
    *(_DWORD *)(v2 + 8) = 0;
  }
  return v8;
}
