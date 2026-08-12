int __usercall sub_101A12E0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v5) )
  {
    a1[115] = "models/combine_soldier_assassin.mdl";
    sub_100D8500(a1);
  }
  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  sub_10260680("item_healthvial", 0);
  sub_10260680("weapon_frag", 0);
  sub_10260680("item_ammo_ar2_altfire", 0);
  sub_101543E0((int)"electrical_arc_01_system");
  sub_101543E0((int)"grenade_explosion_01h");
  sub_1023B8B0("NPC_ACE.Cloak");
  sub_1023B8B0("Player.SuperJump.Land");
  sub_1023B8B0("NPC_Ace.Dissolve");
  return sub_1033CB80(a1);
}
