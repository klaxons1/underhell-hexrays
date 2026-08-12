char __stdcall sub_1014F670(int ArgList)
{
  _BYTE *v1; // eax
  int v2; // esi

  v1 = (_BYTE *)sub_100B4090(&dword_1042FB78, "CHudMenu");
  v2 = (int)v1;
  if ( !v1 || !sub_100DDBC0(v1) )
    return 0;
  sub_100DDC60(v2, ArgList);
  return 1;
}
