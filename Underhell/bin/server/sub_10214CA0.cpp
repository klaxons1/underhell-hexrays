void __thiscall sub_10214CA0(void *this, int *a2)
{
  __int64 v2; // rdi
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // eax
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // eax

  HIDWORD(v2) = this;
  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( v4 )
      v5 = v4;
    else
      v5 = (char *)String;
  }
  else
  {
    v5 = (char *)sub_1010D460((int)v3);
  }
  v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, *a2, a2[1], 0);
  LODWORD(v2) = *a2;
  v7 = (int)v6;
  if ( !*(_BYTE *)(HIDWORD(v2) + 1720) )
  {
    v8 = *(_DWORD *)(HIDWORD(v2) + 1672);
    if ( v8 != 2 && v8 != 1 )
    {
      sub_1011FE20(SHIDWORD(v2), HIDWORD(v2) + 1676, 0, 0);
      sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1600), v2, 0.0);
      sub_102141C0((_DWORD *)HIDWORD(v2), v7);
    }
  }
}
