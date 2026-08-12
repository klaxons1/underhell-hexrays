int __thiscall sub_103C7750(int this)
{
  int result; // eax

  if ( *(_BYTE *)(this + 5844) )
  {
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartHealLoop");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartShootLoop");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.SuitCharge");
    result = sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.ZapPowerup");
    *(_BYTE *)(this + 5844) = 0;
  }
  return result;
}
