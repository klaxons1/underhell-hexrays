int __thiscall sub_10248D60(int *this, char *Source)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  v3 = strlen(Source);
  sub_10034930(this[53]);
  v4 = (char *)sub_100DDA40(v3 + 1);
  this[53] = (int)v4;
  sub_102282F0(v4, Source, v3 + 1);
  return (*(int (__thiscall **)(int *, _DWORD, int))(*this + 244))(this, 0, 1);
}
