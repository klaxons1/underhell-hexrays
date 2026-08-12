int __thiscall sub_1024B920(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // esi
  int v4; // eax
  int result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  int v9; // eax

  v2 = this + 54;
  if ( (*(int (__thiscall **)(_DWORD *))(this[54] + 8))(this + 54) )
  {
    v3 = *v2;
    v4 = (*(int (__thiscall **)(_DWORD *, int))(*v2 + 8))(v2, 1);
    return (*(int (__thiscall **)(_DWORD *, int))(v3 + 40))(v2, v4);
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this);
    if ( result )
    {
      v6 = (_DWORD *)sub_10229D00(32);
      if ( v6 )
        v7 = sub_10229D20(v6, (int)"FindDefaultButton");
      else
        v7 = 0;
      v8 = *this;
      v9 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*this + 148))(this, v7, 0.0);
      return (*(int (__thiscall **)(_DWORD *, int))(v8 + 136))(this, v9);
    }
  }
  return result;
}
