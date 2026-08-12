int __usercall sub_101E25F0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax

  sub_100CAEC0((_DWORD *)a1);
  sub_100E8220(a2, "models/weapons/v_flare_pg.mdl");
  sub_100E8220(a2, "models/weapons/v_grenade.mdl");
  sub_100E8220(a2, "models/weapons/v_flashlight_pg.mdl");
  sub_100E8220(a2, "models/weapons/v_kick_jake_casual.mdl");
  sub_100E8220(a2, "models/weapons/v_kick_jake_inmate.mdl");
  sub_100E8220(a2, "models/weapons/v_kick_jake_pmc.mdl");
  sub_100E8220(a2, "models/weapons/v_kick_jake_guard.mdl");
  sub_1023B8B0("Player.FallGib");
  sub_1023B8B0("Player.Death");
  sub_1023B8B0("Player.Pain");
  sub_1023B8B0("Player.Gear");
  sub_1023B8B0("Player.PlasmaDamage");
  sub_1023B8B0("Player.SonicDamage");
  sub_1023B8B0("Player.DrownStart");
  sub_1023B8B0("Player.DrownContinue");
  sub_1023B8B0("Player.Wade");
  sub_1023B8B0("Player.AmbientUnderWater");
  sub_1023B8B0("Player.Voice.Jump");
  sub_1023B8B0("Player.Voice.Jump.Exhausted");
  sub_1023B8B0("Player.Voice.Kick");
  sub_1023B8B0("Player.Voice.Kick.Exhausted");
  sub_1023B8B0("Player.Voice.Melee");
  sub_1023B8B0("Player.Voice.Melee.Exhausted");
  sub_1023B8B0("Player.bullettimestart");
  sub_1023B8B0("Player.bullettimeloop");
  sub_1023B8B0("Player.bullettimeend");
  sub_1023B8B0("Player.GasMaskOn");
  sub_1023B8B0("Player.GasMaskOff");
  sub_1023B8B0("GasMask.Breath.Normal");
  sub_1023B8B0("Player.nvon");
  sub_1023B8B0("Player.nvoff");
  sub_1023B8B0("HL2Player.kick_wall");
  sub_1023B8B0("HL2Player.kick_body");
  sub_1023B8B0("HL2Player.kick_fire_fly");
  sub_1023B8B0("HL2Player.kick_fire");
  sub_1023B8B0("HL2Player.UseDeny");
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31E8 + 72))(dword_106B31E8, "HEV");
  sub_101543E0((int)"slime_splash_01");
  sub_101543E0((int)"slime_splash_02");
  result = sub_101543E0((int)"slime_splash_03");
  *(float *)(a1 + 3948) = 1000.0;
  *(_DWORD *)(a1 + 3956) = 1000;
  *(_DWORD *)(a1 + 3968) = -1;
  *(_DWORD *)(a1 + 3964) = 5;
  if ( byte_1063C508 )
    *(_BYTE *)(a1 + 3960) = 1;
  return result;
}
