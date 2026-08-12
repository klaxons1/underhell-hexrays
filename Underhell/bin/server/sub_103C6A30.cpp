void __thiscall sub_103C6A30(int this)
{
  int v2; // edx
  double v3; // st7
  double v4; // st7
  double v5; // st7
  int v6[3]; // [esp+Ch] [ebp-24h] BYREF
  int v7[3]; // [esp+18h] [ebp-18h] BYREF
  float v8; // [esp+24h] [ebp-Ch] BYREF
  float v9; // [esp+28h] [ebp-8h]
  float v10; // [esp+2Ch] [ebp-4h]

  if ( !*(_BYTE *)(this + 3692) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( 0.0 == *(float *)(this + 484) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( fabs(*(float *)(this + 588) - *(float *)(this + 3708)) > 1.0 && sub_10262560(*(_DWORD *)(this + 24)) )
      {
        if ( *(float *)(this + 3696) <= (double)*(float *)(dword_106B31C8 + 12) )
        {
          sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Ping", 0.0, 0);
          *(float *)(this + 3696) = *(float *)(dword_106B31C8 + 12) + 1.0;
        }
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v2 = *(_DWORD *)(this + 252) >> 11;
        *(float *)v6 = *(float *)(this + 580) + *(float *)(this + 3712);
        *(float *)&v6[1] = *(float *)(this + 3716) + *(float *)(this + 584);
        *(float *)&v6[2] = *(float *)(this + 3720) + *(float *)(this + 588);
        if ( (v2 & 1) != 0 )
          sub_100DAE60(this);
        v8 = *(float *)(this + 704);
        v3 = *(float *)(this + 708);
        v10 = *(float *)(this + 712);
        v9 = v3 + 30.0;
        sub_104222B0(&v8, v7, 0, 0);
        sub_103C68A0((float *)this, (float *)v6, (float *)v7, 1, 30, 0.1);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v8 = *(float *)(this + 704);
        v4 = *(float *)(this + 708);
        v10 = *(float *)(this + 712);
        v9 = v4 - 30.0;
        sub_104222B0(&v8, v7, 0, 0);
        sub_103C68A0((float *)this, (float *)v6, (float *)v7, 1, 30, 0.1);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v8 = *(float *)(this + 704);
        v5 = *(float *)(this + 708);
        v9 = *(float *)(this + 708);
        v10 = *(float *)(this + 712);
        v9 = v5 + sin(*(float *)(dword_106B31C8 + 12) * 3.0) * 30.0;
        sub_104222B0(&v8, v7, 0, 0);
        sub_103C68A0((float *)this, (float *)v6, (float *)v7, 1, 30, 0.30000001);
      }
    }
  }
}
