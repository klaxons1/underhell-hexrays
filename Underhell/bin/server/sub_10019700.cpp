int __stdcall sub_10019700(_DWORD *a1, char *String1)
{
  const char **v2; // esi
  int result; // eax
  const char *v4; // [esp+0h] [ebp-Ch]

  v2 = (const char **)off_105FD598;
  while ( _stricmp(String1, *v2) )
  {
    if ( (int)++v2 >= (int)&dword_105FD5B8 )
    {
      Error("You forgot to add flex controller %s to list in CAI_BaseActor::IsServerSideFlexController().", v4);
      break;
    }
  }
  result = sub_100ECFF0(String1);
  *a1 = result;
  return result;
}
