int __cdecl sub_1010E710(int a1, char *String1)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  const char *v4; // eax

  if ( String1 != String && _stricmp(String1, String) )
    return sub_1010E690(String1);
  v2 = (_DWORD *)sub_101E94B0(a1);
  v3 = v2;
  if ( !v2 )
    return sub_1010E690(String1);
  sub_1025FAC0(v2);
  v4 = sub_100D6390(v3);
  return Msg("killing %s\n", v4);
}
