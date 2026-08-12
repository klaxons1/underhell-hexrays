int __thiscall sub_1021A5B0(void *this, const char *ArgList, const char *a3, int a4)
{
  unsigned int v5; // esi
  void *v6; // esp
  char v8[12]; // [esp+0h] [ebp-Ch] BYREF

  v5 = strlen(a3) + strlen(ArgList) + 2;
  v6 = alloca(v5);
  sub_10429A00(v8, v5, "%s\\%s", (char)ArgList);
  return (*(int (__thiscall **)(void *, char *, int))(*(_DWORD *)this + 20))(this, v8, a4);
}
