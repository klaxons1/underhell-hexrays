int __stdcall sub_100755C0(char *a1)
{
  int result; // eax

  result = dword_1043079C;
  if ( *(_DWORD *)(dword_1043079C + 48) )
  {
    result = sub_100B4090("CHudCloseCaption");
    if ( result )
      return sub_100C56E0(a1);
  }
  return result;
}
