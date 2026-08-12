void __thiscall sub_101B2DA0(int this)
{
  int v2; // eax
  int v3; // [esp+10h] [ebp-18h] BYREF
  float v4; // [esp+14h] [ebp-14h]
  float v5; // [esp+18h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-Ch] BYREF
  float v7; // [esp+20h] [ebp-8h]
  float v8; // [esp+24h] [ebp-4h]

  if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
  {
    v2 = *(_DWORD *)(this + 252);
    *(float *)&v6 = 8.0;
    v7 = 8.0;
    v8 = 8.0;
    *(float *)&v3 = -8.0;
    v4 = -8.0;
    v5 = -8.0;
    if ( (v2 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BB20(this + 580, (int)&v3, (int)&v6, 0, 255, 0, 0, 0.0);
    *(float *)&v3 = 4.0;
    v4 = 4.0;
    v5 = 4.0;
    *(float *)&v6 = -4.0;
    v7 = -4.0;
    v8 = -4.0;
    sub_1011BB20(this + 864, (int)&v6, (int)&v3, 0, 0, 255, 0, 0.0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BC50((float *)(this + 580), (float *)(this + 864), 255, 255, 0, 0, 0.0);
    if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
      sub_101B0600(*(_DWORD *)(this + 800), this);
  }
  sub_100DF330((float *)this);
}
