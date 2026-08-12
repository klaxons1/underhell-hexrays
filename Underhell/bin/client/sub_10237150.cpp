int __thiscall sub_10237150(int (__thiscall ***this)(void *, int, int), int a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = dword_1047CA70;
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v6 = sub_10278FB0();
  v7 = (**this)(this, a2, v6);
  v8 = (*(int (__thiscall **)(int, int))(a2 + 72))(v2, v7);
  return (*(int (__thiscall **)(int, int))(v4 + 216))(v3, v8);
}
