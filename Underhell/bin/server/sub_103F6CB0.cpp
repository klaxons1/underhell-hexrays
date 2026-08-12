char *__usercall sub_103F6CB0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  sub_10260680("crossbow_bolt", 0);
  sub_1023B8B0("Weapon_Crossbow.BoltHitBody");
  sub_1023B8B0("Weapon_Crossbow.BoltHitWorld");
  sub_1023B8B0("Weapon_Crossbow.BoltSkewer");
  sub_100E8220(a2, "sprites/light_glow02_noz.vmt");
  sub_100E8220(a2, "sprites/blueflare1.vmt");
  return sub_100D3140(a1);
}
