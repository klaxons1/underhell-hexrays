int __thiscall sub_1008E450(int (__thiscall ***this)(void *))
{
  int v2; // edi
  int v3; // eax
  int result; // eax

  v2 = *(_DWORD *)dword_10413184;
  v3 = (**this)(this);
  result = (*(int (__thiscall **)(int, int))(v2 + 4))(dword_10413184, v3);
  *((_WORD *)this + 19) = result;
  return result;
}
