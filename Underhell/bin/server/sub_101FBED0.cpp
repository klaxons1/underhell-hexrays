int __thiscall sub_101FBED0(_DWORD *this, int a2)
{
  int (__thiscall **v3)(_DWORD *, int); // edi
  int v4; // eax

  v3 = (int (__thiscall **)(_DWORD *, int))*this;
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a2);
  return (*v3)(this, v4);
}
