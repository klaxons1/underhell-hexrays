int __cdecl sub_101F2A10(float a1, float a2, float a3, int a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st6
  double v7; // st7
  int v8; // esi
  int v9; // eax
  int v10; // esi
  double v11; // st7
  double v12; // st5
  long double v13; // st7
  int v14; // eax
  int v15; // esi
  long double v16; // st7
  int v17; // esi
  double v18; // st6
  int v19; // esi
  long double v20; // st7
  int v21; // ecx
  int result; // eax
  int v23; // [esp+0h] [ebp-10h]
  int v24; // [esp+0h] [ebp-10h]
  int v25; // [esp+0h] [ebp-10h]
  int v26; // [esp+0h] [ebp-10h]
  int v27; // [esp+0h] [ebp-10h]
  float v28; // [esp+4h] [ebp-Ch]
  float v29; // [esp+8h] [ebp-8h]
  float v30; // [esp+Ch] [ebp-4h]
  float v31; // [esp+14h] [ebp+4h]
  float v32; // [esp+18h] [ebp+8h]
  float v33; // [esp+18h] [ebp+8h]
  float v34; // [esp+1Ch] [ebp+Ch]
  float v35; // [esp+20h] [ebp+10h]

  v4 = 3.0;
  if ( a1 <= 3.0 )
    v4 = a1;
  v5 = 1.0 / v4;
  v30 = v5;
  v29 = v5 * a2;
  v6 = a3;
  if ( a3 > 0.0 )
  {
    if ( v6 <= 1.0 )
      v7 = 0.125 - v6 * v6 * 0.075;
    else
      v7 = 0.050000001;
  }
  else
  {
    v7 = 0.125;
  }
  v28 = v7;
  v8 = 0;
  v23 = 0;
  do
  {
    v9 = (int)(pow((double)v23 * 0.0039215689, v29) * 255.0);
    if ( v9 >= 0 )
    {
      if ( v9 > 255 )
        LOBYTE(v9) = -1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
    byte_10460E78[v8++] = v9;
    v23 = v8;
  }
  while ( v8 < 256 );
  v10 = 0;
  v24 = 0;
  do
  {
    v11 = (double)v24 * 0.0009775171065493646;
    if ( a3 > 1.0 )
      v11 = v11 * a3;
    v12 = v28;
    if ( v28 < v11 )
      v13 = (v11 - v12) / (1.0 - v12) * 0.875 + 0.125;
    else
      v13 = v11 / v12 * 0.125;
    v14 = (int)(pow(v13, v30) * 255.0);
    if ( v14 >= 0 )
    {
      if ( v14 > 255 )
        v14 = 255;
    }
    else
    {
      v14 = 0;
    }
    dword_1045BA78[v10++] = v14;
    v24 = v10;
  }
  while ( v10 < 1024 );
  v15 = 0;
  v25 = 0;
  do
  {
    v16 = (double)v25 * 0.0039215689;
    v34 = v16;
    flt_10459278[v15] = pow(v16, a2);
    flt_1045A678[v15] = pow(v34, 0.4545454382896423);
    flt_1045CA78[v15++] = pow(v34, 2.200000047683716);
    v25 = v15;
  }
  while ( v15 < 256 );
  v17 = 0;
  v26 = 0;
  v32 = 1.0 / a2;
  do
  {
    dword_1045AA78[v17++] = (int)(pow((double)v26 * 0.0009775171065493646, v32) * 255.0);
    v26 = v17;
  }
  while ( v17 < 1024 );
  v33 = 1.0;
  if ( a4 == 2 )
  {
    v18 = 0.5;
LABEL_33:
    v33 = v18;
    goto LABEL_34;
  }
  if ( a4 == 4 )
  {
    v18 = 0.25;
    goto LABEL_33;
  }
LABEL_34:
  v19 = 0;
  v27 = 0;
  v31 = 1.0 / a1;
  do
  {
    v20 = pow((double)v27 * 0.0009765625, v31) * v33;
    flt_1045CE78[v19] = v20;
    if ( v20 > 1.0 )
      flt_1045CE78[v19] = 1.0;
    v35 = v20 * 255.0;
    v21 = (int)v35;
    if ( v21 <= 255 )
      result = v21 < 0 ? 0 : v21;
    else
      result = 255;
    byte_10459678[v19++] = result;
    v27 = v19;
  }
  while ( v19 < 4096 );
  return result;
}
