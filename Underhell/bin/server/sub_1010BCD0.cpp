int __thiscall sub_1010BCD0(_DWORD *this)
{
  int result; // eax
  int v3; // esi

  result = this[1];
  if ( result )
  {
    do
    {
      v3 = *(_DWORD *)(result + 4);
      sub_1042FBE0(result);
      result = v3;
    }
    while ( v3 );
  }
  this[1] = 0;
  return result;
}
