void __thiscall sub_103C99D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 5844) )
  {
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartHealLoop");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartShootLoop");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.SuitCharge");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.ZapPowerup");
    *(_BYTE *)(this + 5844) = 0;
  }
  sub_103C96D0(this);
  sub_10097AA0((float *)this, a2);
}
