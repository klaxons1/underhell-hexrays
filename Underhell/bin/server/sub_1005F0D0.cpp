int __thiscall sub_1005F0D0(int this)
{
  sub_1004D2E0((_DWORD *)this);
  *(_DWORD *)(this + 856) = 0;
  *(_BYTE *)(this + 862) = 0;
  *(_DWORD *)this = &CAI_StandoffGoal::`vftable';
  *(_DWORD *)(this + 800) = &CAI_StandoffGoal::`vftable';
  *(_DWORD *)(this + 852) = 2;
  *(_WORD *)(this + 860) = 1;
  qmemcpy((void *)(this + 864), &unk_10605700, 0x24u);
  return this;
}
