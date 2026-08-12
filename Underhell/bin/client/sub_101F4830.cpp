int __thiscall sub_101F4830(_DWORD *this)
{
  int v2; // esi
  int v3; // edi
  int result; // eax

  v2 = this[3] - 1;
  if ( v2 >= 0 )
  {
    v3 = 1632 * v2;
    do
    {
      result = sub_102358F0(v3 + *this);
      --v2;
      v3 -= 1632;
    }
    while ( v2 >= 0 );
  }
  this[3] = 0;
  return result;
}
