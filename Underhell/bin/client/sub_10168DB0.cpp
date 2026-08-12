void __cdecl sub_10168DB0(char *String2, int a2)
{
  int v2; // esi

  v2 = dword_10442948;
  if ( dword_10442948 )
  {
    while ( _stricmp(*(const char **)v2, String2) )
    {
      v2 = *(_DWORD *)(v2 + 8);
      if ( !v2 )
        goto LABEL_4;
    }
    (*(void (__cdecl **)(int))(v2 + 4))(a2);
  }
  else
  {
LABEL_4:
    DevMsg("DispatchEffect: effect '%s' not found on client\n", String2);
  }
}
