int __usercall sub_1033CB80@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_100E8220(a2, "models/Weapons/w_grenade.mdl");
  sub_10260680("npc_handgrenade", 0);
  sub_1023B8B0("NPC_Combine.GrenadeLaunch");
  sub_1023B8B0("NPC_Combine.WeaponBash");
  sub_1023B8B0("Weapon_CombineGuard.Special1");
  return sub_1001B170(a1);
}
