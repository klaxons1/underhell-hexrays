_DWORD *__thiscall sub_100A58A0(_DWORD *this, char *Source)
{
  unsigned int v3; // kr00_4
  char *v4; // eax

  sub_100A51A0(this);
  *this = &CInstancedResponseSystem::`vftable';
  this[336] = 0;
  v3 = strlen(Source);
  v4 = (char *)sub_10184390(v3 + 1);
  this[336] = v4;
  sub_104299C0(v4, Source, v3 + 1);
  return this;
}
