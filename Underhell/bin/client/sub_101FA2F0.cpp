int __thiscall sub_101FA2F0(void *this)
{
  int result; // eax
  int v2; // ecx
  int i; // edx
  double v4; // st6
  double v5; // st5
  double v6; // st4
  double v7; // st3
  double v8; // st2
  double v9; // st7
  double v10; // rt1
  double v11; // st3
  double v12; // st6
  double v13; // rt2
  double v14; // st4
  double v15; // st5
  __int16 v16; // fps
  bool v17; // c0
  char v18; // c2
  bool v19; // c3

  sub_101F9150((int)this);
  for ( i = *(_DWORD *)(v2 + 6008); i; *(float *)(v2 + 6036) = v9 )
  {
    v4 = *(float *)(i + 6020);
    v5 = *(float *)(i + 6024);
    v6 = *(float *)(i + 6028);
    v7 = *(float *)(i + 6032);
    v8 = *(float *)(i + 6016);
    v9 = *(float *)(i + 6036);
    if ( v8 > *(float *)(v2 + 6016) )
      v8 = *(float *)(v2 + 6016);
    *(float *)(v2 + 6016) = v8;
    v10 = v7;
    v11 = v4;
    v12 = v10;
    if ( v11 > *(float *)(v2 + 6020) )
      v11 = *(float *)(v2 + 6020);
    *(float *)(v2 + 6020) = v11;
    v13 = v6;
    v14 = v5;
    v15 = v13;
    if ( v14 > *(float *)(v2 + 6024) )
      v14 = *(float *)(v2 + 6024);
    *(float *)(v2 + 6024) = v14;
    if ( v15 < *(float *)(v2 + 6028) )
      v15 = *(float *)(v2 + 6028);
    *(float *)(v2 + 6028) = v15;
    if ( v12 < *(float *)(v2 + 6032) )
      v12 = *(float *)(v2 + 6032);
    *(float *)(v2 + 6032) = v12;
    v17 = v9 < *(float *)(v2 + 6036);
    v18 = 0;
    v19 = v9 == *(float *)(v2 + 6036);
    LOWORD(result) = v16;
    if ( v9 < *(float *)(v2 + 6036) )
      v9 = *(float *)(v2 + 6036);
    i = *(_DWORD *)(i + 5980);
  }
  return result;
}
