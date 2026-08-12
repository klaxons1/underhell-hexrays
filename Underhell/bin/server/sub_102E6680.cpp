void __thiscall sub_102E6680(_DWORD *this, int a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int i; // edi
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  bool v9; // sf
  _DWORD *v10; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( sub_10257050(a2) )
  {
    v11 = a2 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) : -1;
    v4 = sub_10319100(&v11);
    if ( v4 != -1 )
    {
      if ( this[281] - v4 - 1 > 0 )
        memcpy((void *)(this[278] + 4 * v4), (const void *)(this[278] + 4 * v4 + 4), 4 * (this[281] - v4 - 1));
      --this[281];
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    for ( i = 0; i < this[276]; ++i )
    {
      v6 = *(_DWORD *)(this[273] + 4 * i);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[273] + 4 * i) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(this[273] + 4 * i) & 0xFFF) + 1];
      v8 = __RTDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CWateryDeathLeech `RTTI Type Descriptor',
             0);
      if ( v8 )
        *(_DWORD *)(v8 + 1120) = -1;
    }
    if ( (int)this[276] > 0 )
    {
      v9 = (int)this[275] < 0;
      this[276] = 0;
      if ( !v9 )
      {
        if ( this[273] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[273]);
          this[273] = 0;
        }
        this[274] = 0;
      }
      this[277] = this[273];
    }
    v10 = (_DWORD *)__RTDynamicCast(
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CHL2_Player `RTTI Type Descriptor',
                      0);
    if ( v10 && (v10[64] & 0x400000) == 0 )
      sub_102DB8E0(v10);
    v2 = a2;
  }
  sub_102576F0(this, v2);
}
