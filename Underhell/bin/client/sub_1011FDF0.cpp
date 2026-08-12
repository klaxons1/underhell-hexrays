char __thiscall sub_1011FDF0(int *this, float *a2, float a3)
{
  int v4; // edi
  int v5; // esi
  int v6; // edx
  float *i; // ecx
  int v9; // [esp+20h] [ebp+8h]

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v4 = this[3];
  v5 = -1;
  v6 = 0;
  if ( v4 <= 0 )
    return 0;
  v9 = *this;
  for ( i = (float *)(*this + 12); a3 >= (double)*i; i += 5 )
  {
    v5 = v6++;
    if ( v6 >= v4 )
      return 0;
  }
  if ( v5 < 0 )
    return 0;
  sub_1011FD00(a2, a3, (float *)(v9 + 20 * v5), v9 + 20 * v6);
  return 1;
}
