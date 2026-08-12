char __cdecl sub_10100C30(int a1, int a2, float a3, int a4, float *a5)
{
  int v5; // eax
  double v6; // st7
  char v7; // bl
  int v8; // edi
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st6
  int v15[4]; // [esp+14h] [ebp-2Ch] BYREF
  float v16[4]; // [esp+24h] [ebp-1Ch] BYREF
  int v17[3]; // [esp+34h] [ebp-Ch] BYREF

  v5 = sub_10245550(a2);
  sub_10100370(a1, v5, a2, a4, v15, v16);
  v6 = 0.0;
  *a5 = 0.0;
  a5[1] = 0.0;
  v7 = 0;
  a5[2] = 0.0;
  v8 = 0;
  while ( 1 )
  {
    if ( v16[v8] != v6 && sub_101008E0(v15[v8], a3, (float *)v17) )
    {
      v9 = v16[v8];
      v7 = 1;
      v10 = *(float *)v17 * v9;
      v11 = *(float *)&v17[1] * v9 + a5[1];
      v12 = v10 + *a5;
      v13 = v16[v8] * *(float *)&v17[2] + a5[2];
      *a5 = v12;
      a5[1] = v11;
      a5[2] = v13;
    }
    if ( ++v8 >= 4 )
      break;
    v6 = 0.0;
  }
  return v7;
}
