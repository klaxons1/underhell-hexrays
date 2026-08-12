int __thiscall sub_100C0170(_DWORD *this, char *Source)
{
  unsigned int v2; // edi
  void *v3; // esp
  int result; // eax
  char v5[12]; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v6; // [esp+Ch] [ebp-4h]

  v6 = this;
  v2 = strlen(Source);
  v3 = alloca(v2 + 1);
  sub_102282F0(v5, Source, v2 + 1);
  _strlwr(v5);
  sub_1022FAE0(&Source);
  sub_1022FB00(&Source, v5, v2);
  result = sub_1022FAF0(&Source);
  *v6 = Source;
  return result;
}
