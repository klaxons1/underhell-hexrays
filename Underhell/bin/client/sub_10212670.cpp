__int64 __thiscall sub_10212670(_DWORD *this)
{
  __int64 result; // rax
  int v2; // ecx

  result = 1LL << this[11];
  v2 = this[29];
  if ( v2 != -1 )
    return (1LL << v2) | result;
  return result;
}
