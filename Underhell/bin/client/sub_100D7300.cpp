int *__cdecl sub_100D7300(int *a1)
{
  char *v1; // eax
  int *result; // eax

  if ( *a1 > 1 )
    v1 = (char *)a1[259];
  else
    v1 = (char *)Locale;
  result = sub_100D5DE0((int *)&unk_1043262C, v1);
  dword_10432718 = 0;
  return result;
}
