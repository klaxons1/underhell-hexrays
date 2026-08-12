BOOL __thiscall sub_10394E30(_DWORD *this)
{
  _BYTE *v2; // esi
  int (__thiscall *v3)(_BYTE *); // edx
  char v4; // bl
  char v5; // al
  char v6; // cl
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  BOOL result; // eax

  v2 = (_BYTE *)this[906];
  if ( !v2
    || (v3 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 252),
        v4 = v2[8],
        v2[8] = 1,
        v5 = v3(v2),
        v6 = v2[8],
        v2[8] = v4,
        !v6) )
  {
    v5 = sub_100254E0(this);
  }
  result = 1;
  if ( !v5 )
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 2424))(this);
    if ( !sub_10050FC0(v7) )
      return 0;
    v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 2424))(this);
    v9 = sub_10050FC0(v8);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
      return 0;
  }
  return result;
}
