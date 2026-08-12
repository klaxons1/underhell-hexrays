void __cdecl sub_1001B880(int a1, int a2, float a3, float a4, _DWORD *a5, _DWORD *a6, float *a7)
{
  double v7; // st6
  double v8; // st5
  int v9; // edi
  float *v10; // ecx
  int v11; // eax
  int v12; // esi
  double v13; // st6
  int v14; // edx
  double v15; // st6
  double v16; // st5
  int v17; // esi
  int v18; // ebx
  int v19; // esi
  int v20; // edi
  int v21; // edx
  int v22; // ebx
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  int v26; // ebx
  int v27; // [esp+Ch] [ebp-Ch]
  int v28; // [esp+10h] [ebp-8h]
  int v29; // [esp+14h] [ebp-4h]
  int v30; // [esp+38h] [ebp+20h]

  if ( (((_BYTE)a1 + (_BYTE)a2) & 1) != 0 )
  {
    v15 = a3;
    v16 = a4;
    if ( a3 + a4 > 1.0 )
    {
      v11 = 1;
      v9 = 1;
      v14 = 1;
      v29 = 1;
      v10 = a7;
      *a7 = 1.0 - v16;
      v12 = 0;
      v28 = 0;
      v13 = v16 + v15 - 1.0;
      goto LABEL_9;
    }
    v12 = 1;
    v28 = 1;
    v10 = a7;
    *a7 = a4;
    v11 = 0;
    v9 = 0;
    v29 = 0;
    v13 = 1.0 - v15 - v16;
  }
  else
  {
    v7 = a4;
    v8 = a3;
    if ( a3 <= (double)a4 )
    {
      v11 = 1;
      v12 = 1;
      v14 = 1;
      v9 = 0;
      v28 = 0;
      v29 = 0;
      v10 = a7;
      *a7 = a3;
      v13 = v7 - v8;
      goto LABEL_9;
    }
    v9 = 1;
    v28 = 1;
    v29 = 1;
    v10 = a7;
    *a7 = 1.0 - v8;
    v11 = 0;
    v12 = 0;
    v13 = v8 - v7;
  }
  v14 = 0;
LABEL_9:
  v10[1] = v13;
  v27 = a2 + v12;
  v17 = a5[17];
  v30 = v11 + a1;
  if ( v11 + a1 >= v17 )
    v30 = v17 - 1;
  v18 = a5[18];
  v19 = v27;
  if ( v27 >= v18 )
    v19 = v18 - 1;
  v20 = a1 + v9;
  v21 = a2 + v14;
  *a6 = *(__int16 *)((char *)a5 + 2 * v30 + 2 * v19 * a5[17] + a5[15]);
  if ( v20 >= a5[17] )
    v20 = a5[17] - 1;
  v22 = a5[18];
  if ( v21 >= v22 )
    v21 = v22 - 1;
  v23 = v20 + v21 * a5[17];
  v24 = v29 + a2;
  a6[1] = *(__int16 *)((char *)a5 + 2 * v23 + a5[15]);
  v25 = a1 + v28;
  if ( a1 + v28 >= a5[17] )
    v25 = a5[17] - 1;
  v26 = a5[18];
  if ( v24 >= v26 )
    v24 = v26 - 1;
  a6[2] = *(__int16 *)((char *)a5 + 2 * v25 + 2 * v24 * a5[17] + a5[15]);
  if ( v10[1] < 0.001 )
    v10[1] = 0.0;
  v10[2] = 1.0 - *v10 - v10[1];
}
