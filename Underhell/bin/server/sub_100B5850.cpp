double __stdcall sub_100B5850(int a1, int a2, char a3)
{
  int v3; // esi
  int v4; // edi
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  int v9; // eax
  float v11; // [esp+0h] [ebp-14h]
  float v12; // [esp+10h] [ebp-4h]

  v12 = 0.0;
  v3 = a1;
  v4 = a1;
  sub_101ACB10();
  if ( sub_101ACC70(a1, 1) )
  {
    while ( !(unsigned __int8)sub_101ACB50(v3) )
    {
      sub_101ACB40(v3);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      v5 = *(float *)(v4 + 580) - *(float *)(v3 + 580);
      v6 = v5 * v5;
      v7 = *(float *)(v4 + 584) - *(float *)(v3 + 584);
      v8 = *(float *)(v4 + 588) - *(float *)(v3 + 588);
      v11 = v8 * v8 + v7 * v7 + v6;
      v12 = off_10689708(v11) + v12;
      if ( a2 == v3 )
      {
        sub_101ACB30();
        return v12;
      }
      v4 = v3;
      if ( a3 )
        v9 = sub_101ACC90(v3);
      else
        v9 = sub_101ACCC0(v3);
      v3 = v9;
      if ( !sub_101ACC70(v9, 1) )
        break;
    }
  }
  sub_101ACB30();
  return 3.4028235e38;
}
