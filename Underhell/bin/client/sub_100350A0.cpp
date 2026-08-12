int __thiscall sub_100350A0(_BYTE *this)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int (__thiscall *v11)(_BYTE *); // eax
  int v12; // esi
  int v13; // [esp+4h] [ebp-4h]

  if ( this[116] == 10 )
    return 7;
  v3 = *(_DWORD *)dword_10413178;
  v4 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this + 1) + 36))(this + 4);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(v3 + 44))(dword_10413178, v4) )
  {
    v5 = *(_DWORD *)dword_10413178;
    v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 20))(this);
    v7 = (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this + 1) + 44))(this + 4, v6);
    v8 = (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this + 1) + 156))(this + 4, v7);
    v9 = (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this + 1) + 36))(this + 4, v8);
    (*(void (__thiscall **)(int, int))(v5 + 56))(dword_10413178, v9);
  }
  v10 = *((_DWORD *)this + 40);
  v11 = *(int (__thiscall **)(_BYTE *))(*((_DWORD *)this + 1) + 52);
  *((_DWORD *)this + 40) = *((_DWORD *)off_103DC81C + 1);
  v13 = v11(this + 4);
  *((_DWORD *)this + 40) = v10;
  if ( !v13 )
    return 7;
  v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, *((_DWORD *)this + 23)) != 1
      ? 7
      : 12;
  if ( v13 != 255 || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*((_DWORD *)this + 1) + 16))(this + 4) )
  {
    if ( this[116] == 6 )
      return 13;
    v12 = 8;
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 52))(
           dword_10413178,
           *((_DWORD *)this + 23)) )
    {
      return 9;
    }
  }
  return v12;
}
