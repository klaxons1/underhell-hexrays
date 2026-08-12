int *__usercall sub_102F3650@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  int *result; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  sub_10393D20();
  sub_1023B8B0("npc_alyx.die");
  v3 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 28))(a1, &v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  sub_100E8220(a2, "models/alyx_emptool_prop.mdl");
  sub_1023B8B0("DoSpark");
  sub_1023B8B0("npc_alyx.starthacking");
  sub_1023B8B0("npc_alyx.donehacking");
  sub_1023B8B0("npc_alyx.readytohack");
  sub_1023B8B0("npc_alyx.interruptedhacking");
  sub_1023B8B0("ep_01.al_dark_breathing01");
  sub_1023B8B0("Weapon_CombineGuard.Special1");
  sub_10260680("env_alyxemp", 0);
  dword_106E2788 = *sub_10162BE0(&v5, "weapon_alyxgun");
  dword_106E2784 = *sub_10162BE0(&v5, "weapon_smg1");
  dword_106E2780 = *sub_10162BE0(&v5, "weapon_shotgun");
  result = sub_10162BE0(&v5, "weapon_ar2");
  dword_106E277C = *result;
  return result;
}
