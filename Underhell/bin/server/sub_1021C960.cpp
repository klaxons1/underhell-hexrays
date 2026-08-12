int __thiscall sub_1021C960(int this, float *a2, int a3)
{
  float *v4; // eax
  int v5; // edi
  double v6; // st7
  float *v7; // ecx
  int v8; // edx
  long double v9; // st5
  bool v10; // c0
  double v11; // st7
  double v12; // st7
  float v14; // [esp+0h] [ebp-10h]

  sub_1021CD00(a2, a3);
  *a2 = *(float *)(this + 24624);
  v4 = &a2[9 * a3 - 9];
  a2[1] = *(float *)(this + 24628);
  a2[2] = *(float *)(this + 24632);
  *v4 = *(float *)(this + 24636);
  v4[1] = *(float *)(this + 24640);
  v4[2] = *(float *)(this + 24644);
  v5 = *(_DWORD *)(this + 12);
  v6 = 0.0;
  if ( v5 > 0 )
  {
    v7 = (float *)(*(_DWORD *)(this + 8) + 8);
    v8 = *(_DWORD *)(this + 12);
    do
    {
      v9 = fabs(*(float *)(this + 24664) - *v7);
      if ( v9 > v6 )
        v6 = v9;
      v7 += 9;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 < *(float *)(this + 24660);
  v11 = *(float *)(this + 24656);
  if ( v10 )
    v12 = v11 + 1.0;
  else
    v12 = v11 - 1.0;
  *(float *)(this + 24656) = v12;
  v14 = (*(float *)(this + 24652) + *(float *)(this + 24656) - 100.0) / (double)(v5 - 1);
  return sub_1021CC40(v14);
}
