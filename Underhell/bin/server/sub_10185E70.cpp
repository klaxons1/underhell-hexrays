char __thiscall sub_10185E70(int this, int a2)
{
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF
  int savedregs; // [esp+1Ch] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( sub_1002FEE0((int)&savedregs, v4, (float *)(this + 580), a2, *(float *)(this + 932), 0) )
  {
    sub_100E0D20(a2, v4);
    return 1;
  }
  else
  {
    DevMsg("**Failed to place NPC in radius!\n");
    return 0;
  }
}
