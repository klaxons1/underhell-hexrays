void __thiscall sub_1024E100(int this)
{
  int v2; // eax
  int v3[3]; // [esp+8h] [ebp-24h] BYREF
  int v4; // [esp+14h] [ebp-18h] BYREF
  float v5; // [esp+18h] [ebp-14h]
  float v6; // [esp+1Ch] [ebp-10h]
  int v7; // [esp+20h] [ebp-Ch] BYREF
  float v8; // [esp+24h] [ebp-8h]
  float v9; // [esp+28h] [ebp-4h]

  sub_100DF330((float *)this);
  if ( (*(_BYTE *)(this + 236) & 4) != 0 )
  {
    v2 = *(_DWORD *)(this + 252);
    *(float *)&v7 = 4.0;
    v8 = 4.0;
    v9 = 4.0;
    *(float *)&v4 = -4.0;
    v5 = -4.0;
    v6 = -4.0;
    if ( (v2 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BB20(this + 580, (int)&v4, (int)&v7, 255, 0, 255, 0, 0.0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(int *)(this + 804);
    v5 = 0.0;
    v6 = 0.0;
    sub_10421B40(&v4, this + 500, v3);
    *(float *)&v4 = 4.0;
    v5 = 4.0;
    v6 = 4.0;
    *(float *)&v7 = -4.0;
    v8 = -4.0;
    v9 = -4.0;
    sub_1011BB20((int)v3, (int)&v7, (int)&v4, 255, 0, 255, 0, 0.0);
  }
}
