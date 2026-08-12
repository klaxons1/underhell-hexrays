double __usercall sub_101DA090@<st0>(
        unsigned __int8 a1@<al>,
        int a2@<ecx>,
        float *a3,
        float a4,
        float a5,
        float a6,
        int a7)
{
  double v7; // st7
  float *v8; // esi
  int v9; // edi
  double v10; // st6
  int v11; // ecx
  double v12; // rt1
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // rtt
  float v18; // [esp+30h] [ebp-18h]
  float v19; // [esp+34h] [ebp-14h]
  float v20; // [esp+34h] [ebp-14h]
  float v21; // [esp+34h] [ebp-14h]
  float v22; // [esp+34h] [ebp-14h]
  float v23; // [esp+34h] [ebp-14h]
  float v24; // [esp+38h] [ebp-10h]
  float v25; // [esp+3Ch] [ebp-Ch]
  float v26; // [esp+40h] [ebp-8h]
  int v27; // [esp+44h] [ebp-4h]

  v18 = 0.0;
  v7 = a6;
  v8 = a3;
  v9 = 0;
  v10 = a5;
  v24 = (a6 - a5) / (double)(a1 - 1);
  if ( a7 <= 0 )
    return v18;
  v11 = a2 - (_DWORD)a3;
  v27 = v11;
  while ( 1 )
  {
    v19 = *v8 - v10;
    if ( v19 > 0.0 )
    {
      if ( *v8 - v7 < 0.0 )
      {
        v25 = 0.5 * v24;
        v26 = 1.0 / v24;
        v21 = (v19 + v25) * v26;
        v15 = floor(v21);
        v11 = v27;
        v22 = v15;
        v14 = a5;
        v20 = v22 * v24 + a5;
        v13 = a6;
      }
      else
      {
        v12 = v10;
        v13 = v7;
        v14 = v12;
        v20 = v13;
      }
      v16 = v13;
      v10 = v14;
      v7 = v16;
    }
    else
    {
      v20 = v10;
    }
    v23 = *v8 - v20;
    v18 = v23 * v23 * *(float *)((char *)v8 + v11) + v18;
    if ( v18 > (double)a4 )
      break;
    ++v9;
    ++v8;
    if ( v9 >= a7 )
      return v18;
  }
  return a4;
}
