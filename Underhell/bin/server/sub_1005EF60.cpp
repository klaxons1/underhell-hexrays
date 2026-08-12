int __thiscall sub_1005EF60(int this)
{
  if ( sub_10023D10(*(_DWORD **)(this + 4), 4) || sub_10023D10(*(_DWORD **)(this + 4), 3) )
  {
    if ( *(_BYTE *)(this + 68) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1002);
      return 50;
    }
    else
    {
      return 51;
    }
  }
  else
  {
    if ( sub_10023D10(*(_DWORD **)(this + 4), 17)
      && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 99) <= *(_DWORD *)(this + 88)
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
    {
      sub_1005E520((_DWORD *)this);
      if ( !(unsigned __int8)sub_100B8D10(*(_DWORD *)(this + 4) + 2760) )
        sub_100B8D80(1);
    }
    return 0;
  }
}
