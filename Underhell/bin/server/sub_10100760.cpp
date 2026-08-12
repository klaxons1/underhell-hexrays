char __cdecl sub_10100760(_DWORD *a1, float a2, float *a3, float *a4)
{
  double v5; // st7
  char result; // al
  double v8; // st4
  double v9; // st6
  int v10; // eax
  double v11; // st4
  int v12; // edx
  double v13; // st6
  int v14; // ecx
  double v15; // st3
  float *v16; // ecx
  double v17; // rt1
  double v18; // st7
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st4
  double v23; // rt2
  double v24; // st6
  double v25; // st7
  int v26; // ecx
  float *v27; // eax
  double v28; // st5
  double v29; // st6
  double v30; // st7
  int v31; // [esp+1Ch] [ebp+10h]
  int v32; // [esp+20h] [ebp+14h]

  v5 = 0.0;
  *a3 = 0.0;
  a3[1] = 0.0;
  a3[2] = 0.0;
  *a4 = 0.0;
  a4[1] = 0.0;
  a4[2] = 0.0;
  if ( !a1[5] )
    return 0;
  v31 = 0;
  v8 = a2;
  if ( a2 <= 1.0 )
  {
    v9 = a2;
    if ( v8 >= 0.0 )
      goto LABEL_8;
    v10 = (int)v8 - 1;
  }
  else
  {
    v9 = a2;
    v10 = (int)v8;
  }
  v31 = v10;
LABEL_8:
  v11 = (double)v31;
  v12 = 0;
  v13 = (v9 - v11) * (double)(a1[4] - 1);
  if ( (int)a1[5] <= 0 )
    return 0;
  v32 = 0;
  while ( 1 )
  {
    v14 = v32 + a1[6];
    v15 = (double)*(int *)((char *)a1 + v14);
    v16 = (float *)((char *)a1 + v14);
    if ( v15 >= v13 )
      break;
    v32 += 44;
    v5 = v15;
    ++v12;
    *a3 = v16[8];
    a3[1] = v16[9];
    a3[2] = v16[10];
    a4[1] = v16[4];
    if ( v12 >= a1[5] )
      return 0;
  }
  v17 = v11;
  v18 = (v13 - v5) / ((double)*(int *)v16 - v5);
  v19 = ((v16[3] - v16[2]) * 0.5 * v18 + v16[2]) * v18;
  v20 = v16[5] * v19;
  v21 = v16[6] * v19;
  v22 = v19 * v16[7] + a3[2];
  v23 = v21 + a3[1];
  *a3 = v20 + *a3;
  a3[1] = v23;
  a3[2] = v22;
  v24 = v18 * v16[4] + (1.0 - v18) * a4[1];
  v25 = v17;
  a4[1] = v24;
  if ( !v31 )
    return 1;
  v26 = a1[6] + 44 * a1[5];
  v27 = (float *)((char *)a1 + v26 - 44);
  v28 = v27[9] * v25 + a3[1];
  v29 = v27[10] * v25 + a3[2];
  *a3 = *(float *)((char *)a1 + v26 - 12) * v25 + *a3;
  a3[1] = v28;
  a3[2] = v29;
  v30 = v25 * v27[4];
  result = 1;
  a4[1] = v30 + a4[1];
  return result;
}
