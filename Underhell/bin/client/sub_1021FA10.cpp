int __thiscall sub_1021FA10(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax

  v3 = this[15];
  if ( v3 > 63 )
  {
    v3 = 63;
  }
  else if ( v3 < 0 )
  {
    v3 = 0;
  }
  this[15] = v3;
  result = this[16];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[16] = 0;
    return result;
  }
  this[16] = result;
  return result;
}
