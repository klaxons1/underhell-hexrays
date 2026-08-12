int __usercall sub_103696E0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2360))(a1);
  sub_10393D20(a1);
  sub_1023B8B0("NPC_Fisherman.FootstepLeft");
  sub_1023B8B0("NPC_Fisherman.FootstepRight");
  sub_1023B8B0("NPC_Fisherman.Die");
  sub_10223EB0(a2, (int)"scenes/Expressions/FishermanIdle.vcd");
  sub_10223EB0(a2, (int)"scenes/Expressions/FishermanAlert.vcd");
  return sub_10223EB0(a2, (int)"scenes/Expressions/FishermanCombat.vcd");
}
