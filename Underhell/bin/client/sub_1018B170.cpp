int __thiscall sub_1018B170(_DWORD *this, int a2)
{
  int v2; // ebx
  char *v3; // edi
  int v4; // eax
  int v6; // [esp-Ch] [ebp-18h]
  int v7; // [esp-8h] [ebp-14h]
  int v8; // [esp-4h] [ebp-10h]

  v2 = *(this - 107);
  v3 = (char *)(this - 107);
  v8 = sub_1022B4C0("cmd", (int)Locale);
  v7 = sub_1022B4C0("msg", (int)Locale);
  v6 = sub_1022B4C0("title", (int)Locale);
  v4 = sub_1022A800("type", 0);
  return (*(int (__thiscall **)(char *, int, int, int, int))(v2 + 1028))(v3, v4, v6, v7, v8);
}
