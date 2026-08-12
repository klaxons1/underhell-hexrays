int __thiscall sub_1016B5B0(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  _DWORD **i; // edx
  int v6; // ecx

  v3 = this[3];
  result = 0;
  if ( v3 > 0 )
  {
    for ( i = (_DWORD **)*this; **i != a2; ++i )
    {
      if ( ++result >= v3 )
        return result;
    }
    if ( result != -1 )
    {
      v6 = v3 - result - 1;
      if ( v6 > 0 )
        result = (int)memcpy((void *)(*this + 4 * result), (const void *)(*this + 4 * result + 4), 4 * v6);
      --this[3];
    }
  }
  return result;
}
