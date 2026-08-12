char __thiscall sub_100516E0(int this, float *a2, int a3, int a4)
{
  double v4; // st3
  double v5; // st6
  double v6; // st3
  double v7; // st4
  double v8; // st5

  v4 = *a2 - *(float *)(this + 28);
  v5 = v4 * v4;
  v6 = a2[1] - *(float *)(this + 32);
  v7 = a2[2] - *(float *)(this + 36);
  v8 = *(float *)(this + 72) + 0.1;
  if ( v7 * v7 + v6 * v6 + v5 <= v8 * v8 )
    return sub_1004B5C0((_DWORD **)this);
  else
    return 0;
}
