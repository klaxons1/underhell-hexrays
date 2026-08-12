char __thiscall sub_101913A0(float *this, char a2, float a3, int *a4, int *a5)
{
  int v5; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // esi
  float v16; // ecx
  float v17; // edx
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  int *v21; // ecx
  int i; // eax
  int v23; // edi
  int v24; // [esp+0h] [ebp-28h]
  float v25[3]; // [esp+10h] [ebp-18h] BYREF
  float *v26; // [esp+1Ch] [ebp-Ch]
  int v27; // [esp+20h] [ebp-8h]
  float v28; // [esp+24h] [ebp-4h]
  _DWORD *v29; // [esp+30h] [ebp+8h]
  int v30; // [esp+30h] [ebp+8h]
  int v31; // [esp+34h] [ebp+Ch]

  v5 = (int)this;
  v26 = this;
  if ( !a2 )
  {
    if ( a3 > this[1] + 1.0 && this[4] - 1.0 > a3 )
    {
      v11 = sub_10184390(800);
      if ( v11 )
        v8 = sub_1018EF80(v11);
      else
        v8 = 0;
      *(float *)(v8 + 4) = *(float *)(v5 + 4);
      *(float *)(v8 + 8) = *(float *)(v5 + 8);
      *(float *)(v8 + 12) = *(float *)(v5 + 12);
      *(float *)(v8 + 16) = a3;
      *(float *)(v8 + 20) = *(float *)(v5 + 20);
      *(float *)(v8 + 24) = sub_1018AD70((float *)v5, (float *)(v8 + 16));
      v12 = sub_10184390(800);
      if ( v12 )
        v10 = sub_1018EF80(v12);
      else
        v10 = 0;
      *(float *)(v10 + 4) = a3;
      *(float *)(v10 + 8) = *(float *)(v5 + 8);
      *(float *)(v10 + 12) = sub_1018AD70((float *)v5, (float *)(v10 + 4));
      *(float *)(v10 + 16) = *(float *)(v5 + 16);
      *(float *)(v10 + 20) = *(float *)(v5 + 20);
      *(float *)(v10 + 24) = *(float *)(v5 + 24);
      sub_1018F770((char *)v8, (char *)v10, 1);
      sub_1018F770((char *)v10, (char *)v8, 3);
      sub_1018FA10((int *)v5, v8, 1);
      sub_1018FA10((int *)v5, v10, 3);
      goto LABEL_21;
    }
    return 0;
  }
  if ( a3 <= this[2] + 1.0 || this[5] - 1.0 <= a3 )
    return 0;
  v7 = sub_10184390(800);
  if ( v7 )
    v8 = sub_1018EF80(v7);
  else
    v8 = 0;
  *(float *)(v8 + 4) = *(float *)(v5 + 4);
  *(float *)(v8 + 8) = *(float *)(v5 + 8);
  *(float *)(v8 + 12) = *(float *)(v5 + 12);
  *(float *)(v8 + 16) = *(float *)(v5 + 16);
  *(float *)(v8 + 20) = a3;
  *(float *)(v8 + 24) = sub_1018AD70((float *)v5, (float *)(v8 + 16));
  v9 = sub_10184390(800);
  if ( v9 )
    v10 = sub_1018EF80(v9);
  else
    v10 = 0;
  *(float *)(v10 + 4) = *(float *)(v5 + 4);
  *(float *)(v10 + 8) = a3;
  *(float *)(v10 + 12) = sub_1018AD70((float *)v5, (float *)(v10 + 4));
  *(float *)(v10 + 16) = *(float *)(v5 + 16);
  *(float *)(v10 + 20) = *(float *)(v5 + 20);
  *(float *)(v10 + 24) = *(float *)(v5 + 24);
  sub_1018F770((char *)v8, (char *)v10, 2);
  sub_1018F770((char *)v10, (char *)v8, 0);
  sub_1018FA10((int *)v5, v8, 2);
  sub_1018FA10((int *)v5, v10, 0);
LABEL_21:
  if ( !*(_DWORD *)(dword_106B8370 + 1240) && *(_DWORD *)(dword_106B7A7C + 48) )
  {
    sub_1018DD90((float *)v8, 4, 0.0);
    sub_1018DD90((float *)v10, 4, 0.0);
  }
  v29 = (_DWORD *)(v5 + 668);
  v31 = 2;
  do
  {
    v13 = v29[3];
    if ( v13 == -1 )
      goto LABEL_33;
    do
    {
      v14 = 12 * v13;
      v15 = *(_DWORD *)(v14 + *v29);
      v16 = *(float *)(v15 + 4);
      v17 = *(float *)(v15 + 8);
      v27 = v14;
      v25[0] = *(float *)v15;
      v25[1] = v16;
      v25[2] = v17;
      v28 = sub_1018AF90((float *)v8, v25);
      v18 = sub_1018AF90((float *)v10, v25);
      v19 = v18 < v28;
      v20 = v18 == v28;
      v28 = (*(float *)(v15 + 20) + *(float *)(v15 + 8)) * 0.5;
      if ( v19 || v20 )
      {
        sub_1018F880((int *)v10, v15);
        v24 = v15;
        v21 = (int *)v10;
        if ( v28 < (double)*(float *)(v10 + 36) )
        {
LABEL_28:
          sub_1018F980(v21, v24);
          goto LABEL_31;
        }
      }
      else
      {
        sub_1018F880((int *)v8, v15);
        v24 = v15;
        v21 = (int *)v8;
        if ( v28 < (double)*(float *)(v8 + 36) )
          goto LABEL_28;
      }
      sub_1018F8F0(v21, v24);
LABEL_31:
      v13 = *(_DWORD *)(v27 + *v29 + 8);
    }
    while ( v13 != -1 );
    v5 = (int)v26;
LABEL_33:
    v29 += 9;
    --v31;
  }
  while ( v31 );
  for ( i = *(_DWORD *)(dword_106B8370 + 1212); i != -1; i = *(_DWORD *)(v30 + *(_DWORD *)(dword_106B8370 + 1200) + 8) )
  {
    v30 = 12 * i;
    sub_1019C0E0(v5, v8, v10);
  }
  *(_WORD *)(v8 + 40) = *(_WORD *)(v5 + 40);
  *(_WORD *)(v10 + 40) = *(_WORD *)(v5 + 40);
  *(_DWORD *)(v8 + 44) = *(_DWORD *)(v5 + 44);
  *(_DWORD *)(v10 + 44) = *(_DWORD *)(v5 + 44);
  if ( a4 )
    *a4 = v8;
  if ( a5 )
    *a5 = v10;
  v23 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    while ( *(_DWORD *)(dword_10632624 + 12 * v23) != v5 )
    {
      v23 = *(_DWORD *)(dword_10632624 + 12 * v23 + 8);
      if ( v23 == -1 )
        goto LABEL_46;
    }
    if ( v23 != -1 )
    {
      sub_1018ED30(&dword_10632624, v23);
      *(_DWORD *)(dword_10632624 + 12 * v23 + 8) = dword_10632638;
      dword_10632638 = v23;
    }
  }
LABEL_46:
  sub_10190B20((int *)v5);
  sub_10184660(v5);
  return 1;
}
