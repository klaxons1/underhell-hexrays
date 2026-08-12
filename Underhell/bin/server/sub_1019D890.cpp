int sub_1019D890()
{
  int result; // eax
  char *v1; // eax
  char *v2; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 20))(dword_106B8370) )
    {
      v1 = sub_101959B0();
      return Msg("Navigation map '%s' saved.\n", v1);
    }
    else
    {
      v2 = sub_101959B0();
      if ( !v2 )
        v2 = "(null)";
      return Msg("ERROR: Cannot save navigation map '%s'.\n", v2);
    }
  }
  return result;
}
