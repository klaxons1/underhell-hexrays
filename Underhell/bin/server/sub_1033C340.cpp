int __thiscall sub_1033C340(_DWORD *this)
{
  _DWORD *v1; // edi
  _DWORD *v2; // eax
  int v3; // ebx
  int i; // esi
  int v5; // edi
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  _DWORD Base[48]; // [esp+8h] [ebp-D0h] BYREF
  size_t NumOfElements; // [esp+C8h] [ebp-10h]
  _DWORD *v17; // [esp+CCh] [ebp-Ch]
  _DWORD *v18; // [esp+D0h] [ebp-8h]
  int v19; // [esp+D4h] [ebp-4h] BYREF

  v1 = this;
  v18 = this;
  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 || !sub_100296A0(this) )
    return 0;
  if ( (dword_106E6514 & 1) == 0 )
  {
    dword_106E6514 |= 1u;
    dword_106E6510 = -1;
  }
  if ( *(float *)(dword_106B31C8 + 12) - flt_106E650C <= 2.0 && !sub_102DC130((unsigned int *)&dword_106E6510) )
  {
    v2 = (_DWORD *)sub_1026A890((unsigned int *)&dword_106E6510);
    if ( sub_100296A0(v2) )
      goto LABEL_24;
  }
  flt_106E650C = *(float *)(dword_106B31C8 + 12);
  dword_106E6510 = -1;
  NumOfElements = 0;
  v17 = Base;
  v3 = sub_10261B20();
  if ( !v3 )
    goto LABEL_24;
  for ( i = sub_100B1560((_DWORD *)v1[699], &v19, 1); i; i = sub_100B1630((_DWORD *)v1[699], &v19, 1) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 1524))(i)
      && __RTDynamicCast(
           i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
           (int)&CNPC_Citizen `RTTI Type Descriptor',
           0) )
    {
      v5 = 3 * sub_10339770(Base);
      Base[v5] = i;
      LOBYTE(Base[v5 + 1]) = sub_10023D10((_DWORD *)i, 32);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
        sub_100DAE60(i);
      v6 = *(float *)(i + 584) - *(float *)(v3 + 584);
      v7 = v6 * v6;
      v8 = *(float *)(i + 580) - *(float *)(v3 + 580);
      v9 = v7;
      v10 = *(float *)(i + 588) - *(float *)(v3 + 588);
      *(float *)&Base[v5 + 2] = v8 * v8 + v9 + v10 * v10;
      v1 = v18;
    }
  }
  if ( (int)NumOfElements > 0 )
  {
    if ( (int)NumOfElements > 1 )
      qsort(Base, NumOfElements, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10334380);
    if ( Base[0] )
    {
      v11 = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)Base[0] + 8))(Base[0]);
      dword_106E6510 = v11;
    }
    else
    {
      v11 = -1;
      dword_106E6510 = -1;
    }
  }
  else
  {
LABEL_24:
    v11 = dword_106E6510;
  }
  if ( v11 != -1
    && (v12 = &off_1061BE18[4 * (v11 & 0xFFF) + 1], v13 = v11 >> 12, v12[1] == v13)
    && *v12
    && v12[1] == v13 )
  {
    return *v12;
  }
  else
  {
    return 0;
  }
}
