int __thiscall sub_1027B6E0(int this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edi

  if ( a2 == 107 )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
      v4 = sub_1022B1A0(v3, (int)"ItemLeftClick", "itemID", *(_DWORD *)(this + 292));
    else
      v4 = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 288) + 180))(*(_DWORD *)(this + 288), v4);
    return sub_10279CE0(*(_DWORD **)(this + 288), this, (int (__thiscall ***)(_DWORD))this);
  }
  else
  {
    if ( a2 == 108 )
    {
      v6 = (_DWORD *)sub_10229D00(32);
      if ( v6 )
        v7 = sub_1022B1A0(v6, (int)"ItemContextMenu", "itemID", *(_DWORD *)(this + 292));
      else
        v7 = 0;
      sub_1022ACE0(v7, "SubPanel", this);
      (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 288) + 180))(*(_DWORD *)(this + 288), v7);
    }
    return sub_10279CE0(*(_DWORD **)(this + 288), this, (int (__thiscall ***)(_DWORD))this);
  }
}
