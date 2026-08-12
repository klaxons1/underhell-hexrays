int __cdecl sub_100649C0(int a1, int a2)
{
  int result; // eax
  double v3; // st7
  float *v4; // ecx
  int v5; // edx
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st6
  double v10; // st6
  double v11; // st6
  __int16 v12; // fps
  bool v13; // c0
  char v14; // c2
  bool v15; // c3

  result = (int)(30.0 / *(float *)a2);
  v3 = (*(float *)(a2 + 12) - *(float *)(a2 + 16)) / (double)result;
  v4 = (float *)(a1 + 4);
  v5 = 5;
  v6 = *(float *)(a2 + 16);
  do
  {
    if ( *(_BYTE *)(a2 + 8) )
      *(v4 - 1) = v6;
    else
      v4[29] = v6;
    v7 = v6 + v3;
    if ( v7 > *(float *)(a2 + 12) )
      v7 = *(float *)(a2 + 16);
    if ( *(_BYTE *)(a2 + 8) )
      *v4 = v7;
    else
      v4[30] = v7;
    v8 = v7 + v3;
    if ( v8 > *(float *)(a2 + 12) )
      v8 = *(float *)(a2 + 16);
    if ( *(_BYTE *)(a2 + 8) )
      v4[1] = v8;
    else
      v4[31] = v8;
    v9 = v8 + v3;
    if ( v9 > *(float *)(a2 + 12) )
      v9 = *(float *)(a2 + 16);
    if ( *(_BYTE *)(a2 + 8) )
      v4[2] = v9;
    else
      v4[32] = v9;
    v10 = v9 + v3;
    if ( v10 > *(float *)(a2 + 12) )
      v10 = *(float *)(a2 + 16);
    if ( *(_BYTE *)(a2 + 8) )
      v4[3] = v10;
    else
      v4[33] = v10;
    v11 = v10 + v3;
    if ( v11 > *(float *)(a2 + 12) )
      v11 = *(float *)(a2 + 16);
    if ( *(_BYTE *)(a2 + 8) )
      v4[4] = v11;
    else
      v4[34] = v11;
    v6 = v11 + v3;
    v13 = v6 < *(float *)(a2 + 12);
    v14 = 0;
    v15 = v6 == *(float *)(a2 + 12);
    LOWORD(result) = v12;
    if ( v6 > *(float *)(a2 + 12) )
      v6 = *(float *)(a2 + 16);
    v4 += 6;
    --v5;
  }
  while ( v5 );
  return result;
}
