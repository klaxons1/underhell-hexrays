void __thiscall sub_100F82D0(int this)
{
  int v2; // edi
  __int16 v3; // ax
  float v4; // ecx
  float v5; // edx
  float v6[2]; // [esp+10h] [ebp-Ch] BYREF
  float v7; // [esp+18h] [ebp-4h]

  v2 = sub_1000E280((_BYTE *)this);
  sub_100F7640(this);
  v3 = sub_1000E280((_BYTE *)this);
  if ( *(_DWORD *)(this + 324) == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) != *(_DWORD *)(this + 324) >> 12
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1) )
  {
    if ( (v3 & 0x4030) != 0 )
    {
      if ( !v2 )
      {
        sub_101212D0((int)"BaseEntity.EnterWater", 0.0, 0);
        if ( (*(_DWORD *)(this + 312) & 0x20000000) == 0 )
        {
          sub_10038150(this);
          v4 = *(float *)(this + 244);
          v5 = *(float *)(this + 248);
          v7 = *(float *)(this + 252);
          v6[0] = v4;
          v7 = v7 * 0.5;
          v6[1] = v5;
          sub_100399E0(this, v6);
        }
      }
    }
    else if ( v2 )
    {
      sub_101212D0((int)"BaseEntity.ExitWater", 0.0, 0);
    }
  }
}
