int __usercall sub_102B6D70@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = a1;
  sub_100E8220(a2, "models/props_combine/combine_mine01.mdl");
  sub_1023B8B0("NPC_CombineMine.Hop");
  sub_1023B8B0("NPC_CombineMine.FlipOver");
  sub_1023B8B0("NPC_CombineMine.TurnOn");
  sub_1023B8B0("NPC_CombineMine.TurnOff");
  sub_1023B8B0("NPC_CombineMine.OpenHooks");
  sub_1023B8B0("NPC_CombineMine.CloseHooks");
  sub_1023B8B0("NPC_CombineMine.ActiveLoop");
  sub_100E8220(a2, "sprites/glow01.vmt");
  dword_106DCD14 = *sub_10162BE0(&v3, "npc_turret_floor");
  result = *sub_10162BE0(&v3, "npc_turret_ground");
  dword_106DCD10 = result;
  return result;
}
