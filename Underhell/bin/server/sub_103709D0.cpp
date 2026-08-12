int __thiscall sub_103709D0(int this)
{
  int result; // eax
  int v3; // edi
  float v4; // [esp+10h] [ebp-10h]
  float v5; // [esp+14h] [ebp-Ch]
  float v6; // [esp+18h] [ebp-8h]
  float v7; // [esp+1Ch] [ebp-4h]

  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    result = sub_10261B20();
    v3 = result;
    if ( result )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v6 = *(float *)(this + 484);
      v4 = *(float *)(this + 476);
      v5 = *(float *)(this + 480);
      off_10689714();
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v7 = *(float *)(this + 584) * v5 + *(float *)(this + 580) * v4 + *(float *)(this + 588) * v6;
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      if ( *(float *)(v3 + 584) * v5 + *(float *)(v3 + 580) * v4 + *(float *)(v3 + 588) * v6 > v7 )
      {
        return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
      else
      {
        sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.FlechetteNearMiss", 0.0, 0);
        return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
      }
    }
  }
  return result;
}
