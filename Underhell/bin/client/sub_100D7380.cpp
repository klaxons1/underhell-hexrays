int __cdecl sub_100D7380(int *a1)
{
  char *v1; // eax
  int result; // eax

  if ( *a1 > 1 )
    v1 = (char *)a1[259];
  else
    v1 = (char *)Locale;
  result = sub_100D5D70((int *)&unk_104325CC, v1);
  if ( dword_104453A8 )
    return (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_104453A8 + 8))(dword_104453A8, "scores", 1);
  return result;
}
