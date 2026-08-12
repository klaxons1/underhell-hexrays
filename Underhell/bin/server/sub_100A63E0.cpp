void __cdecl sub_100A63E0(int a1)
{
  int v1; // esi
  int v2; // edi
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  float v9; // [esp+0h] [ebp-Ch]

  v1 = a1;
  *(float *)(a1 + 20) = 0.0;
  if ( *(_DWORD *)(a1 + 44) )
  {
    do
    {
      v2 = *(_DWORD *)(v1 + 44);
      v3 = *(float *)v1 - *(float *)v2;
      v4 = *(float *)(v1 + 4) - *(float *)(v2 + 4);
      if ( *(_DWORD *)(v1 + 36) )
      {
        v6 = v4 * v4 + v3 * v3;
        v7 = *(float *)(v1 + 8) - *(float *)(v2 + 8);
        v5 = v7 * v7;
      }
      else
      {
        v5 = v3 * v3;
        v6 = v4 * v4;
      }
      v9 = v5 + v6;
      v8 = off_10689708(v9) + *(float *)(v1 + 20);
      v1 = v2;
      *(float *)(v2 + 20) = v8;
    }
    while ( *(_DWORD *)(v2 + 44) );
  }
}
