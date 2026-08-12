void __usercall sub_10399940(int a1@<ecx>, int a2@<ebp>)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  double v9; // st6
  double v10; // st5
  int v11; // ebx
  _DWORD *v12; // eax
  int *v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edi
  double v18; // st6
  double v19; // st5
  int v20; // eax
  int v21; // eax
  float v22; // [esp+4h] [ebp-Ch]
  float v23; // [esp+4h] [ebp-Ch]

  v3 = *(_DWORD *)(a1 + 3744);
  if ( *(_DWORD *)(dword_106EA354 + 48) )
  {
    if ( v3 == -1 )
      goto LABEL_18;
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] != v5 || !*v4 )
      goto LABEL_18;
    v6 = v4[1] == v5 ? *v4 : 0;
    v7 = __RTDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_Hint `RTTI Type Descriptor',
           0);
    v8 = v7;
    if ( !v7 || *(_WORD *)(v7 + 816) != 13 )
      goto LABEL_18;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    v9 = *(float *)(v8 + 584) - *(float *)(a1 + 584);
    v10 = *(float *)(v8 + 580) - *(float *)(a1 + 580);
    v22 = v10 * v10 + v9 * v9;
    if ( off_10689708(v22) > 24.0
      && (v11 = *(_DWORD *)a1,
          v12 = sub_10019640((_DWORD *)v8),
          (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(v11 + 880))(a1, v12))
      && sub_103989D0(a1, a2, v8, a1, v8) )
    {
      sub_10395940((int *)a1, v8);
    }
    else
    {
LABEL_18:
      sub_10399800((_BYTE *)a1);
    }
  }
  else if ( v3 != -1 )
  {
    v13 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v14 = v3 >> 12;
    if ( v13[1] == v14 )
    {
      if ( *v13 )
      {
        v15 = v13[1] == v14 ? *v13 : 0;
        if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1080))(a1, v15) != 3 )
        {
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          v16 = sub_10394D70((_DWORD *)a1);
          v17 = v16;
          if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
            sub_100DAE60(v16);
          v18 = *(float *)(v17 + 584) - *(float *)(a1 + 584);
          v19 = *(float *)(v17 + 580) - *(float *)(a1 + 580);
          v23 = v19 * v19 + v18 * v18;
          if ( off_10689708(v23) >= 24.0 )
          {
            v20 = sub_10394D70((_DWORD *)a1);
            if ( sub_103989D0(a1, a2, v17, a1, v20) )
            {
              v21 = sub_10394D70((_DWORD *)a1);
              sub_10395940((int *)a1, v21);
            }
          }
        }
      }
    }
  }
}
