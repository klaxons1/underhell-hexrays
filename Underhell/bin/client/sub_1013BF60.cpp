void __fastcall sub_1013BF60(int a1)
{
  int v1; // ebx
  double v2; // st7
  double v3; // st6
  int v4; // edi
  int v5; // esi
  double v6; // st5
  double v7; // st5
  double v8; // st5
  double v9; // st5
  double v10; // st5
  float *v11; // esi
  void (__fastcall *v12)(int); // eax
  int v13; // eax
  int v14; // ecx
  double v15; // st7
  int v16; // ecx
  double v17; // st6
  int v18; // eax
  float *v19; // ecx
  int v20; // eax
  float v21; // [esp+4h] [ebp-68h]
  float v22; // [esp+18h] [ebp-54h] BYREF
  float v23; // [esp+1Ch] [ebp-50h]
  float v24; // [esp+20h] [ebp-4Ch]
  int v25[3]; // [esp+24h] [ebp-48h] BYREF
  int v26[6]; // [esp+30h] [ebp-3Ch] BYREF
  int v27; // [esp+48h] [ebp-24h] BYREF
  float v28; // [esp+4Ch] [ebp-20h]
  float v29; // [esp+50h] [ebp-1Ch]
  float v30; // [esp+54h] [ebp-18h] BYREF
  float v31; // [esp+58h] [ebp-14h]
  float v32; // [esp+5Ch] [ebp-10h]
  float v33; // [esp+60h] [ebp-Ch]
  int v34; // [esp+64h] [ebp-8h]
  float v35; // [esp+68h] [ebp-4h]

  v1 = a1;
  if ( *(_BYTE *)(a1 + 1184) )
    return;
  v2 = *((float *)off_103DC81C + 3) - *(float *)(a1 + 1180);
  v33 = v2;
  v3 = 0.0;
  if ( v2 < 0.0 )
  {
    v33 = 0.001;
    v2 = 0.001;
  }
  v4 = *(_DWORD *)(a1 + 1200);
  v35 = 0.0;
  v5 = 0;
  if ( v4 < 4 )
  {
LABEL_12:
    if ( v5 >= v4 )
    {
LABEL_21:
      if ( v5 > 0 )
      {
        v11 = *(float **)(*(_DWORD *)(v1 + 1188) + 4 * v5 - 4);
        sub_1013BCF0(v1 - 12, *v11, v11[1], v11[2]);
      }
      v12 = *(void (__fastcall **)(int))(v1 + 1224);
      if ( v12 )
        v12(a1);
      *(_BYTE *)(v1 + 1184) = 1;
      return;
    }
    a1 = *(_DWORD *)(v1 + 1188) + 4 * v5;
    while ( 1 )
    {
      v10 = *(float *)(*(_DWORD *)a1 + 12) + v3;
      if ( v10 > v2 )
        break;
      ++v5;
      v3 = v10;
      a1 += 4;
      if ( v5 >= v4 )
      {
        v35 = v10;
        goto LABEL_21;
      }
    }
  }
  else
  {
    a1 = *(_DWORD *)(a1 + 1188) + 8;
    while ( 1 )
    {
      v6 = *(float *)(*(_DWORD *)(a1 - 8) + 12) + v3;
      if ( v6 > v2 )
        break;
      v3 = v6;
      v7 = *(float *)(*(_DWORD *)(a1 - 4) + 12) + v6;
      if ( v7 > v2 )
      {
        ++v5;
        break;
      }
      v3 = v7;
      v8 = *(float *)(*(_DWORD *)a1 + 12) + v7;
      if ( v8 > v2 )
      {
        v5 += 2;
        break;
      }
      v3 = v8;
      v9 = *(float *)(*(_DWORD *)(a1 + 4) + 12) + v8;
      if ( v9 > v2 )
      {
        v5 += 3;
        break;
      }
      v5 += 4;
      v3 = v9;
      a1 += 16;
      if ( v5 >= v4 - 3 )
      {
        v35 = v9;
        goto LABEL_12;
      }
    }
  }
  v35 = v3;
  if ( v5 >= v4 )
    goto LABEL_21;
  v13 = *(_DWORD *)(v1 + 1188);
  v34 = *(_DWORD *)(*(_DWORD *)(v13 + 4 * v5) + 16);
  v14 = *(_DWORD *)(v1 + 1220);
  if ( v34 != v14 )
  {
    if ( (v34 & 1) != 0 && (v14 & 1) == 0 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v1 + 1208);
      v2 = v33;
      v3 = v35;
    }
    v13 = *(_DWORD *)(v1 + 1188);
    *(_DWORD *)(v1 + 1220) = *(_DWORD *)(*(_DWORD *)(v13 + 4 * v5) + 16);
  }
  v15 = (v2 - v3) / *(float *)(*(_DWORD *)(v13 + 4 * v5) + 12);
  v16 = v5 - 2;
  if ( v5 - 2 > 0 )
  {
    v27 = **(int **)(v13 + 4 * v16);
    v28 = *(float *)(*(_DWORD *)(v13 + 4 * v16) + 4);
    v17 = *(float *)(*(_DWORD *)(v13 + 4 * v16) + 8);
  }
  else
  {
    v27 = **(int **)(v13 + 4 * v5 - 4);
    v28 = *(float *)(*(_DWORD *)(v13 + 4 * v5 - 4) + 4);
    v17 = *(float *)(*(_DWORD *)(v13 + 4 * v5 - 4) + 8);
  }
  v29 = v17;
  v25[0] = **(int **)(v13 + 4 * v5 - 4);
  v25[1] = *(int *)(*(_DWORD *)(v13 + 4 * v5 - 4) + 4);
  v25[2] = *(int *)(*(_DWORD *)(v13 + 4 * v5 - 4) + 8);
  v26[0] = **(int **)(v13 + 4 * v5);
  v26[1] = *(int *)(*(_DWORD *)(v13 + 4 * v5) + 4);
  v26[2] = *(int *)(*(_DWORD *)(v13 + 4 * v5) + 8);
  if ( v5 + 1 < v4 )
  {
    v19 = *(float **)(v13 + 4 * v5 + 4);
    v20 = v13 + 4 * v5 + 4;
    v30 = *v19;
    v31 = *(float *)(*(_DWORD *)v20 + 4);
    v18 = *(_DWORD *)v20;
  }
  else
  {
    v30 = **(float **)(v13 + 4 * v5);
    v31 = *(float *)(*(_DWORD *)(v13 + 4 * v5) + 4);
    v18 = *(_DWORD *)(v13 + 4 * v5);
  }
  v32 = *(float *)(v18 + 8);
  v21 = v15;
  sub_101EF230((int)&v27, (int)v25, (int)v26, (int)&v30, v21, (int)&v22);
  *(float *)&v26[3] = v22;
  *(float *)&v26[4] = v23;
  *(float *)&v26[5] = v24;
  sub_1013BCF0(v1 - 12, v22, v23, v24);
}
