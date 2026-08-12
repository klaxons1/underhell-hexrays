int __stdcall sub_1023EC20(int (__thiscall ***a1)(_DWORD))
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax

  v1 = dword_1047CA74;
  v2 = *(_DWORD *)dword_1047CA74;
  v3 = (**a1)(a1);
  a1 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int, int))(v2 + 60))(v1, v3);
  return sub_102750F0(&a1);
}
