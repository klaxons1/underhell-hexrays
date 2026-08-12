double __thiscall sub_100ED7A0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  int v7; // ecx

  if ( a2 < 0 )
    return 0.0;
  if ( a2 >= sub_100BF790((int)this) )
    return 0.0;
  v3 = sub_10001430(this);
  if ( !v3 )
    return 0.0;
  v4 = *v3;
  v5 = *(_DWORD *)(v4 + 272) + 20 * a2;
  v6 = *(float *)(v5 + v4 + 16);
  v7 = v4 + v5;
  if ( *(float *)(v7 + 12) == v6 )
    return *(float *)&this[a2 + 285];
  else
    return (*(float *)(v7 + 16) - *(float *)(v7 + 12)) * *(float *)&this[a2 + 285] + *(float *)(v7 + 12);
}
