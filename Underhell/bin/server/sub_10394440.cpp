bool __thiscall sub_10394440(_DWORD *this, _DWORD *a2)
{
  char *v3; // eax

  if ( !sub_100C78E0(this, (int)a2) )
    return 0;
  v3 = (char *)dword_106EA238;
  if ( a2[23] == dword_106EA238 )
    return sub_1004B240(this, (int)"weapon_shotgun") < 1;
  if ( !dword_106EA238 )
    v3 = (char *)String;
  return !sub_100D6240(a2, v3) || sub_1004B240(this, (int)"weapon_shotgun") < 1;
}
