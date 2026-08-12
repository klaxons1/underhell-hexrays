void __userpurge sub_10253DC0(int a1@<ecx>, __int64 a2@<esi:edi>, int a3, int a4, int a5, float a6)
{
  double v6; // st7
  char v7; // al
  float v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp+10h]

  HIDWORD(a2) = a1;
  if ( a5 == 2 )
  {
    v6 = (double)((int)(*(float *)(a1 + 108) * 4.0) / (int)*(float *)(a1 + 868)) * 0.25 + a6 * 0.25;
    *(float *)&v9 = v6;
    if ( v6 <= 1.0 )
    {
      if ( v6 < -0.25 )
      {
        v6 = -0.25;
        *(float *)&v9 = -0.25;
      }
    }
    else
    {
      v6 = 1.0;
      *(float *)&v9 = 1.0;
    }
    if ( (*(_BYTE *)(a1 + 248) & 4) != 0 && v6 < 0.0 )
    {
      v7 = 1;
      *(float *)&v9 = 0.0;
    }
    else
    {
      v7 = v6 >= 0.0;
    }
    sub_1024DC70(a1, v7);
    v8 = fabs(*(float *)&v9) * *(float *)(HIDWORD(a2) + 868);
    sub_10253AA0(SHIDWORD(a2), a2, v8, 0.0);
  }
}
