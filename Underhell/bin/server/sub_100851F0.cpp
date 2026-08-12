_DWORD *__thiscall sub_100851F0(_DWORD *this)
{
  _DWORD *result; // eax
  float *v2; // edx
  int v3; // ecx

  result = this;
  this[1] = 0;
  this[2] = 0;
  *this = &CAI_Network::`vftable';
  this[195] = 31;
  v2 = (float *)(this + 6);
  v3 = 32;
  do
  {
    *v2 = 1.1754944e-38;
    *((_DWORD *)v2 + 2) = 11;
    v2 += 6;
    --v3;
  }
  while ( v3 );
  return result;
}
