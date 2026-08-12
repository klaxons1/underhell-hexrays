int __usercall sub_1035BFA0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v2; // esi
  int *v4; // edx
  _DWORD *v5; // edi
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int *v9; // ecx
  float *v10; // ecx
  bool v11; // c0
  bool v12; // al
  unsigned int *v13; // ecx
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  __int64 v16; // [esp-8h] [ebp-14h]

  v2 = a1;
  if ( (*(_BYTE *)(a1 + 250) & 1) != 0 )
    return sub_101A8DB0(a1, a2);
  v4 = off_1061BE18;
  v5 = (_DWORD *)(a1 + 3760);
  if ( *(_DWORD *)(a1 + 3760) != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3760) & 0xFFF) + 2] == *(_DWORD *)(a1 + 3760) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3760) & 0xFFF) + 1] )
  {
    v6 = *(_DWORD *)(a1 + 3756);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3756) & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3756) & 0xFFF) + 1];
    v8 = *(_DWORD *)(v7 + 1716);
    if ( v8 == -1 || (v9 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 1716) & 0xFFF) + 1], v9[1] != v8 >> 12) )
      v10 = 0;
    else
      v10 = (float *)*v9;
    v11 = sub_101DC8E0(v10) > 0.0;
    a2 = 0.0;
    if ( !v11 )
    {
      if ( *(_DWORD *)(v2 + 2324) == 1 && *(_DWORD *)(v2 + 2336) != 2 )
        *(_DWORD *)(v2 + 2336) = 2;
      return 93;
    }
    if ( *(_BYTE *)(v2 + 3788) )
    {
      v16 = __PAIR64__(v2, sub_1026A890((unsigned int *)(v2 + 3760)));
      sub_1010DD80((_DWORD *)(v2 + 3804), v16, 0.0);
    }
    sub_10194990((int *)(v2 + 3768), *(_DWORD *)(v2 + 3780), (_DWORD *)(v2 + 3760));
    *v5 = -1;
    v4 = off_1061BE18;
  }
  if ( *(_BYTE *)(v2 + 3788) )
  {
    if ( *v5 == -1 || v4[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 || !v4[4 * (*v5 & 0xFFF) + 1] )
      return 1;
    return 93;
  }
  if ( *(_BYTE *)(v2 + 3789) )
    return 96;
  if ( *(_DWORD *)(v2 + 2324) != 3 )
    goto LABEL_35;
  v12 = sub_10023D10((_DWORD *)v2, 21);
  v13 = (unsigned int *)(v2 + 3756);
  if ( !v12 )
  {
    v15 = (_DWORD *)sub_1026A890(v13);
    a2 = sub_1035AD90(v15);
    if ( 0.0 == a2 )
      return 92;
LABEL_35:
    a1 = v2;
    return sub_101A8DB0(a1, a2);
  }
  v14 = (_DWORD *)sub_1026A890(v13);
  if ( 0.0 != sub_1035AD90(v14) )
    return 91;
  return 92;
}
