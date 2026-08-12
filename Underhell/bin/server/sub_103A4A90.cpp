int __usercall sub_103A4A90@<eax>(int a1@<ecx>, int a2@<edi>)
{
  if ( *(_BYTE *)(a1 + 3968) )
  {
    sub_100E8220(a2, "models/shield_scanner.mdl");
    sub_100E8220(a2, "models/gibs/Shield_Scanner_Gib1.mdl");
    sub_100E8220(a2, "models/gibs/Shield_Scanner_Gib2.mdl");
    sub_100E8220(a2, "models/gibs/Shield_Scanner_Gib3.mdl");
    sub_100E8220(a2, "models/gibs/Shield_Scanner_Gib4.mdl");
    sub_100E8220(a2, "models/gibs/Shield_Scanner_Gib5.mdl");
    sub_100E8220(a2, "models/gibs/Shield_Scanner_Gib6.mdl");
    sub_1023B8B0("NPC_SScanner.Shoot");
    sub_1023B8B0("NPC_SScanner.Alert");
    sub_1023B8B0("NPC_SScanner.Die");
    sub_1023B8B0("NPC_SScanner.Combat");
    sub_1023B8B0("NPC_SScanner.Idle");
    sub_1023B8B0("NPC_SScanner.Pain");
    sub_1023B8B0("NPC_SScanner.TakePhoto");
    sub_1023B8B0("NPC_SScanner.AttackFlash");
    sub_1023B8B0("NPC_SScanner.DiveBombFlyby");
    sub_1023B8B0("NPC_SScanner.DiveBomb");
    sub_1023B8B0("NPC_SScanner.DeployMine");
    sub_1023B8B0("NPC_SScanner.FlyLoop");
    sub_10260680("combine_mine", 0);
  }
  else
  {
    sub_100E8220(a2, "models/combine_scanner.mdl");
    sub_100E8220(a2, "models/gibs/scanner_gib01.mdl");
    sub_100E8220(a2, "models/gibs/scanner_gib02.mdl");
    sub_100E8220(a2, "models/gibs/scanner_gib02.mdl");
    sub_100E8220(a2, "models/gibs/scanner_gib04.mdl");
    sub_100E8220(a2, "models/gibs/scanner_gib05.mdl");
    sub_1023B8B0("NPC_CScanner.Shoot");
    sub_1023B8B0("NPC_CScanner.Alert");
    sub_1023B8B0("NPC_CScanner.Die");
    sub_1023B8B0("NPC_CScanner.Combat");
    sub_1023B8B0("NPC_CScanner.Idle");
    sub_1023B8B0("NPC_CScanner.Pain");
    sub_1023B8B0("NPC_CScanner.TakePhoto");
    sub_1023B8B0("NPC_CScanner.AttackFlash");
    sub_1023B8B0("NPC_CScanner.DiveBombFlyby");
    sub_1023B8B0("NPC_CScanner.DiveBomb");
    sub_1023B8B0("NPC_CScanner.DeployMine");
    sub_1023B8B0("NPC_CScanner.FlyLoop");
  }
  *(_DWORD *)(a1 + 3964) = sub_100E8220(a2, "sprites/light_glow03.vmt");
  sub_100E8220(a2, "sprites/glow_test02.vmt");
  return sub_10021D80(a1);
}
