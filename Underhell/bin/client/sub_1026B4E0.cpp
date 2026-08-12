bool __thiscall sub_1026B4E0(int *this, int a2)
{
  int v3; // ecx
  bool v4; // zf
  int v5; // ecx

  if ( a2 < 0 || a2 >= this[1] || a2 > this[7] )
    return 0;
  v3 = *this;
  v4 = *(_DWORD *)(v3 + 12 * a2 + 4) == a2;
  v5 = v3 + 12 * a2;
  return !v4 || *(_DWORD *)(v5 + 8) == a2;
}
