void __thiscall sub_103669E0(int this)
{
  int v2; // eax
  float *v3; // edi
  double v4; // st4
  double v5; // st7
  double v6; // st4
  double v7; // st5
  float v8; // [esp+0h] [ebp-10h]
  float v9; // [esp+4h] [ebp-Ch]

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v2 = sub_10261B20();
    v3 = (float *)v2;
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
        sub_100DAE60(v2);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v4 = *(float *)(this + 580) - v3[145];
      v5 = v4 * v4;
      v6 = *(float *)(this + 584) - v3[146];
      v7 = *(float *)(this + 588) - v3[147];
      v9 = v7 * v7 + v6 * v6 + v5;
      v8 = 0.0;
      if ( off_10689708(v9) <= 512.0 )
        sub_1023C380((_DWORD *)this, (int)"NPC_FastZombie.AlertNear", v8, 0);
      else
        sub_1023C380((_DWORD *)this, (int)"NPC_FastZombie.AlertFar", v8, 0);
    }
  }
}
