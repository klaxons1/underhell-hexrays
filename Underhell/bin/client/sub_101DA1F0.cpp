double __usercall sub_101DA1F0@<st0>(
        int a1@<eax>,
        __m128 *a2,
        float a3,
        float *a4,
        float *a5,
        float a6,
        float a7,
        float a8,
        int a9,
        char a10,
        char a11)
{
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  unsigned int v16; // edi
  double v17; // rt2
  double v18; // st4
  double v19; // st5
  double v20; // st7
  double result; // st7
  float v22; // [esp+0h] [ebp-44h]
  float v23; // [esp+4h] [ebp-40h]
  float v24; // [esp+24h] [ebp-20h]
  float v25; // [esp+28h] [ebp-1Ch]
  float v26; // [esp+2Ch] [ebp-18h]
  float v27; // [esp+30h] [ebp-14h]
  float v28; // [esp+34h] [ebp-10h]
  int v29; // [esp+38h] [ebp-Ch]
  float v30; // [esp+3Ch] [ebp-8h]
  float v31; // [esp+40h] [ebp-4h]
  float v32; // [esp+4Ch] [ebp+8h]

  v25 = a3;
  v26 = *a4;
  v27 = *a5;
  v12 = a8;
  v13 = a7;
  v14 = a6;
  v15 = a3;
  while ( 1 )
  {
    v29 = -1;
    v30 = v26;
    v16 = 0;
    v31 = v27;
    while ( 1 )
    {
      v32 = flt_10393AE8[v16 / 3] * v14 + v26;
      v17 = v15;
      v18 = v14 * flt_10393AE8[v16 % 3] + v27;
      v19 = v17;
      v24 = v18;
      if ( v32 <= v13 )
        v32 = v13;
      if ( v24 >= v12 )
        v24 = v12;
      if ( a11 )
      {
        v22 = v19;
        v20 = sub_101D9FA0(a2, a1, v22, LODWORD(v32), LODWORD(v24), a9, a10);
      }
      else
      {
        v23 = v19;
        v20 = sub_101DA090(a10, a1, a2->m128_f32, v23, v32, v24, a9);
      }
      v28 = v20;
      if ( v25 <= (double)v28 )
      {
        result = v25;
      }
      else
      {
        v29 = v16;
        v25 = v20;
        v30 = v32;
        v31 = v24;
        result = v28;
      }
      if ( (int)++v16 >= 9 )
        break;
      v15 = result;
      v12 = a8;
      v13 = a7;
      v14 = a6;
    }
    if ( v29 == -1 )
      break;
    v26 = v30;
    v27 = v31;
    v15 = result;
    v12 = a8;
    v13 = a7;
    v14 = a6;
  }
  *a4 = v26;
  *a5 = v27;
  return result;
}
