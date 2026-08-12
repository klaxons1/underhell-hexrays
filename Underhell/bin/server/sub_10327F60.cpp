int __usercall sub_10327F60@<eax>(int a1@<ecx>, int a2@<edi>)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2360))(a1);
  sub_10393D20(a1);
  sub_1023B8B0("NPC_Barney.FootstepLeft");
  sub_1023B8B0("NPC_Barney.FootstepRight");
  sub_1023B8B0("NPC_Barney.Die");
  sub_10223EB0(a2, (int)"scenes/Expressions/BarneyIdle.vcd");
  sub_10223EB0(a2, (int)"scenes/Expressions/BarneyAlert.vcd");
  return sub_10223EB0(a2, (int)"scenes/Expressions/BarneyCombat.vcd");
}
