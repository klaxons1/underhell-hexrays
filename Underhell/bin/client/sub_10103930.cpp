int __thiscall sub_10103930(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax
  int v4; // edi
  _DWORD *i; // ecx

  v2 = this[301];
  result = 0;
  if ( v2 > 0 )
  {
    v4 = this[298];
    for ( i = (_DWORD *)(v4 + 40); *(_DWORD *)(a2 + 164) != *i; i += 11 )
    {
      if ( ++result >= v2 )
        return result;
    }
    result *= 44;
    *(_DWORD *)(result + v4 + 40) = -1;
  }
  return result;
}
