int __thiscall sub_1025D190(int *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  unsigned __int8 v8; // al

  v2 = (*(unsigned __int8 (__thiscall **)(int *))(*this + 932))(this) == 0;
  v3 = *this;
  if ( v2 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int *))(v3 + 932))(this) )
      (*(void (__stdcall **)(int))(*this + 920))(1);
  }
  else
  {
    (*(void (__stdcall **)(_DWORD))(v3 + 920))(0);
  }
  v4 = *this;
  LOBYTE(v5) = (*(unsigned __int8 (__thiscall **)(int *))(*this + 932))(this) == 0;
  (*(void (__thiscall **)(int *, int))(v4 + 928))(this, v5);
  (*(void (__thiscall **)(int *))(*this + 972))(this);
  v6 = (_DWORD *)sub_10229D00(32);
  if ( v6 )
    v7 = sub_10229D20(v6, (int)"ButtonToggled");
  else
    v7 = 0;
  v8 = (*(int (__thiscall **)(int *))(*this + 932))(this);
  sub_1022ACA0(v7, "state", v8);
  (*(void (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v7);
  return (*(int (__thiscall **)(int *))(*this + 16))(this);
}
