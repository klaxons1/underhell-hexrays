int __thiscall sub_103AD570(_DWORD *this)
{
  int result; // eax
  int i; // esi
  int v4; // ecx

  sub_100E8220((int)this, "models/stalker.mdl");
  sub_100E8220((int)this, "sprites/laser.vmt");
  sub_100E8220((int)this, "sprites/redglow1.vmt");
  sub_100E8220((int)this, "sprites/orangeglow1.vmt");
  sub_100E8220((int)this, "sprites/yellowglow1.vmt");
  sub_1023B8B0("NPC_Stalker.BurnFlesh");
  sub_1023B8B0("NPC_Stalker.BurnWall");
  sub_1023B8B0("NPC_Stalker.FootstepLeft");
  sub_1023B8B0("NPC_Stalker.FootstepRight");
  sub_1023B8B0("NPC_Stalker.Hit");
  sub_1023B8B0("NPC_Stalker.Ambient01");
  sub_1023B8B0("NPC_Stalker.Scream");
  sub_1023B8B0("NPC_Stalker.Pain");
  sub_1023B8B0("NPC_Stalker.Die");
  result = sub_10021D80((int)this);
  for ( i = 0; i < this[910]; ++i )
  {
    v4 = *(_DWORD *)(this[907] + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 68))(v4);
  }
  return result;
}
