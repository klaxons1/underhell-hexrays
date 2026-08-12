char __thiscall sub_101D3D60(_DWORD *this, unsigned int a2, unsigned int a3, void *a4, int a5)
{
  if ( !a4 || a5 != this[8] >> 2 || a2 >= this[1] || a3 >= this[2] )
    return 0;
  memcpy_0(a4, (const void *)(this[5] + this[3] * (a3 / this[10]) + 4 * a5 * (a2 / this[9])), 4 * a5);
  return 1;
}
