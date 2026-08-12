int __thiscall sub_1007DC70(_DWORD *this, int a2)
{
  int v2; // eax
  int result; // eax
  int v4; // eax

  v2 = this[10];
  if ( v2 )
    *(_DWORD *)(v2 + 44) = 0;
  result = a2;
  this[10] = a2;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 44);
    if ( v4 )
      *(_DWORD *)(v4 + 40) = 0;
    result = this[10];
    *(_DWORD *)(result + 44) = this;
  }
  return result;
}
