int __usercall sub_1009A580@<eax>(const char *a1@<esi>)
{
  if ( !_stricmp(a1, "scene") )
    return 3;
  if ( !_stricmp(a1, "sentence") )
    return 2;
  if ( !_stricmp(a1, "speak") )
    return 1;
  if ( !_stricmp(a1, "response") )
    return 4;
  return _stricmp(a1, "print") != 0 ? 0 : 5;
}
