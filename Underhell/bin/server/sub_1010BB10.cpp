int __thiscall sub_1010BB10(_DWORD *this)
{
  int result; // eax
  int v2; // esi

  result = this[5];
  if ( result )
  {
    do
    {
      v2 = *(_DWORD *)(result + 24);
      sub_1042FBE0(result);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
