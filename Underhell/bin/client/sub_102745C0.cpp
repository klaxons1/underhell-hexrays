void __thiscall sub_102745C0(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD **v4; // ecx

  if ( a2 )
  {
    this[68] = a2;
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, a2);
    v4 = (_DWORD **)this[66];
    this[64] = v3 + 2;
    if ( v4 )
      sub_10273B90(v4, a2);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
}
