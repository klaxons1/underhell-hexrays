int __thiscall sub_100A7980(_DWORD *this)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int result; // eax

  if ( ++*this < 0 )
    *this = 0;
  v3 = (_DWORD *)this[1];
  if ( v3 )
  {
    do
    {
      v4 = (_DWORD *)v3[12];
      sub_10184660(v3[11]);
      sub_10184660(v3[1]);
      result = sub_10184660(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  this[1] = 0;
  return result;
}
