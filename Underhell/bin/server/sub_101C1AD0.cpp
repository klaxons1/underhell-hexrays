char __thiscall sub_101C1AD0(_DWORD *this, float *a2)
{
  int v3; // esi
  int i; // edi

  v3 = this[9] - 1;
  this[11] = -1;
  if ( v3 < 0 )
    return 1;
  for ( i = 104 * v3; sub_101C16D0((int)this, i + this[6], a2, 0); i -= 104 )
  {
    if ( --v3 < 0 )
      return 1;
  }
  this[11] = v3;
  return 0;
}
