void __stdcall sub_101F9010(int a1, int a2, int a3)
{
  int *v3; // ecx
  float *v4; // edi
  double v5; // st7
  double v6; // st6
  float v7; // [esp+0h] [ebp-10h]

  if ( *(_DWORD *)(a1 + 4132) != *(_DWORD *)(a3 + 60) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(a1 + 24);
      if ( v3 )
        sub_100194B0(v3, 4132);
    }
    *(float *)(a1 + 4132) = *(float *)(a3 + 60);
  }
  sub_100E0D20(a1, (float *)(a3 + 152));
  sub_100DD660(a1, (float *)(a3 + 64));
  sub_100F5DD0((float *)a1, (float *)(a3 + 152));
  v4 = (float *)(a3 + 76);
  *(_DWORD *)(a1 + 2296) = *(_DWORD *)(a3 + 36);
  v5 = *(float *)(a3 + 76);
  if ( v5 > 180.0 )
    v5 = v5 - 360.0;
  v6 = 90.0;
  if ( v5 > 90.0 || (v6 = -90.0, v5 < -90.0) )
    v5 = v6;
  *v4 = v5;
  v7 = v5;
  sub_101E7AF0((_DWORD *)a1, v7);
  sub_100E11A0(a1, v4);
}
