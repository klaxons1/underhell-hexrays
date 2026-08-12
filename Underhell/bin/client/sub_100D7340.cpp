int __cdecl sub_100D7340(int a1)
{
  int result; // eax

  if ( *(int *)a1 > 1 )
    result = atoi(*(const char **)(a1 + 1036));
  else
    result = atoi(Locale);
  dword_10432714 = result;
  return result;
}
