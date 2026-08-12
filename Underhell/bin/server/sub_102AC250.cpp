int __thiscall sub_102AC250(_DWORD *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // edx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  result = this[256] + v2;
  v4 = this[257];
  if ( result <= v4 )
  {
    result = result < 0 ? 0 : result;
    this[256] = result;
  }
  else
  {
    this[256] = v4;
  }
  return result;
}
