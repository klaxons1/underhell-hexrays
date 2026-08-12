int __thiscall sub_10131B60(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edx

  v3 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(dword_1047CA7C, a2, 0);
  v4 = *this;
  this[68] = v3;
  (*(void (__thiscall **)(_DWORD *, int))(v4 + 772))(this, v3);
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
