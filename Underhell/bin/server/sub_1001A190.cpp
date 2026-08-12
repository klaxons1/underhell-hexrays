void __thiscall sub_1001A190(float *this)
{
  int v2; // eax
  float *v3; // eax
  int v4; // eax
  float v5; // edx
  double v6; // st6
  double v7; // st7
  char v8[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 916);
  if ( (v2 & 2) == 0 )
  {
    *((_DWORD *)this + 916) = v2 | 2;
    if ( !(unsigned __int8)sub_10023D10(1)
      || !(unsigned __int8)sub_100BF1B0("eyes", (int)(this + 917), (int)(this + 923), 0, 0) )
    {
      v3 = (float *)sub_10021150(v8);
      this[917] = *v3;
      this[918] = v3[1];
      this[919] = v3[2];
      sub_10422220(this + 182, this + 923);
    }
    *((_DWORD *)this + 916) &= ~1u;
  }
  v4 = *((_DWORD *)this + 916);
  if ( (v4 & 1) == 0 )
  {
    v5 = *this;
    *((_DWORD *)this + 916) = v4 | 1;
    if ( ((*(int (__thiscall **)(float *))(LODWORD(v5) + 1672))(this) & 0x800000) != 0 )
    {
      v6 = this[382] - this[918];
      v7 = this[383] - this[919];
      this[920] = this[381] - this[917];
      this[921] = v6;
      this[922] = v7;
      off_10689714();
    }
    else
    {
      this[920] = this[923];
      this[921] = this[924];
      this[922] = this[925];
    }
  }
}
