char __cdecl sub_10101A60(int a1, float *a2, int *a3, int a4, int a5, int a6, int a7)
{
  char result; // al
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  float *v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // edi
  _DWORD *v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  double v23; // st7
  double v24; // st6
  int v25; // [esp+4h] [ebp-Ch]
  int v26; // [esp+8h] [ebp-8h]
  int v27; // [esp+Ch] [ebp-4h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF
  int v29; // [esp+1Ch] [ebp+Ch]

  if ( !*((_BYTE *)a2 + 64) )
    return sub_10101850((int)&savedregs, a1, a2, a3, a4, a5, a6, a7);
  v9 = a4;
  v26 = -1;
  *(float *)(a7 + 44) = 1.0;
  v25 = -1;
  *(_BYTE *)(a7 + 55) = 0;
  v29 = 0;
  if ( *(int *)(a4 + 4) <= 0 )
    return 0;
  v27 = 0;
  while ( 1 )
  {
    v10 = v27 + *(_DWORD *)(v9 + 8);
    v11 = 216 * *(_DWORD *)(v10 + v9);
    v12 = (float *)(v9 + v10);
    if ( (a6 & *(_DWORD *)(*(_DWORD *)(*a3 + 160) + v11 + *a3 + 180)) != 0 )
    {
      v13 = sub_101015D0(v12, a2, *(float **)(a5 + 4 * *(_DWORD *)v12), a7);
      if ( v13 >= 0 )
      {
        v26 = v29;
        v25 = v13;
      }
    }
    v27 += 68;
    if ( ++v29 >= *(_DWORD *)(a4 + 4) )
      break;
    v9 = a4;
  }
  if ( v26 < 0 )
    return 0;
  v14 = *(float *)(a7 + 44);
  v15 = 68 * v26 + *(_DWORD *)(a4 + 8);
  *(float *)(a7 + 12) = a2[4] * v14 + *a2;
  v16 = (_DWORD *)(a4 + v15);
  *(float *)(a7 + 16) = a2[5] * v14 + a2[1];
  *(float *)(a7 + 20) = v14 * a2[6] + a2[2];
  v17 = *(_DWORD *)(68 * v26 + *(_DWORD *)(a4 + 8) + a4 + 4);
  *(_DWORD *)(a7 + 80) = v26;
  *(_DWORD *)(a7 + 68) = v17;
  v18 = *(_DWORD *)(*a3 + 160) + 216 * *v16;
  v19 = *(_DWORD *)(v18 + *a3 + 180);
  v20 = *a3 + v18;
  *(_DWORD *)(a7 + 48) = v19 | 0x40000000;
  *(_WORD *)(a7 + 72) = *(_WORD *)(v20 + 172);
  *(_WORD *)(a7 + 66) = 0x8000;
  *(_DWORD *)(a7 + 60) = "**studio**";
  *(_WORD *)(a7 + 64) = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 12))(a1, v20 + *(_DWORD *)(v20 + 176));
  v21 = *(_DWORD *)(a5 + 4 * *v16);
  if ( v25 < 3 )
  {
    *(float *)(a7 + 24) = -*(float *)(v21 + 4 * v25);
    *(float *)(a7 + 28) = -*(float *)(v21 + 4 * v25 + 16);
    v22 = -*(float *)(v21 + 4 * v25 + 32);
  }
  else
  {
    *(float *)(a7 + 24) = *(float *)(v21 + 4 * v25 - 12);
    *(float *)(a7 + 28) = *(float *)(v21 + 4 * v25 + 4);
    v22 = *(float *)(v21 + 4 * v25 + 20);
  }
  *(float *)(a7 + 32) = v22;
  result = 1;
  v23 = *(float *)(a7 + 28) * *(float *)(a7 + 16) + *(float *)(a7 + 12) * *(float *)(a7 + 24);
  v24 = *(float *)(a7 + 32) * *(float *)(a7 + 20);
  *(_BYTE *)(a7 + 40) = 3;
  *(float *)(a7 + 36) = v23 + v24;
  return result;
}
