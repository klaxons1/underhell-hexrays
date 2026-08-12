void __cdecl sub_100604F0(int a1, int a2, int a3, float a4, float a5, float *a6)
{
  int v6; // ebx
  float *v7; // esi
  float *v8; // edi
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // rt2
  double v14; // st6
  float v15; // [esp+0h] [ebp-1Ch]
  float v16; // [esp+10h] [ebp-Ch]
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]

  if ( a3 > 0 )
  {
    v6 = 36 * a2;
    v7 = (float *)(a1 + 8);
    v8 = (float *)(36 * a2 + a1 + 8);
    do
    {
      v9 = *(v8 - 2) - *(v7 - 2);
      v16 = v9;
      v10 = *(v8 - 1) - *(v7 - 1);
      v11 = *v8 - *v7;
      v15 = v11 * v11 + v10 * v10 + v9 * v9;
      v12 = off_103EDFE0(v15);
      if ( v12 > 0.000099999997 )
      {
        v17 = v10;
        v13 = (v17 * (1.0 / v12) + (a6[1] - v17 * (1.0 / v12)) * a4) * v12 + *(v7 - 1);
        v18 = v11;
        v14 = v12 * (1.0 / v12 * v18 + (a6[2] - 1.0 / v12 * v18) * a4) + *v7;
        *(v8 - 2) = (v16 * (1.0 / v12) + (*a6 - v16 * (1.0 / v12)) * a4) * v12 + *(v7 - 2);
        *(v8 - 1) = v13;
        *v8 = v14;
        a4 = a4 * a5;
      }
      v7 = (float *)((char *)v7 + v6);
      v8 = (float *)((char *)v8 + v6);
      --a3;
    }
    while ( a3 );
  }
}
