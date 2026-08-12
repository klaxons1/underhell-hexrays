char __thiscall sub_10389C30(int this, char a2)
{
  int v3; // eax
  int v4; // esi

  v3 = sub_100CF460((_DWORD *)this);
  v4 = v3;
  if ( v3 )
  {
    if ( *(char **)(v3 + 92) == "weapon_stunstick"
      || sub_100D6240((_DWORD *)v3, "weapon_stunstick")
      || *(char **)(v4 + 92) == "weapon_melee_baton"
      || (LOBYTE(v3) = sub_100D6240((_DWORD *)v4, "weapon_melee_baton"), (_BYTE)v3) )
    {
      LOBYTE(v3) = a2;
      if ( *(_BYTE *)(this + 4312) != a2 )
      {
        *(_BYTE *)(this + 4312) = a2;
        LOBYTE(v3) = (unsigned __int8)sub_10023CB0((char *)this, 76);
      }
    }
  }
  return v3;
}
