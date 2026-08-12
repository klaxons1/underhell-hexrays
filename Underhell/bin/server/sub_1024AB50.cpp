bool __thiscall sub_1024AB50(void *this, _DWORD *a2, int *ArgList)
{
  const char *v4; // eax

  if ( sub_10189EF0(this, a2, ArgList) )
    return 1;
  v4 = String;
  if ( *ArgList > 0 )
    v4 = (const char *)ArgList[258];
  return v4 == "menuselect" || !_stricmp(v4, "menuselect");
}
