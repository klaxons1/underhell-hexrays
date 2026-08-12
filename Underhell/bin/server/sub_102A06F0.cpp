int __thiscall sub_102A06F0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // eax

  v2 = *(_DWORD *)(this + 16);
  if ( v2 == 2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100002);
    if ( (sub_10023D10(*(_DWORD **)(this + 4), v4) || *(_DWORD *)(this + 104) == 2) && sub_1029EF10((_DWORD *)this) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100002);
      sub_10023E00(*(char **)(this + 4), v6);
      return 100002;
    }
  }
  else if ( v2 == 1 || v2 == 3 )
  {
    Warning("SelectSchedule() called on transitioning passenger!\n");
    v8 = *(_DWORD *)(this + 16);
    if ( v8 == 3 )
    {
      (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**(_DWORD **)(this + 4) + 416))(
        *(_DWORD *)(this + 4),
        this + 76,
        this + 88,
        0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 0);
      return 0;
    }
    if ( v8 == 1 )
    {
      sub_100E10C0(*(_DWORD *)(this + 4), (float *)(this + 76));
      sub_100E11A0(*(_DWORD *)(this + 4), (float *)(this + 88));
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 316))(this);
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 4) + 1416))(*(_DWORD *)(this + 4), 0);
  }
  return 0;
}
