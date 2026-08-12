int __thiscall sub_10389FF0(int *this, _DWORD *a2)
{
  char ***v3; // ecx
  char **v4; // esi
  _DWORD *v5; // eax
  int v6; // esi
  int v7; // eax
  int result; // eax

  if ( *a2 == -1 )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER", 2, 1);
  v3 = (char ***)&off_1061BE18[4 * (*a2 & 0xFFF) + 1];
  if ( off_1061BE18[4 * (*a2 & 0xFFF) + 2] != *a2 >> 12 )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER", 2, 1);
  v4 = *v3;
  if ( !*v3 )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER", 2, 1);
  v5 = (_DWORD *)__RTDynamicCast(
                   (int)v4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBaseGrenade `RTTI Type Descriptor',
                   0);
  if ( v5 )
  {
    v6 = *this;
    v7 = sub_100F4030(v5);
    result = (*(int (__thiscall **)(int *, int))(v6 + 1080))(this, v7);
    if ( result != 3 )
      return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER_GREN", 2, 1);
    return result;
  }
  if ( (*((int (__thiscall **)(char **))*v4 + 85))(v4) )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER_VEHICLE", 2, 1);
  if ( v4[23] != "npc_manhack" && !sub_100D6240(v4, "npc_manhack") )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER", 2, 1);
  result = (*((int (__thiscall **)(char **, _DWORD))*v4 + 158))(v4, 1.0);
  if ( result )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DANGER_MANHACK", 2, 1);
  return result;
}
