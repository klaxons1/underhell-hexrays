int __thiscall sub_101ACCC0(_DWORD *this)
{
  int result; // eax
  int v2; // edx

  result = this[202];
  if ( !result )
    return this[201];
  v2 = this[62];
  if ( (v2 & 0x8000) == 0 || (v2 & 4) == 0 )
    return this[201];
  return result;
}
