int __cdecl sub_10404A10(int a1, char *String2, float *a3, float *a4)
{
  double v5; // st7
  int v6; // esi
  int *v7; // edx
  unsigned int v8; // eax
  int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // esi
  float *v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // eax
  double v17; // st7
  unsigned int v18; // eax
  int v19; // [esp-8h] [ebp-5Ch]
  int v20; // [esp-4h] [ebp-58h]
  float v21; // [esp+Ch] [ebp-48h]
  int v22; // [esp+14h] [ebp-40h] BYREF
  float v23; // [esp+18h] [ebp-3Ch]
  int v24[3]; // [esp+24h] [ebp-30h] BYREF
  float v25; // [esp+30h] [ebp-24h]
  float v26; // [esp+34h] [ebp-20h]
  float v27; // [esp+38h] [ebp-1Ch]
  float v28; // [esp+3Ch] [ebp-18h]
  float v29; // [esp+40h] [ebp-14h]
  float v30; // [esp+44h] [ebp-10h]
  float v31; // [esp+48h] [ebp-Ch]
  int v32; // [esp+4Ch] [ebp-8h]
  float v33; // [esp+50h] [ebp-4h]

  if ( !String2 )
    return 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v21 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
      + *(float *)(a1 + 476) * *(float *)(a1 + 476)
      + *(float *)(a1 + 484) * *(float *)(a1 + 484);
  v5 = off_10689708(v21);
  v33 = v5;
  if ( 0.0 != v5 )
    v33 = 1.0 / v5;
  v6 = dword_106F06C4 - 1;
  v32 = dword_106F06C4 - 1;
  if ( dword_106F06C4 - 1 < 0 )
    return 0;
  v7 = off_1061BE18;
  while ( 1 )
  {
    v8 = *(_DWORD *)(dword_106F06B8 + 4 * v6);
    if ( v8 == -1 || v7[4 * (*(_DWORD *)(dword_106F06B8 + 4 * v6) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = v7[4 * (*(_DWORD *)(dword_106F06B8 + 4 * v6) & 0xFFF) + 1];
    if ( *(char **)(v9 + 260) == String2 )
      break;
    if ( sub_100D6190((_DWORD *)v9, String2) )
    {
      v7 = off_1061BE18;
      break;
    }
LABEL_35:
    v7 = off_1061BE18;
LABEL_36:
    v32 = --v6;
    if ( v6 < 0 )
      return 0;
  }
  v10 = *(_DWORD *)(v9 + 800);
  if ( v10 == -1
    || v7[4 * (*(_DWORD *)(v9 + 800) & 0xFFF) + 2] != v10 >> 12
    || !v7[4 * (*(_DWORD *)(v9 + 800) & 0xFFF) + 1] )
  {
    goto LABEL_36;
  }
  v11 = *(_DWORD *)(v9 + 800);
  if ( v11 == -1 || v7[4 * (*(_DWORD *)(v9 + 800) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = v7[4 * (*(_DWORD *)(v9 + 800) & 0xFFF) + 1];
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 576))(v12);
  v25 = *v13 - *(float *)(a1 + 580);
  v26 = v13[1] - *(float *)(a1 + 584);
  v14 = v13[2] - *(float *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 252) >> 11;
  v27 = v14;
  if ( (v15 & 1) != 0 )
    sub_100DAE60(a1);
  v28 = *a3 - *(float *)(a1 + 580);
  v29 = a3[1] - *(float *)(a1 + 584);
  v30 = a3[2] - *(float *)(a1 + 588);
  v31 = off_10689714();
  off_10689714();
  if ( v29 * v26 + v28 * v25 + v30 * v27 < 0.866
    || (*(float *)v24 = *a4 * 3.0,
        *(float *)&v24[1] = a4[1] * 3.0,
        *(float *)&v24[2] = 3.0 * a4[2],
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 320) + 8))(v9 + 320),
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 320) + 4))(v9 + 320),
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 320) + 40))(v9 + 320),
        !sub_10113CF0((int)a3, (int)v24, v16, v19, v20, 0.0, (int)&v22))
    || (v17 = v31 * v33 * 0.33333334, *(float *)&v22 * *(float *)&v22 > v17)
    || v23 * v23 < v17 )
  {
    v6 = v32;
    goto LABEL_35;
  }
  v18 = *(_DWORD *)(v9 + 800);
  if ( v18 != -1 && off_1061BE18[4 * (*(_DWORD *)(v9 + 800) & 0xFFF) + 2] == v18 >> 12 )
    return off_1061BE18[4 * (*(_DWORD *)(v9 + 800) & 0xFFF) + 1];
  return 0;
}
