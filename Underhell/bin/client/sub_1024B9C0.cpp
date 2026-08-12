char *__thiscall sub_1024B9C0(int *this, char *Source, int a3)
{
  int v4; // ebp
  unsigned int v5; // kr00_4
  char *v6; // eax
  char *result; // eax

  v4 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1047CA80 + 64))(dword_1047CA80, Source, a3);
  sub_10034930(this[61]);
  v5 = strlen(Source);
  v6 = (char *)sub_100DDA40(v5 + 1);
  this[61] = (int)v6;
  result = sub_102282F0(v6, Source, v5 + 1);
  this[62] = a3;
  if ( v4 )
    return (char *)(*(int (__thiscall **)(int *, int))(*this + 348))(this, v4);
  return result;
}
