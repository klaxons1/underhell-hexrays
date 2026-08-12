int __thiscall sub_103C9950(int this)
{
  int i; // edi
  int v3; // ecx

  if ( *(_BYTE *)(this + 5844) )
  {
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartHealLoop");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartShootLoop");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.SuitCharge");
    sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.ZapPowerup");
    *(_BYTE *)(this + 5844) = 0;
  }
  sub_103C96D0(this);
  for ( i = 0; i < *(_DWORD *)(this + 3640); ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 76))(v3);
  }
  return sub_10021F20((_DWORD *)this);
}
