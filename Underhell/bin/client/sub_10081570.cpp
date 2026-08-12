int __stdcall sub_10081570(int (__thiscall ***a1)(_DWORD))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = dword_1047CA74;
  v2 = *(_DWORD *)dword_1047CA74;
  v3 = (**a1)(a1);
  (*(void (__thiscall **)(int, int, int))(v2 + 92))(v1, dword_103DD02C, v3);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 96))(dword_1047CA74, dword_103DD02C);
}
