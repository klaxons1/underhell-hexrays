int __usercall sub_1039DC70@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v4; // [esp+4h] [ebp-4h] BYREF

  sub_100E8220(a2, "models/roller.mdl");
  sub_100E8220(a2, "models/roller_spikes.mdl");
  sub_100E8220(a2, "sprites/bluelight1.vmt");
  sub_100E8220(a2, "sprites/rollermine_shock.vmt");
  sub_100E8220(a2, "sprites/rollermine_shock_yellow.vmt");
  sub_1023B8B0("NPC_RollerMine.Taunt");
  sub_1023B8B0("NPC_RollerMine.OpenSpikes");
  sub_1023B8B0("NPC_RollerMine.Warn");
  sub_1023B8B0("NPC_RollerMine.Shock");
  sub_1023B8B0("NPC_RollerMine.ExplodeChirp");
  sub_1023B8B0("NPC_RollerMine.Chirp");
  sub_1023B8B0("NPC_RollerMine.ChirpRespond");
  sub_1023B8B0("NPC_RollerMine.ExplodeChirpRespond");
  sub_1023B8B0("NPC_RollerMine.JoltVehicle");
  sub_1023B8B0("NPC_RollerMine.Tossed");
  sub_1023B8B0("NPC_RollerMine.Hurt");
  sub_1023B8B0("NPC_RollerMine.Roll");
  sub_1023B8B0("NPC_RollerMine.RollWithSpikes");
  sub_1023B8B0("NPC_RollerMine.Ping");
  sub_1023B8B0("NPC_RollerMine.Held");
  sub_1023B8B0("NPC_RollerMine.Reprogram");
  sub_10154360((int)"effects/rollerglow");
  dword_106EA6E0 = *sub_10162BE0(&v4, "npc_combinedropship");
  sub_1023B8B0("RagdollBoogie.Zap");
  return sub_10021D80(a1);
}
