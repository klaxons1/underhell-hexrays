int __thiscall sub_10271DB0(int *this, const char *ArgList)
{
  int result; // eax
  unsigned int v4; // kr00_4
  char *v5; // eax

  result = sub_10034930(this[59]);
  this[59] = 0;
  if ( *ArgList )
  {
    v4 = strlen(ArgList);
    sub_10034930(0);
    v5 = (char *)sub_100DDA40(v4 + 6);
    this[59] = (int)v5;
    sub_10228370(v5, v4 + 6, "vgui/%s", ArgList);
    return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
