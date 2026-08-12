int __thiscall sub_1024B850(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax

  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(this[54] + 40))(this + 54, a2, 0);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this);
  if ( result )
  {
    v4 = (_DWORD *)sub_10229D00(32);
    if ( v4 )
      v5 = sub_10229D20(v4, (int)"CurrentDefaultButtonSet");
    else
      v5 = 0;
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60))(dword_1047CA74, a2);
    sub_1022ACA0(v5, "button", v6);
    v7 = *this;
    v8 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 148))(this, v5, 0.0);
    return (*(int (__thiscall **)(_DWORD *, int))(v7 + 136))(this, v8);
  }
  return result;
}
