int __thiscall sub_100F16D0(_DWORD *this, int a2, float *a3)
{
  int v3; // eax
  int result; // eax
  int i; // esi

  v3 = this[1510];
  if ( v3 <= a2 )
    v3 = a2;
  this[1510] = v3;
  *(float *)&this[17 * a2 + 22] = *a3;
  result = (int)&this[17 * a2 + 22];
  *(float *)(result + 4) = a3[1];
  *(float *)(result + 8) = a3[2];
  for ( i = this[1502]; i; i = *(_DWORD *)(i + 5980) )
    result = sub_100F16D0(a2, a3);
  return result;
}
