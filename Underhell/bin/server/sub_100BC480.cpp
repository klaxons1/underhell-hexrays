int __thiscall sub_100BC480(_DWORD *this)
{
  int v1; // esi
  int result; // eax

  v1 = this[6];
  this[7] = v1 / 4;
  result = v1 % 4;
  if ( v1 % 4 )
  {
    result = v1 / 3;
    if ( !(v1 % 3) || (result = v1 / 5, !(v1 % 5)) )
      this[7] = result;
  }
  if ( (int)this[7] < 5 )
    this[7] = 0;
  return result;
}
