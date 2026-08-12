void __cdecl sub_101E1780(bool *a1, float *a2, float *a3, char a4, char a5, char a6)
{
  float *v6; // esi
  int i; // edi
  int v8; // ebx
  double v9; // st7
  double v10; // st7
  float v11; // [esp+20h] [ebp-28h]
  float v12; // [esp+20h] [ebp-28h]
  float v13; // [esp+20h] [ebp-28h]
  float v14; // [esp+20h] [ebp-28h]
  float v15; // [esp+20h] [ebp-28h]
  double v16; // [esp+28h] [ebp-20h]
  double v17; // [esp+30h] [ebp-18h]
  float v18[3]; // [esp+3Ch] [ebp-Ch]

  v18[2] = (float)(1 << a4);
  *a1 = 1;
  v18[1] = (float)(1 << a5);
  v18[0] = (float)(1 << a6);
  *a1 = a3[1] == *a3;
  *a1 &= a3[3] == a3[2];
  v6 = a2;
  *a1 &= a3[5] == a3[4];
  for ( i = 0; i < 3; ++i )
  {
    v8 = 2;
    v16 = v18[i];
    do
    {
      v17 = *(float *)((char *)v6 + (char *)a3 - (char *)a2);
      v11 = v17 / v16;
      v12 = floor(v11);
      v13 = v12 + v17;
      *v6 = v13;
      v9 = 0.0;
      if ( v13 > 0.0 )
        v9 = v13;
      v14 = v9;
      v10 = v14;
      *v6 = v14;
      if ( v14 >= 255.0 )
        v10 = 255.0;
      v15 = v10;
      ++v6;
      --v8;
      *(v6 - 1) = v15;
    }
    while ( v8 );
  }
}
