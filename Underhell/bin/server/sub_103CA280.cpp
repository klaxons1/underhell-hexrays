int __thiscall sub_103CA280(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int result; // eax
  bool v12; // zf

  v3 = *(_DWORD *)(this + 5704);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 5704) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_103CA030(v6);
        *(_DWORD *)(this + 5704) = -1;
      }
    }
  }
  v7 = *(_DWORD *)(this + 5708);
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 5708) & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 5708) & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 5708) & 0xFFF) + 2] == v9 )
          v10 = *v8;
        else
          v10 = 0;
        sub_103CA030(v10);
        *(_DWORD *)(this + 5708) = -1;
      }
    }
  }
  result = a2;
  if ( !a2 || a2 == -1 )
  {
    v12 = *(_BYTE *)(this + 5844) == 0;
    *(float *)(this + 5688) = 0.0;
    if ( !v12 )
    {
      sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartHealLoop");
      sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.StartShootLoop");
      sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.SuitCharge");
      result = sub_1023B860((_DWORD *)this, (int)"NPC_Vortigaunt.ZapPowerup");
      *(_BYTE *)(this + 5844) = 0;
    }
  }
  return result;
}
