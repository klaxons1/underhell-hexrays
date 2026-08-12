int __stdcall sub_100F5B50(int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = *(_DWORD *)dword_106BAFF8;
  v2 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, "ladder");
  return (*(int (__thiscall **)(int, int))(v1 + 20))(dword_106BAFF8, v2);
}
