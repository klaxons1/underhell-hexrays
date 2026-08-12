int __usercall sub_102F2C20@<eax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  sub_10021D80(a1);
  v3 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  sub_1023B8B0("NPC_Advisor.Blast");
  sub_1023B8B0("NPC_Advisor.Gib");
  sub_1023B8B0("NPC_Advisor.Idle");
  sub_1023B8B0("NPC_Advisor.Alert");
  sub_1023B8B0("NPC_Advisor.Die");
  sub_1023B8B0("NPC_Advisor.Pain");
  sub_1023B8B0("NPC_Advisor.ObjectChargeUp");
  sub_101543E0((int)"Advisor_Psychic_Beam");
  sub_101543E0((int)"advisor_object_charge");
  return sub_100E8220(a2, "sprites/greenglow1.vmt");
}
