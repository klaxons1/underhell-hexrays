int __cdecl sub_1023B010(char *a1, int a2)
{
  int v2; // edi
  char *v3; // eax
  char *v4; // eax

  v2 = *(_DWORD *)dword_106B31E8;
  v3 = (char *)sub_1023AF50(a1, a2);
  v4 = sub_1023A5F0(v3);
  return (*(int (__thiscall **)(int, char *))(v2 + 12))(dword_106B31E8, v4);
}
