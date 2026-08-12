int __fastcall sub_102CCFF0(int a1, int a2, int a3)
{
  int *v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int *v6; // edi
  int result; // eax
  unsigned int v8; // esi
  int *v9; // ecx

  if ( *(_DWORD *)(a3 + 24) != 13 )
  {
    if ( (dword_10697954 & 1) == 0 )
      dword_10697954 |= 1u;
    dword_10697950 = -1;
    goto LABEL_5;
  }
  v4 = *(_DWORD *)(a3 + 20);
  if ( v4 == -1
    || off_1061BE18[4 * (*(_DWORD *)(a3 + 20) & 0xFFF) + 2] != v4 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(a3 + 20) & 0xFFF) + 1] )
  {
LABEL_5:
    *(_DWORD *)(a1 + 1076) = 0;
    goto LABEL_6;
  }
  v5 = *(_DWORD *)(a3 + 20);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 20) & 0xFFF) + 2] != v5 >> 12 )
    *(_DWORD *)(a1 + 1076) = MEMORY[0x104];
  else
    *(_DWORD *)(a1 + 1076) = *(_DWORD *)(off_1061BE18[4 * (*(_DWORD *)(a3 + 20) & 0xFFF) + 1] + 260);
LABEL_6:
  if ( *(_DWORD *)(a3 + 24) == 13 )
  {
    v3 = (int *)(a3 + 20);
  }
  else
  {
    if ( (dword_10697954 & 1) == 0 )
      dword_10697954 |= 1u;
    dword_10697950 = -1;
    v3 = &dword_10697950;
  }
  v6 = (unsigned int *)(a1 + 248);
  *(_DWORD *)(a1 + 808) = *v3;
  result = *(_DWORD *)(a1 + 248);
  v8 = result & 0xFFFFFF7F;
  if ( result != (result & 0xFFFFFF7F) )
  {
    result = a1;
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *v6 = v8;
    }
    else
    {
      v9 = *(int **)(a1 + 24);
      if ( v9 )
        result = sub_100194B0(v9, 248);
      *v6 = v8;
    }
  }
  return result;
}
