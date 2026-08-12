void __thiscall sub_1026E860(_BYTE *this, int a2)
{
  bool v3; // bl
  char v4; // al
  char v5; // [esp+15h] [ebp-1h]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (v5 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
  {
    v5 = 1;
  }
  v3 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
    || (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
  {
    v4 = 1;
  }
  if ( !v5 && !v3 && !v4 && a2 == 64 && (this[384] & 1) == 0 )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 952))(this);
  sub_10236CD0(this, a2);
}
