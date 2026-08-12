char __thiscall sub_1038A110(void *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this) )
    return 0;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    return 0;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 364))(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1096))(v3);
  if ( !v4 )
    return 0;
  if ( *(char **)(v4 + 92) == "prop_vehicle_airboat" )
    return 1;
  return sub_100D6240((_DWORD *)v4, "prop_vehicle_airboat");
}
