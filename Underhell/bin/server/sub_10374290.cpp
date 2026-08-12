unsigned int __usercall sub_10374290@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  unsigned int result; // eax
  int *v5; // ecx
  int v6; // esi
  int v7; // eax
  double v8; // st7
  double v9; // st4
  double v10; // st3
  double v11; // st7
  double v12; // st5
  double v13; // st6
  int v14; // ecx
  int *v15; // ebx
  double v16; // st7
  int v17; // edx
  double v18; // st7
  double v19; // st7
  int (__thiscall *v20)(int); // eax
  int *v21; // esi
  int v22; // ebx
  int v23; // eax
  float v26; // [esp+24h] [ebp-20h] BYREF
  float v27; // [esp+28h] [ebp-1Ch]
  float v28; // [esp+2Ch] [ebp-18h]
  float v29; // [esp+30h] [ebp-14h] BYREF
  float v30; // [esp+34h] [ebp-10h]
  float v31; // [esp+38h] [ebp-Ch]
  float v32; // [esp+3Ch] [ebp-8h]
  float v33; // [esp+40h] [ebp-4h]

  result = *(_DWORD *)(a1 + 4636);
  if ( result != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 4636) & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      v6 = *v5;
      if ( *v5 )
      {
        (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v6 + 536))(v6, &v26, a3);
        v32 = off_10689714();
        v7 = *(_DWORD *)(a1 + 252) >> 11;
        v8 = v28 * 0.0;
        v9 = v27 - v8;
        v29 = v9;
        v10 = v8 - v26;
        v30 = v10;
        v11 = v10;
        v12 = v26 * 0.0 - 0.0 * v27;
        v13 = v9;
        v31 = v12;
        if ( (v7 & 1) != 0 )
        {
          sub_100DAE60(a1);
          v13 = v29;
          v12 = v31;
          v11 = v30;
        }
        v14 = *(_DWORD *)(v6 + 252) >> 11;
        v33 = *(float *)(a1 + 584) * v11 + *(float *)(a1 + 580) * v13 + *(float *)(a1 + 588) * v12;
        if ( (v14 & 1) != 0 )
        {
          sub_100DAE60(v6);
          v13 = v29;
          v12 = v31;
          v11 = v30;
        }
        if ( *(float *)(v6 + 584) * v11 + v13 * *(float *)(v6 + 580) + *(float *)(v6 + 588) * v12 > v33 )
        {
          v29 = v13 * -1.0;
          v30 = v11 * -1.0;
          v31 = v12 * -1.0;
        }
        off_10689714();
        v31 = 1.0;
        v15 = *(int **)(v6 + 424);
        v16 = sub_10134630(v32, *(float *)(dword_106E90B4 + 44), *(float *)(dword_106E90FC + 44), 50.0, 150.0);
        v17 = *v15;
        v32 = v16;
        v18 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v17 + 116))(v15, a2);
        v19 = v18 * v32;
        v20 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 576);
        v29 = v29 * v19;
        v30 = v30 * v19;
        v31 = v19 * v31;
        v21 = *(int **)(v6 + 424);
        v22 = *v21;
        v23 = v20(a1);
        return (*(int (__thiscall **)(int *, float *, int))(v22 + 240))(v21, &v29, v23);
      }
    }
  }
  return result;
}
