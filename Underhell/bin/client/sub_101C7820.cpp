void __stdcall sub_101C7820(int a1, int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ecx
  int v5; // eax
  double v6; // st7
  float *v7; // eax
  unsigned int v8; // edx
  double v9; // st7
  float v10; // [esp+8h] [ebp+4h]
  float v11; // [esp+8h] [ebp+4h]
  float v12; // [esp+8h] [ebp+4h]
  float v13; // [esp+8h] [ebp+4h]
  float v14; // [esp+8h] [ebp+4h]

  if ( a1 && a2 )
  {
    v3 = 0;
    if ( a2 >= 4 )
    {
      v4 = ((unsigned int)(a2 - 4) >> 2) + 1;
      v5 = a1 + 16;
      v3 = 4 * v4;
      do
      {
        v6 = *(float *)(v5 - 16);
        v5 += 64;
        --v4;
        v10 = v6;
        *(float *)(v5 - 80) = *(float *)(v5 - 72);
        *(float *)(v5 - 72) = v10;
        v11 = *(float *)(v5 - 64);
        *(float *)(v5 - 64) = *(float *)(v5 - 56);
        *(float *)(v5 - 56) = v11;
        v12 = *(float *)(v5 - 48);
        *(float *)(v5 - 48) = *(float *)(v5 - 40);
        *(float *)(v5 - 40) = v12;
        v13 = *(float *)(v5 - 32);
        *(float *)(v5 - 32) = *(float *)(v5 - 24);
        *(float *)(v5 - 24) = v13;
      }
      while ( v4 );
    }
    if ( v3 < a2 )
    {
      v7 = (float *)(a1 + 16 * v3);
      v8 = a2 - v3;
      do
      {
        v9 = *v7;
        v7 += 4;
        --v8;
        v14 = v9;
        *(v7 - 4) = *(v7 - 2);
        *(v7 - 2) = v14;
      }
      while ( v8 );
    }
  }
}
