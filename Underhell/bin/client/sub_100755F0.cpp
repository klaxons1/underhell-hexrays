int __stdcall sub_100755F0(char *Source, float a2)
{
  int result; // eax

  result = dword_1043079C;
  if ( *(_DWORD *)(dword_1043079C + 48) )
  {
    result = sub_100B4090("CHudCloseCaption");
    if ( result )
      return sub_100C5840(Source, a2, 0, 0);
  }
  return result;
}
