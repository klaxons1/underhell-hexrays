void __userpurge sub_10253AA0(int a1@<ecx>, __int64 a2@<esi:edi>, float a3, float a4)
{
  double v4; // st7
  long double v5; // st7
  long double v6; // st6
  double v7; // st7
  long double v8; // st6
  const char *v9; // eax
  __int64 v10; // [esp-4h] [ebp-10h]
  __int64 v11; // [esp-4h] [ebp-10h]
  double v12; // [esp+0h] [ebp-Ch]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+18h] [ebp+Ch]

  HIDWORD(a2) = a1;
  v4 = *(float *)(a1 + 108);
  *(_BYTE *)(a1 + 992) = LOBYTE(a4);
  if ( LOBYTE(a4) )
  {
    v5 = fabs(a3) * *(float *)(a1 + 872);
    *(float *)(a1 + 976) = v5;
    *(float *)(a1 + 980) = *(float *)(dword_106B31C8 + 12);
    if ( 0.0 == *(float *)(a1 + 108) )
    {
      v6 = v5;
      v7 = 0.0;
      if ( fabs(v6) > 0.0 )
        *(float *)(a1 + 108) = 0.1;
    }
    else
    {
      v7 = 0.0;
    }
    v13 = v7;
    HIDWORD(v10) = a1;
    LODWORD(v10) = a1;
    sub_1010DD80((_DWORD *)(a1 + 924), v10, v13);
    sub_102526E0(SHIDWORD(a2), a2);
  }
  else
  {
    v8 = fabs(a3) * *(float *)(a1 + 872);
    v14 = v8;
    *(float *)(a1 + 108) = v8;
    if ( v4 != v14 )
    {
      if ( 0.0 == v8 )
      {
        sub_10253740((float *)a1);
      }
      else if ( 0.0 == v4 )
      {
        HIDWORD(v11) = a1;
        LODWORD(v11) = a1;
        sub_1010DD80((_DWORD *)(a1 + 924), v11, 0.0);
        sub_102526E0(SHIDWORD(a2), a2);
      }
      else
      {
        sub_102526E0(a1, a2);
      }
    }
    v12 = *(float *)(HIDWORD(a2) + 108);
    v9 = sub_100D6390((_DWORD *)HIDWORD(a2));
    DevMsg(2, "TRAIN(%s), speed to %.2f\n", v9, v12);
  }
}
