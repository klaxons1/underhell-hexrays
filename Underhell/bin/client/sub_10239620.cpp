int __thiscall sub_10239620(int (__thiscall ***this)(void *))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  *((_WORD *)this + 40) |= 2u;
  v1 = dword_1047CA6C;
  v2 = *(_DWORD *)dword_1047CA6C;
  v3 = (**this)(this);
  return (*(int (__thiscall **)(int, int))(v2 + 196))(v1, v3);
}
