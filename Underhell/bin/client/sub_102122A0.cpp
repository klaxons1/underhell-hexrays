int __thiscall sub_102122A0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int result; // eax

  v3 = this[12];
  if ( v3 > 63 )
  {
    v3 = 63;
  }
  else if ( v3 < 0 )
  {
    v3 = 0;
  }
  this[12] = v3;
  result = this[13];
  if ( result > 63 )
  {
    result = 63;
  }
  else if ( result < 0 )
  {
    result = 0;
    this[13] = 0;
    return result;
  }
  this[13] = result;
  return result;
}
