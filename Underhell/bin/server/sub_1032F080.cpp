int __usercall sub_1032F080@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  void *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  int result; // eax
  int i; // edi
  int v8; // ecx

  v3 = (void *)(*(int (__thiscall **)(_DWORD *))(*a1 + 2332))(a1);
  sub_10260680(v3, 0);
  sub_1023B8B0("E3_Phystown.Slicer");
  sub_1023B8B0("NPC_BaseZombie.PoundDoor");
  sub_1023B8B0("NPC_BaseZombie.Swat");
  v4 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a1 + 2336))(a1);
  sub_100E8220(a2, v4);
  v5 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a1 + 2340))(a1);
  sub_100E8220(a2, v5);
  sub_101543E0((int)"blood_impact_zombie_01");
  result = sub_10021D80((int)a1);
  for ( i = 0; i < a1[910]; ++i )
  {
    v8 = *(_DWORD *)(a1[907] + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 68))(v8);
  }
  return result;
}
