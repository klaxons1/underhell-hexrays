int __thiscall sub_100C5020(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[283] - 1;
  if ( a2 <= v2 )
    v2 = a2 < 0 ? 0 : a2;
  return this[280] + 76 * v2;
}
