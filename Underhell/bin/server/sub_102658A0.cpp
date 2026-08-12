bool __cdecl sub_102658A0(_DWORD *a1, _DWORD *a2)
{
  bool result; // al
  unsigned int v3; // eax
  _DWORD *v4; // eax

  result = 0;
  if ( a1 )
  {
    if ( a1 == sub_100E99F0(a2) )
      return 1;
    v3 = a2[103];
    if ( v3 != -1 && off_1061BE18[4 * (a2[103] & 0xFFF) + 2] == v3 >> 12 )
    {
      if ( off_1061BE18[4 * (a2[103] & 0xFFF) + 1] )
      {
        v4 = (_DWORD *)sub_10019B00(a2);
        if ( a1 == sub_100E99F0(v4) )
          return 1;
      }
    }
  }
  return result;
}
