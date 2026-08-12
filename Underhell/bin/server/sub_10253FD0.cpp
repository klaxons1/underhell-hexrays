void __userpurge sub_10253FD0(int a1@<ecx>, __int64 a2@<esi:edi>, int a3)
{
  double v3; // st7
  char v4; // al
  long double v5; // st7
  long double v6; // st6
  float v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+14h] [ebp+8h]

  HIDWORD(a2) = a1;
  if ( *(_DWORD *)(a3 + 24) == 1 )
  {
    v3 = *(float *)(a3 + 8);
    v8 = *(int *)(a3 + 8);
    v4 = v3 >= 0.0;
  }
  else
  {
    v4 = 1;
    *(float *)&v8 = 0.0;
  }
  sub_1024DC70(a1, v4);
  v5 = fabs(*(float *)&v8);
  v6 = 1.0;
  if ( v5 > 1.0 || (v6 = 0.0, v5 < 0.0) )
    v5 = v6;
  v7 = v5 * *(float *)(HIDWORD(a2) + 868);
  sub_10253AA0(SHIDWORD(a2), a2, v7, COERCE_FLOAT(1));
}
