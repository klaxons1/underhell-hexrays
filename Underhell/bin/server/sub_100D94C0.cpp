unsigned int __thiscall sub_100D94C0(_DWORD *this, unsigned int *a2)
{
  unsigned int result; // eax
  int v3; // ecx

  result = *a2;
  this[185] = *a2;
  v3 = this[6];
  if ( v3 )
  {
    result = (result >> 12) & 0x3FF;
    *(_DWORD *)(v3 + 4) = result;
  }
  return result;
}
