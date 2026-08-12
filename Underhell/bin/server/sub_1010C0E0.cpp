int __thiscall sub_1010C0E0(_DWORD *this)
{
  int result; // eax
  int v3; // esi

  result = this[12];
  if ( result )
  {
    do
    {
      v3 = *(_DWORD *)(result + 48);
      sub_1042FBE0(result);
      result = v3;
    }
    while ( v3 );
  }
  this[12] = 0;
  return result;
}
