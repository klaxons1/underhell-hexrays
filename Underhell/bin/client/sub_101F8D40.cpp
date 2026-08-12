int __thiscall sub_101F8D40(_DWORD *this)
{
  int result; // eax
  int v2; // esi

  result = this[16];
  if ( result )
  {
    v2 = this[1668];
    if ( *(_DWORD **)(result + 320) == this )
      *(_DWORD *)(result + 320) = v2;
    else
      *(_DWORD *)(this[1669] + 6672) = v2;
    result = this[1668];
    if ( result )
      *(_DWORD *)(result + 6676) = this[1669];
    this[1669] = 0;
    this[1668] = 0;
  }
  return result;
}
