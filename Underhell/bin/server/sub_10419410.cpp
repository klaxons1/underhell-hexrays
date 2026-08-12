double __thiscall sub_10419410(_DWORD *this, int a2, int a3)
{
  int v4; // esi

  if ( a3 < 0 )
    return 0.0;
  v4 = this[5 * a2 + 60];
  if ( a3 == v4 || a3 > v4 )
    return 1.0;
  else
    return *(float *)(this[5 * a2 + 57] + 28 * a3 + 16);
}
