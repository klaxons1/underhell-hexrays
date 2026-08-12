void __cdecl sub_10192150(int a1, float *a2, float *a3, float a4)
{
  int v5; // ecx
  double v6; // st6
  double v7; // st7
  double v8; // st7
  float v9[3]; // [esp+4h] [ebp-18h] BYREF
  float v10[3]; // [esp+10h] [ebp-Ch] BYREF
  float v11; // [esp+24h] [ebp+8h]

  if ( a1 && *(_DWORD *)(a1 + 492) != dword_10632620 )
  {
    *(_DWORD *)(a1 + 492) = dword_10632620;
    *(float *)(a1 + 504) = 0.0;
    *(_DWORD *)(a1 + 496) = a2;
    *(_DWORD *)(a1 + 500) = 7;
    v5 = a1;
    if ( a4 <= 0.0 )
    {
LABEL_7:
      sub_1018B2F0(v5);
      return;
    }
    sub_1018AE60((float *)a1, a3, v9);
    v6 = v9[1] - a3[1];
    if ( a4 * a4 > (v9[0] - *a3) * (v9[0] - *a3) + v6 * v6 )
    {
      v11 = a2[127];
      v10[0] = *(float *)(a1 + 28) - a2[7];
      v10[1] = *(float *)(a1 + 32) - a2[8];
      v7 = *(float *)(a1 + 36) - a2[9];
      v10[2] = v7;
      sub_100D7A40(v10);
      v8 = v7 + v11;
      *(float *)(a1 + 508) = v8;
      if ( a4 * 1.5 >= v8 )
      {
        v5 = a1;
        goto LABEL_7;
      }
    }
  }
}
