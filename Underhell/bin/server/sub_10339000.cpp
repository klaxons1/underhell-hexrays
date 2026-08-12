char __thiscall sub_10339000(int this)
{
  int v2; // eax
  int v3; // esi
  int v4; // esi
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = sub_100CF460((_DWORD *)this);
  v3 = v2;
  if ( v2 )
  {
    if ( *(const char **)(v2 + 92) == "weapon_crowbar"
      || (LOBYTE(v2) = sub_100D6240((_DWORD *)v2, "weapon_crowbar"), (_BYTE)v2) )
    {
      if ( *(const char **)(this + 260) == "matt" || (LOBYTE(v2) = sub_100D6190((_DWORD *)this, "matt"), (_BYTE)v2) )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 960))(this, v3, 0, 0);
        sub_1025FAC0(v3);
        v4 = sub_10338B10(0, (int)"weapon_crowbar");
        *(_DWORD *)(v4 + 260) = *sub_10162BE0(&v6, "matt_weapon");
        sub_10260750((char *)v4);
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 136))(v4);
        LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 952))(this, v4);
      }
    }
  }
  return v2;
}
