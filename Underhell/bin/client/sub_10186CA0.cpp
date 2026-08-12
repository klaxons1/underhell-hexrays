int __thiscall sub_10186CA0(_DWORD *this)
{
  bool v2; // al
  bool v3; // al
  int v4; // edx
  bool v5; // al
  int result; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(dword_104455B4 + 48) && (*(int (__thiscall **)(_DWORD *))(this[62] + 4))(this + 62) != 3;
  *((_BYTE *)this + 6304) = v2;
  v3 = *(_DWORD *)(dword_1044556C + 48) && (*(int (__thiscall **)(_DWORD *))(this[62] + 4))(this + 62) != 3;
  v4 = this[62];
  *((_BYTE *)this + 6306) = v3;
  v5 = (*(int (__thiscall **)(_DWORD *))(v4 + 4))(this + 62) != 3 && !*(_DWORD *)(dword_10445644 + 48)
    || (*(int (__thiscall **)(_DWORD *))(this[62] + 4))(this + 62) == 3
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 216))(this);
  *((_BYTE *)this + 6388) = v5;
  if ( !*(_DWORD *)(dword_104455FC + 48) || (v13 = 1, (*(int (__thiscall **)(_DWORD *))(this[62] + 4))(this + 62) == 3) )
    v13 = 0;
  *((float *)this + 1596) = (float)v13;
  *((float *)this + 1594) = *((float *)off_103DC81C + 3);
  result = sub_100422D0();
  v7 = result;
  if ( result )
  {
    v8 = sub_10076690();
    if ( v8 == 4 || v8 == 5 )
    {
      v11 = *this;
      v12 = sub_100766B0();
      return (*(int (__thiscall **)(_DWORD *, int))(v11 + 104))(this, v12);
    }
    else
    {
      v9 = *this;
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 8) + 36))(v7 + 8);
      return (*(int (__thiscall **)(_DWORD *, int))(v9 + 104))(this, v10);
    }
  }
  return result;
}
