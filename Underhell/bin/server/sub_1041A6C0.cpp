char *__thiscall sub_1041A6C0(_DWORD *this, char *Source)
{
  char *v3; // eax
  char *v4; // edi
  unsigned int v5; // kr00_4
  char *v6; // eax
  int v8; // [esp-4h] [ebp-18h]
  char *v9; // [esp+10h] [ebp-4h] BYREF

  v3 = (char *)sub_10184390(96);
  if ( v3 )
    v4 = sub_1041A540(v3, (int)this);
  else
    v4 = 0;
  v8 = *((_DWORD *)v4 + 1);
  v9 = v4;
  sub_10184660(v8);
  v5 = strlen(Source);
  v6 = (char *)sub_10184390(v5 + 1);
  *((_DWORD *)v4 + 1) = v6;
  sub_104299C0(v6, Source, v5 + 1);
  sub_1041DA00(this[70], &v9);
  return v4;
}
