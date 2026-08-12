int __thiscall sub_10236050(int (__thiscall ***this)(void *, int))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = dword_1047CA6C;
  v2 = *(_DWORD *)dword_1047CA6C;
  v3 = (**this)(this, 1);
  return (*(int (__thiscall **)(int, int))(v2 + 336))(v1, v3);
}
