int __thiscall sub_1012BD90(_DWORD *this, int a2)
{
  void (__thiscall *v2)(_DWORD *, int, int, char **); // edx
  int v3; // edi
  char *v4; // esi
  char *v6; // [esp+8h] [ebp-4h] BYREF

  v2 = *(void (__thiscall **)(_DWORD *, int, int, char **))(*(this - 1) + 12);
  v3 = a2;
  v6 = (char *)&a2 + 3;
  v4 = (char *)(this - 1);
  v2(this - 1, a2, 1, &v6);
  return (*(int (__thiscall **)(char *, int))(*(_DWORD *)v4 + 16))(v4, v3);
}
