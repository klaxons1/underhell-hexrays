int __stdcall sub_10389B20(int a1)
{
  if ( *(char **)(a1 + 92) == "weapon_pistol" || sub_100D6240((_DWORD *)a1, "weapon_pistol") )
    return 0;
  if ( *(char **)(a1 + 92) == "weapon_smg1" || sub_100D6240((_DWORD *)a1, "weapon_smg1") )
    return 3;
  return sub_1024B1A0(a1);
}
