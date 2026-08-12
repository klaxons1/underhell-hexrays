bool __cdecl sub_101E48B0(int a1, float a2, float a3)
{
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  double v8; // st7
  int v9; // ecx
  unsigned __int8 (__thiscall *v10)(int); // edx
  int v11; // esi
  int v12; // eax
  float *v13; // ecx
  double v14; // st7
  double v15; // st6
  _DWORD v16[1024]; // [esp+4h] [ebp-1004h] BYREF
  float v17; // [esp+1004h] [ebp-4h]
  char v18; // [esp+1013h] [ebp+Bh]

  if ( !a1 || *(_BYTE *)(a1 + 306) != 6 )
    return 0;
  v5 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 624))(a1, v16, 1024);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = 0;
  v17 = 0.0;
  v18 = 0;
  if ( v5 > 0 )
  {
    do
    {
      v8 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v16[v7] + 116))(v16[v7]);
      v9 = v16[v7];
      v10 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 40);
      v17 = v8 + v17;
      if ( !v10(v9) )
        v18 = 1;
      if ( (*(char (__thiscall **)(_DWORD))(*(_DWORD *)v16[v7] + 76))(v16[v7]) < 0
        || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v16[v7] + 20))(v16[v7]) )
      {
        return 0;
      }
    }
    while ( ++v7 < v6 );
  }
  if ( a2 > 0.0 && a2 < (double)v17 )
    return 0;
  if ( v18 )
  {
    if ( __RTDynamicCast(
           a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBounceBomb `RTTI Type Descriptor',
           0) )
    {
      return 1;
    }
    v11 = __RTDynamicCast(
            a1,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CPhysicsProp `RTTI Type Descriptor',
            0);
    v12 = __RTDynamicCast(
            a1,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CPhysBox `RTTI Type Descriptor',
            0);
    if ( !v11 )
    {
      if ( !v12 )
        return 0;
LABEL_22:
      if ( (*(_DWORD *)(v12 + 248) & 0x20000) == 0 )
        return 0;
      goto LABEL_23;
    }
    if ( (*(_DWORD *)(v11 + 248) & 0x40) == 0 )
      return 0;
    if ( v12 )
      goto LABEL_22;
  }
LABEL_23:
  if ( a3 <= 0.0 )
    return 1;
  v13 = (float *)sub_10022D70();
  *v13 = *(float *)(a1 + 340) - *(float *)(a1 + 328);
  v13[1] = *(float *)(a1 + 344) - *(float *)(a1 + 332);
  v14 = *(float *)(a1 + 348) - *(float *)(a1 + 336);
  v13[2] = v14;
  v15 = a3;
  return a3 >= (double)*v13 && v15 >= v13[1] && v15 >= v14;
}
