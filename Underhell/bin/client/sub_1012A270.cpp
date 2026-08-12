__int16 __cdecl sub_1012A270(int a1, int a2, int a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  _BYTE *v18; // eax
  int v19; // ecx
  int v20; // edx
  _BYTE *v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // ebx
  int v26; // edi
  float Src; // [esp+0h] [ebp-10h]
  float Srca; // [esp+0h] [ebp-10h]
  float Srcb; // [esp+0h] [ebp-10h]
  float Srcc; // [esp+0h] [ebp-10h]
  float Srcd; // [esp+0h] [ebp-10h]
  float Srce; // [esp+0h] [ebp-10h]

  v3 = *(_DWORD *)(a1 + 12);
  v4 = v3 + 1;
  if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(a3 + 4) + 1 )
  {
    if ( v4 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v3 >> 3)) &= ~(1 << (v3 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v4 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v3 >> 3)) |= 1 << (v3 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    sub_1012A1E0((_DWORD *)a1, *(_DWORD *)(a2 + 4), 32, 1);
  }
  v5 = *(_DWORD *)(a1 + 12);
  v6 = v5 + 1;
  if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(a3 + 8) + 1 )
  {
    if ( v6 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v5 >> 3)) &= ~(1 << (v5 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v6 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v5 >> 3)) |= 1 << (v5 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    sub_1012A1E0((_DWORD *)a1, *(_DWORD *)(a2 + 8), 32, 1);
  }
  v7 = *(_DWORD *)(a1 + 12);
  if ( *(float *)(a3 + 12) == *(float *)(a2 + 12) )
  {
    if ( v7 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v7 >> 3) + *(_DWORD *)a1) &= ~(1 << (v7 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v7 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v7 >> 3)) |= 1 << (v7 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    Src = *(float *)(a2 + 12);
    sub_10232D90(SLOBYTE(Src));
  }
  v8 = *(_DWORD *)(a1 + 12);
  if ( *(float *)(a3 + 16) == *(float *)(a2 + 16) )
  {
    if ( v8 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v8 >> 3) + *(_DWORD *)a1) &= ~(1 << (v8 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v8 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v8 >> 3)) |= 1 << (v8 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    Srca = *(float *)(a2 + 16);
    sub_10232D90(SLOBYTE(Srca));
  }
  v9 = *(_DWORD *)(a1 + 12);
  if ( *(float *)(a3 + 20) == *(float *)(a2 + 20) )
  {
    if ( v9 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v9 >> 3) + *(_DWORD *)a1) &= ~(1 << (v9 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v9 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v9 >> 3)) |= 1 << (v9 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    Srcb = *(float *)(a2 + 20);
    sub_10232D90(SLOBYTE(Srcb));
  }
  v10 = *(_DWORD *)(a1 + 12);
  if ( *(float *)(a3 + 24) == *(float *)(a2 + 24) )
  {
    if ( v10 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v10 >> 3) + *(_DWORD *)a1) &= ~(1 << (v10 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v10 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v10 >> 3)) |= 1 << (v10 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    Srcc = *(float *)(a2 + 24);
    sub_10232D90(SLOBYTE(Srcc));
  }
  v11 = *(_DWORD *)(a1 + 12);
  if ( *(float *)(a3 + 28) == *(float *)(a2 + 28) )
  {
    if ( v11 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v11 >> 3) + *(_DWORD *)a1) &= ~(1 << (v11 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v11 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v11 >> 3)) |= 1 << (v11 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    Srcd = *(float *)(a2 + 28);
    sub_10232D90(SLOBYTE(Srcd));
  }
  v12 = *(_DWORD *)(a1 + 12);
  if ( *(float *)(a3 + 32) == *(float *)(a2 + 32) )
  {
    if ( v12 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v12 >> 3) + *(_DWORD *)a1) &= ~(1 << (v12 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v12 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v12 >> 3)) |= 1 << (v12 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    Srce = *(float *)(a2 + 32);
    sub_10232D90(SLOBYTE(Srce));
  }
  v13 = *(_DWORD *)(a1 + 12);
  v14 = v13 + 1;
  if ( *(_DWORD *)(a2 + 36) == *(_DWORD *)(a3 + 36) )
  {
    if ( v14 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v13 >> 3)) &= ~(1 << (v13 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v14 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v13 >> 3)) |= 1 << (v13 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    sub_1012A1E0((_DWORD *)a1, *(_DWORD *)(a2 + 36), 32, 1);
  }
  v15 = *(_DWORD *)(a1 + 12);
  v16 = v15 + 1;
  if ( *(_BYTE *)(a2 + 40) == *(_BYTE *)(a3 + 40) )
  {
    if ( v16 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v15 >> 3)) &= ~(1 << (v15 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v16 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v15 >> 3)) |= 1 << (v15 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    sub_1012A1E0((_DWORD *)a1, *(unsigned __int8 *)(a2 + 40), 8, 1);
  }
  v17 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a2 + 44) == *(_DWORD *)(a3 + 44) )
  {
    if ( v17 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v18 = (_BYTE *)((v17 >> 3) + *(_DWORD *)a1);
      goto LABEL_120;
    }
  }
  else
  {
    if ( v17 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v17 >> 3)) |= 1 << (v17 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    sub_1012A1E0((_DWORD *)a1, *(_DWORD *)(a2 + 44), 11, 1);
    v17 = *(_DWORD *)(a1 + 12);
    if ( *(_DWORD *)(a2 + 48) != *(_DWORD *)(a3 + 48) )
    {
      if ( v17 + 1 > *(_DWORD *)(a1 + 8) )
        *(_BYTE *)(a1 + 16) = 1;
      if ( !*(_BYTE *)(a1 + 16) )
      {
        *(_BYTE *)((v17 >> 3) + *(_DWORD *)a1) |= 1 << (v17 & 7);
        ++*(_DWORD *)(a1 + 12);
      }
      sub_1012A1E0((_DWORD *)a1, *(_DWORD *)(a2 + 48), 6, 1);
      goto LABEL_121;
    }
    if ( v17 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v18 = (_BYTE *)(*(_DWORD *)a1 + (v17 >> 3));
LABEL_120:
      *v18 &= ~(1 << (v17 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
LABEL_121:
  v19 = *(_DWORD *)(a1 + 12);
  v20 = v19 + 1;
  if ( *(_WORD *)(a2 + 56) == *(_WORD *)(a3 + 56) )
  {
    if ( v20 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v19 >> 3)) &= ~(1 << (v19 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v20 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v19 >> 3)) |= 1 << (v19 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    sub_10232F80(*(__int16 *)(a2 + 56));
  }
  LOWORD(v21) = *(_WORD *)(a2 + 58);
  v22 = *(_DWORD *)(a1 + 12);
  v23 = v22 + 1;
  if ( (_WORD)v21 == *(_WORD *)(a3 + 58) )
  {
    if ( v23 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v21 = (_BYTE *)(*(_DWORD *)a1 + (v22 >> 3));
      *v21 &= ~(1 << (v22 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  else
  {
    if ( v23 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)(*(_DWORD *)a1 + (v22 >> 3)) |= 1 << (v22 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    LOWORD(v21) = sub_10232F80(*(__int16 *)(a2 + 58));
  }
  v24 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a2 + 76) )
  {
    if ( v24 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      *(_BYTE *)((v24 >> 3) + *(_DWORD *)a1) |= 1 << (v24 & 7);
      ++*(_DWORD *)(a1 + 12);
    }
    LOWORD(v21) = sub_10232F80(*(_DWORD *)(a2 + 76));
    v25 = 0;
    if ( *(int *)(a2 + 76) > 0 )
    {
      v26 = 0;
      do
      {
        sub_1012A1E0((_DWORD *)a1, *(_DWORD *)(v26 + *(_DWORD *)(a2 + 64)), 11, 1);
        sub_10232E40(*(float *)(v26 + *(_DWORD *)(a2 + 64) + 4));
        sub_10232E40(*(float *)(v26 + *(_DWORD *)(a2 + 64) + 8));
        LOWORD(v21) = a2;
        ++v25;
        v26 += 12;
      }
      while ( v25 < *(_DWORD *)(a2 + 76) );
    }
  }
  else
  {
    if ( v24 + 1 > *(_DWORD *)(a1 + 8) )
      *(_BYTE *)(a1 + 16) = 1;
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v21 = (_BYTE *)(*(_DWORD *)a1 + (v24 >> 3));
      *v21 &= ~(1 << (v24 & 7));
      ++*(_DWORD *)(a1 + 12);
    }
  }
  return (__int16)v21;
}
