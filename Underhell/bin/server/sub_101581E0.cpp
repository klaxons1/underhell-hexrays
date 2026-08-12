void __thiscall sub_101581E0(_DWORD *this)
{
  float *v2; // ecx
  float v3; // edx
  float v4; // eax
  int i; // esi
  double v6; // st7
  float v7; // [esp+Ch] [ebp-Ch]
  float v8; // [esp+10h] [ebp-8h]
  float v9; // [esp+14h] [ebp-4h]

  v2 = (float *)this[2];
  v3 = v2[39];
  v7 = v2[38];
  v4 = v2[40];
  v8 = v3;
  v9 = v4;
  for ( i = 0; i < 3; ++i )
  {
    if ( (LODWORD(v2[i + 16]) & 0x7F800000) == 0x7F800000 )
    {
      if ( i )
      {
        if ( i == 1 )
          sub_104299C0(byte_106B35AC, "Y", 0x20u);
        else
          sub_104299C0(byte_106B35AC, "Z", 0x20u);
      }
      else
      {
        sub_104299C0(byte_106B35AC, "X", 0x20u);
      }
      DevMsg(1, "PM  Got a NaN velocity %s\n", byte_106B35AC);
      v2 = (float *)this[2];
      v2[i + 16] = 0.0;
    }
    if ( (*(_DWORD *)(&v7 + i) & 0x7F800000) == 0x7F800000 )
    {
      if ( i )
      {
        if ( i == 1 )
          sub_104299C0(byte_106B35AC, "Y", 0x20u);
        else
          sub_104299C0(byte_106B35AC, "Z", 0x20u);
      }
      else
      {
        sub_104299C0(byte_106B35AC, "X", 0x20u);
      }
      DevMsg(1, "PM  Got a NaN origin on %s\n", byte_106B35AC);
      v2 = (float *)this[2];
      *(&v7 + i) = 0.0;
      v2[38] = v7;
      v2[39] = v8;
      v2[40] = v9;
    }
    if ( *(float *)(dword_106B73D4 + 44) >= (double)v2[i + 16] )
    {
      if ( -*(float *)(dword_106B73D4 + 44) <= v2[i + 16] )
        continue;
      if ( i )
      {
        if ( i == 1 )
          sub_104299C0(byte_106B35AC, "Y", 0x20u);
        else
          sub_104299C0(byte_106B35AC, "Z", 0x20u);
      }
      else
      {
        sub_104299C0(byte_106B35AC, "X", 0x20u);
      }
      DevMsg(1, "PM  Got a velocity too low on %s\n", byte_106B35AC);
      v6 = -*(float *)(dword_106B73D4 + 44);
    }
    else
    {
      if ( i )
      {
        if ( i == 1 )
          sub_104299C0(byte_106B35AC, "Y", 0x20u);
        else
          sub_104299C0(byte_106B35AC, "Z", 0x20u);
      }
      else
      {
        sub_104299C0(byte_106B35AC, "X", 0x20u);
      }
      DevMsg(1, "PM  Got a velocity too high on %s\n", byte_106B35AC);
      v6 = *(float *)(dword_106B73D4 + 44);
    }
    v2 = (float *)this[2];
    v2[i + 16] = v6;
  }
}
