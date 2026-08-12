int __cdecl sub_1003E4D0(char *String2)
{
  int v1; // eax
  int v2; // ebx
  char *v3; // eax
  int v4; // ecx

  v1 = dword_10405E70;
  v2 = 0;
  if ( dword_10405E70 <= 0 )
  {
LABEL_4:
    if ( v1 < 384 )
    {
      if ( String2
        && (v3 = (char *)(*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(
                           g_pMemAlloc,
                           strlen(String2) + 1)) != 0 )
      {
        strcpy(v3, String2);
      }
      else
      {
        v3 = 0;
      }
      v4 = dword_10405E70;
      (&String1)[dword_10405E70] = v3;
      dword_10405E70 = v4 + 1;
    }
  }
  else
  {
    while ( _stricmp((&String1)[v2], String2) )
    {
      v1 = dword_10405E70;
      if ( ++v2 >= dword_10405E70 )
        goto LABEL_4;
    }
  }
  return v2;
}
