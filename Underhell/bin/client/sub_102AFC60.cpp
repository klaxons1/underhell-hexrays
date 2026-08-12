BOOL __cdecl sub_102AFC60(int a1, _DWORD *a2)
{
  int v2; // edi
  char *v3; // eax

  v2 = sub_1022EAF0(a1, dword_10489B80, 1);
  sub_1022D000(a2, v2 - 1);
  v3 = sub_1022D040(a2);
  sub_1022F190(a1, dword_10489B80, v3, v2);
  return *(_BYTE *)(a1 + 20) == 0;
}
