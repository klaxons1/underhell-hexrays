char __thiscall sub_10051680(int this, float *a2, int a3)
{
  double v3; // st3
  double v4; // st6
  double v5; // st3
  double v6; // st4
  double v7; // st5

  v3 = *a2 - *(float *)(this + 28);
  v4 = v3 * v3;
  v5 = a2[1] - *(float *)(this + 32);
  v6 = a2[2] - *(float *)(this + 36);
  v7 = *(float *)(this + 68) + 0.1;
  if ( v6 * v6 + v5 * v5 + v4 <= v7 * v7 )
    return sub_1004B5B0((_DWORD **)this);
  else
    return 0;
}
