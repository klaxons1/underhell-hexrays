int __cdecl sub_1013C720(int *a1)
{
  int result; // eax
  bool v2; // cc
  char *v3; // eax

  result = *a1;
  if ( *a1 >= 2 )
  {
    if ( dword_1043A260 )
    {
      v2 = result <= 1;
      v3 = (char *)Locale;
      if ( !v2 )
        v3 = (char *)a1[259];
      return sub_1013C530((_DWORD *)dword_1043A260, v3);
    }
    else
    {
      return Msg("No view anim created\n");
    }
  }
  return result;
}
