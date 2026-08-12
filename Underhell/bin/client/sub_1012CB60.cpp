void __thiscall sub_1012CB60(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int i; // esi
  int j; // esi
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  if ( (int)this[5] > 0 )
  {
    v7 = 0;
    v6 = this[5];
    do
    {
      v2 = *(_DWORD **)(v7 + this[1] + 20);
      if ( v2 )
      {
        v2[5] = 0;
        if ( (int)v2[4] >= 0 )
        {
          if ( v2[2] )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v2[2]);
            v2[2] = 0;
          }
          v2[3] = 0;
        }
        v3 = v2[2];
        v2[6] = v3;
        if ( (int)v2[4] >= 0 )
        {
          if ( v3 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v3);
            v2[2] = 0;
          }
          v2[3] = 0;
        }
        sub_10034930((int)v2);
      }
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  for ( i = sub_1012C2D0(this); i != -1; i = sub_1012C370(this, i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * i + 16));
  sub_1012C210(this);
  for ( j = sub_1012C2D0(this); j != -1; j = sub_1012C370(this, j) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[1] + 24 * j + 16));
  sub_1012C210(this);
  sub_1012C210(this);
  this[6] = -1;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  this[7] = -1;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
}
