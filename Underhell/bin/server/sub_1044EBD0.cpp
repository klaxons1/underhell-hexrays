BOOL __cdecl sub_1044EBD0(int a1, _DWORD *a2)
{
  int v2; // edi
  char *v3; // eax

  v2 = sub_1042DA90(a1, dword_10708B50, 1);
  sub_10431060(a2, v2 - 1);
  v3 = sub_104310A0(a2);
  sub_1042E300(a1, dword_10708B50, v3, v2);
  return *(_BYTE *)(a1 + 20) == 0;
}
