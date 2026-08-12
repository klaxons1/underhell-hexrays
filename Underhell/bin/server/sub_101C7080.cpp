void __thiscall sub_101C7080(int this)
{
  int v2; // edi
  __int16 v3; // ax
  int v4; // eax
  float v5; // edx
  float v6; // eax
  float v7[2]; // [esp+10h] [ebp-Ch] BYREF
  float v8; // [esp+18h] [ebp-4h]

  v2 = sub_100E87E0((_BYTE *)this);
  sub_101C6CC0((float *)this);
  v3 = sub_100E87E0((_BYTE *)this);
  if ( *(_DWORD *)(this + 308) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != *(_DWORD *)(this + 308) >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1] )
  {
    if ( (v3 & 0x4030) != 0 )
    {
      if ( !v2 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 572))(this);
        sub_1023C380((int)"BaseEntity.EnterWater", 0.0, 0);
        v4 = *(_DWORD *)(this + 252);
        if ( (v4 & 0x20000000) == 0 )
        {
          if ( (v4 & 0x1000) != 0 )
            sub_100DAFD0(this);
          v5 = *(float *)(this + 476);
          v6 = *(float *)(this + 480);
          v8 = *(float *)(this + 484);
          v7[0] = v5;
          v8 = v8 * 0.5;
          v7[1] = v6;
          sub_100DD660(this, v7);
        }
      }
    }
    else if ( v2 )
    {
      sub_1023C380((int)"BaseEntity.ExitWater", 0.0, 0);
    }
  }
}
