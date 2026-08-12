bool __thiscall sub_101351E0(_DWORD *this, int a2, int *a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  v4 = dword_1047CA74;
  v5 = *(_DWORD *)dword_1047CA74;
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))*this)(this, 0);
  (*(void (__thiscall **)(int, int))(v5 + 72))(v4, v6);
  return sub_10072D40(this, a2, a3) != 0;
}
