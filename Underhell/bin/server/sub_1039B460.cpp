int sub_1039B460()
{
  int result; // eax

  sub_1012CED0((char)&off_106775D8);
  sub_10215D00(&dword_106775DC);
  result = dword_106775DC;
  if ( dword_106775E4 >= 0 )
  {
    if ( dword_106775DC )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106775DC);
      result = 0;
      dword_106775DC = 0;
    }
    dword_106775E0 = 0;
  }
  word_106775EC = -1;
  word_106775F0 = -1;
  dword_106775F4 = result;
  return result;
}
