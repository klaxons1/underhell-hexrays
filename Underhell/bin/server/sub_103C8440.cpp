int __usercall sub_103C8440@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  char String1[260]; // [esp+4h] [ebp-108h] BYREF
  _BYTE v6[4]; // [esp+108h] [ebp-4h] BYREF

  sub_10260680("vort_charge_token", 0);
  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 28))(a1, v6);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  a1[1421] = sub_100E8220(a2, "sprites/lgtning.vmt");
  sub_100E8220(a2, "sprites/vortring1.vmt");
  if ( *(_DWORD *)(dword_10698344 + 48) && sub_101534B0(String1, 0x104u) && !_stricmp(String1, "ep2") )
    sub_10154360((int)"effects/rollerglow");
  sub_1023B8B0("NPC_Vortigaunt.SuitOn");
  sub_1023B8B0("NPC_Vortigaunt.SuitCharge");
  sub_1023B8B0("NPC_Vortigaunt.ZapPowerup");
  sub_1023B8B0("NPC_Vortigaunt.ClawBeam");
  sub_1023B8B0("NPC_Vortigaunt.StartHealLoop");
  sub_1023B8B0("NPC_Vortigaunt.Swing");
  sub_1023B8B0("NPC_Vortigaunt.StartShootLoop");
  sub_1023B8B0("NPC_Vortigaunt.FootstepLeft");
  sub_1023B8B0("NPC_Vortigaunt.FootstepRight");
  sub_1023B8B0("NPC_Vortigaunt.DispelStart");
  sub_1023B8B0("NPC_Vortigaunt.DispelImpact");
  sub_1023B8B0("NPC_Vortigaunt.Explode");
  sub_101543E0((int)"vortigaunt_beam");
  sub_101543E0((int)"vortigaunt_beam_charge");
  sub_101543E0((int)"vortigaunt_hand_glow");
  sub_10154360((int)"sprites/light_glow02_add");
  return sub_10393D20(a1, a2);
}
