int __usercall sub_10393D20@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  dword_106EA244 = (char *)*sub_10162BE0(&v5, "func_tankmortar");
  dword_106EA240 = *sub_10162BE0(&v5, "npc_turret_floor");
  dword_106EA23C = *sub_10162BE0(&v5, "npc_turret_ground");
  dword_106EA238 = *sub_10162BE0(&v5, "weapon_shotgun");
  dword_106EA234 = *sub_10162BE0(&v5, "npc_rollermine");
  v3 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*a1 + 28))(a1, &v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  sub_100E8220(a2, "models/props_junk/flare.mdl");
  return sub_1001B170(a1);
}
