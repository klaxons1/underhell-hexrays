char __thiscall sub_103951C0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // edi

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 2424))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 24))(v2) )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 2424))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 284))(v3) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(this[1186] + 24))(this + 1186) )
      {
        v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 2424))(this);
        v5 = sub_10050FC0(v4);
        v6 = v5;
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        if ( !sub_1005F650(this + 1186, (float *)(v6 + 580)) )
          return 0;
      }
      if ( sub_10023D10(this, 46) && !sub_100CF460(this) )
        return 0;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(this[1114] + 24))(this + 1114) )
        return *(_DWORD *)(dword_10698344 + 48) == 0;
      if ( !*(_DWORD *)(dword_10698344 + 48)
        || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(this[1286] + 24))(this + 1286) )
      {
        return 1;
      }
      return !sub_10295D00(this + 1286);
    }
  }
  return 0;
}
