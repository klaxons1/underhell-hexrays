int __cdecl sub_101E2100(char *String1)
{
  int result; // eax

  result = sub_10227C40(String1, "playback_time");
  if ( result )
    return sub_10227C40(String1, "shifted_time") != 0 ? -1 : 1;
  return result;
}
