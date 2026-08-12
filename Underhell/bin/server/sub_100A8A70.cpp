bool __thiscall sub_100A8A70(int this, _DWORD *a2)
{
  bool result; // al
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  if ( !*a2 )
    return 1;
  v4 = *(_DWORD *)(sub_100D7680(*a2) + 2324);
  v5 = dword_1060AD28[v4];
  if ( v5 >= 0 )
  {
    v6 = dword_1060AD28[*(_DWORD *)(this + 888)];
    v7 = dword_1060AD28[*(_DWORD *)(this + 892)];
    if ( v6 <= v7 )
    {
      return v5 >= v6 && v5 <= v7;
    }
    else
    {
      DevMsg("Script condition warning: Invalid setting for Maximum/Minimum state\n");
      sub_100EC3F0(0, 0.0, 0);
      *(_BYTE *)(this + 876) = 1;
      return 0;
    }
  }
  else
  {
    if ( v4 != 4 )
      return 0;
    result = 1;
    if ( *(int *)(this + 896) < 1 )
      return 0;
  }
  return result;
}
