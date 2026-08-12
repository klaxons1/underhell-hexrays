double __usercall sub_101DB930@<st0>(
        int a1@<eax>,
        int a2@<ecx>,
        float *a3,
        int a4,
        float a5,
        float a6,
        float a7,
        int a8)
{
  double v8; // st7
  float *v9; // esi
  int v10; // edi
  double v11; // st6
  int v12; // ecx
  double v13; // rt1
  double v14; // st6
  double v15; // st7
  double v16; // st7
  double v17; // rtt
  float v19; // [esp+30h] [ebp-18h]
  float v20; // [esp+34h] [ebp-14h]
  float v21; // [esp+34h] [ebp-14h]
  float v22; // [esp+34h] [ebp-14h]
  float v23; // [esp+34h] [ebp-14h]
  float v24; // [esp+34h] [ebp-14h]
  float v25; // [esp+34h] [ebp-14h]
  float v26; // [esp+34h] [ebp-14h]
  float v27; // [esp+38h] [ebp-10h]
  float v28; // [esp+3Ch] [ebp-Ch]
  float v29; // [esp+40h] [ebp-8h]
  int v30; // [esp+44h] [ebp-4h]

  v19 = 0.0;
  v8 = a7;
  v9 = a3;
  v10 = 0;
  v11 = a6;
  v27 = (a7 - a6) / (double)(a1 - 1);
  if ( a8 <= 0 )
    return v19;
  v12 = a2 - (_DWORD)a3;
  v30 = v12;
  while ( 1 )
  {
    v20 = *v9 - v11;
    if ( v20 > 0.0 )
    {
      if ( *v9 - v8 < 0.0 )
      {
        v28 = 0.5 * v27;
        v29 = 1.0 / v27;
        v22 = (v20 + v28) * v29;
        v16 = floor(v22);
        v12 = v30;
        v23 = v16;
        v15 = a6;
        v21 = v23 * v27 + a6;
        v14 = a7;
      }
      else
      {
        v13 = v11;
        v14 = v8;
        v15 = v13;
        v21 = v14;
      }
      v17 = v14;
      v11 = v15;
      v8 = v17;
    }
    else
    {
      v21 = v11;
    }
    v24 = *v9 - v21;
    v25 = v24 * v24;
    v26 = v25 * *(float *)((char *)v9 + a4 - (_DWORD)a3) + *(float *)((char *)v9 + v12);
    v19 = v26 + v19;
    if ( v19 > (double)a5 )
      break;
    ++v10;
    ++v9;
    if ( v10 >= a8 )
      return v19;
  }
  return a5;
}
