int sub_100C87D0()
{
  int i; // esi
  int result; // eax

  if ( dword_106966F4 )
  {
    for ( i = 0; i < 104; i += 4 )
      sub_10184660(*(_DWORD *)(i + dword_106966F4));
    result = sub_10184660(dword_106966F4);
    dword_106966F4 = 0;
  }
  return result;
}
