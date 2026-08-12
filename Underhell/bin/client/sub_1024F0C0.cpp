int __thiscall sub_1024F0C0(int (__thiscall ***this)(void *, _DWORD))
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int result; // eax

  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = (**this)(this, 0);
  result = (*(int (__thiscall **)(int, int))(v3 + 176))(v2, v4);
  *((_BYTE *)this + 355) = 0;
  return result;
}
