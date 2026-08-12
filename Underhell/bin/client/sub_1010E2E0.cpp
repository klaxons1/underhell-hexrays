void __thiscall sub_1010E2E0(int this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  unsigned __int16 v6; // di
  int v7; // eax
  unsigned __int16 v8; // cx
  int *v9; // eax
  int v10; // eax
  unsigned __int16 v11; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 36) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 44))(*(_DWORD *)(this + 36));
  v2 = *(unsigned __int16 *)(this + 26);
  v3 = 0;
  if ( *(_WORD *)(this + 26) )
  {
    do
    {
      v4 = *(_DWORD *)(this + 12);
      if ( *(_DWORD *)(v4 + 16 * (unsigned __int16)v3 + 12) )
      {
        v5 = *(_DWORD *)(v4 + 16 * (unsigned __int16)v3 + 12);
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5);
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  v6 = *(_WORD *)(this + 30);
  if ( v6 != 0xFFFF )
  {
    v7 = *(_DWORD *)(this + 16);
    v8 = (v7 > 0) - 1;
    v11 = v8;
    if ( v7 > 0 )
    {
      do
      {
        if ( v8 < v7 && v8 <= v6 )
        {
          if ( (dword_10436F2C & 1) == 0 )
          {
            dword_10436F2C |= 1u;
            dword_10436F24 = -1;
            dword_10436F28 = 0x1FFFF;
          }
          if ( v8 == 0xFFFF )
            v9 = &dword_10436F24;
          else
            v9 = (int *)(*(_DWORD *)(this + 12) + 16 * v8);
          if ( *(_WORD *)v9 != v8 )
          {
            v10 = 2 * v8;
            *(_WORD *)(*(_DWORD *)(this + 12) + 8 * v10 + 2) = *(_WORD *)(this + 28);
            *(_WORD *)(*(_DWORD *)(this + 12) + 8 * v10) = v8;
            *(_WORD *)(this + 28) = v8;
          }
        }
        v6 = *(_WORD *)(this + 30);
        if ( v8 == v6 )
          break;
        v7 = *(_DWORD *)(this + 16);
        ++v8;
        if ( (unsigned __int16)(v11 + 1) >= v7 )
          v8 = -1;
        v11 = v8;
      }
      while ( v8 != 0xFFFF );
    }
    *(_DWORD *)(this + 24) = 0xFFFF;
  }
}
