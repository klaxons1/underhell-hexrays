int __thiscall sub_100477B0(_DWORD *this)
{
  int v2; // esi
  int v4; // esi

  v2 = sub_100422D0();
  if ( v2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 880))(v2) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 900))(v2);
  v4 = (*(int (__thiscall **)(_DWORD *))(*(this - 1) + 776))(this - 1);
  if ( v4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 1308))(v4) )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1304))(v4);
  else
    return sub_100344A0((int)this);
}
