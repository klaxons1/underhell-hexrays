int __thiscall sub_101F5BD0(_DWORD *this, char a2, int a3)
{
  int (__thiscall **v4)(_DWORD *, _DWORD); // edx
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  if ( a2 )
  {
    v4 = (int (__thiscall **)(_DWORD *, _DWORD))*this;
    this[262] = a3;
    ((void (__stdcall *)(int))v4[58])(1);
    v5 = dword_1047CA68;
    v6 = *(_DWORD *)dword_1047CA68;
    v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))*this)(this, this[262]);
    return (*(int (__thiscall **)(int, int))(v6 + 208))(v5, v7);
  }
  else
  {
    this[262] = -1;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 232))(this, 2);
  }
}
