int __usercall sub_10370C50@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax

  sub_100E8220(a2, "models/hunter.mdl");
  sub_10213890("models/infected/infected_inmate.mdl");
  sub_1023B8B0("NPC_Hunter.Idle");
  sub_1023B8B0("NPC_Hunter.Scan");
  sub_1023B8B0("NPC_Hunter.Alert");
  sub_1023B8B0("NPC_Hunter.Pain");
  sub_1023B8B0("NPC_Hunter.PreCharge");
  sub_1023B8B0("NPC_Hunter.Angry");
  sub_1023B8B0("NPC_Hunter.Death");
  sub_1023B8B0("NPC_Hunter.FireMinigun");
  sub_1023B8B0("NPC_Hunter.Footstep");
  sub_1023B8B0("NPC_Hunter.BackFootstep");
  sub_1023B8B0("NPC_Hunter.FlechetteVolleyWarn");
  sub_1023B8B0("NPC_Hunter.FlechetteShoot");
  sub_1023B8B0("NPC_Hunter.FlechetteShootLoop");
  sub_1023B8B0("NPC_Hunter.FlankAnnounce");
  sub_1023B8B0("NPC_Hunter.MeleeAnnounce");
  sub_1023B8B0("NPC_Hunter.MeleeHit");
  sub_1023B8B0("NPC_Hunter.TackleAnnounce");
  sub_1023B8B0("NPC_Hunter.TackleHit");
  sub_1023B8B0("NPC_Hunter.ChargeHitEnemy");
  sub_1023B8B0("NPC_Hunter.ChargeHitWorld");
  sub_1023B8B0("NPC_Hunter.FoundEnemy");
  sub_1023B8B0("NPC_Hunter.FoundEnemyAck");
  sub_1023B8B0("NPC_Hunter.DefendStrider");
  sub_1023B8B0("NPC_Hunter.HitByVehicle");
  sub_101543E0((int)"hunter_muzzle_flash");
  sub_101543E0((int)"blood_impact_synth_01");
  sub_101543E0((int)"blood_impact_synth_01_arc_parent");
  sub_101543E0((int)"blood_spurt_synth_01");
  sub_101543E0((int)"blood_drip_synth_01");
  sub_10223EB0(a2, (int)"scenes/npc/hunter/hunter_scan.vcd");
  sub_10223EB0(a2, (int)"scenes/npc/hunter/hunter_eyeclose.vcd");
  sub_10223EB0(a2, (int)"scenes/npc/hunter/hunter_roar.vcd");
  sub_10223EB0(a2, (int)"scenes/npc/hunter/hunter_pain.vcd");
  sub_10223EB0(a2, (int)"scenes/npc/hunter/hunter_eyedarts_top.vcd");
  sub_10223EB0(a2, (int)"scenes/npc/hunter/hunter_eyedarts_bottom.vcd");
  sub_10154360((int)"effects/water_highlight");
  sub_10260680("hunter_flechette", 0);
  sub_10260680("sparktrail", 0);
  *(_BYTE *)(a1 + 4597) = 0;
  v3 = *(const char **)(dword_106B31C8 + 60);
  if ( !v3 )
    v3 = String;
  if ( !sub_104292D0(v3, "ep2_outland_12", 14) )
    *(_BYTE *)(a1 + 4597) = 1;
  return sub_1001B170((_DWORD *)a1);
}
