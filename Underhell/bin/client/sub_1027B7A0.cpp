int __thiscall sub_1027B7A0(int this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( a2 == 107 )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
      v4 = sub_1022B1A0(v3, (int)"ItemDoubleLeftClick", "itemID", *(_DWORD *)(this + 292));
    else
      v4 = 0;
    (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 288) + 180))(*(_DWORD *)(this + 288), v4);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 288) + 468))(*(_DWORD *)(this + 288), 64);
    return sub_10279CE0(*(_DWORD **)(this + 288), this, (int (__thiscall ***)(_DWORD))this);
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 400))(this, a2);
    return sub_10279CE0(*(_DWORD **)(this + 288), this, (int (__thiscall ***)(_DWORD))this);
  }
}
