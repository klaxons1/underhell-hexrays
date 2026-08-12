void __thiscall sub_103C39D0(int this)
{
  int v2; // eax
  float v3; // [esp+4h] [ebp-Ch]
  float v4; // [esp+4h] [ebp-Ch]

  sub_10025DD0((_DWORD *)this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2272))(this) || !*(_BYTE *)(this + 3735) )
  {
    v2 = *(_DWORD *)(this + 248);
    if ( (v2 & 0x200) != 0 )
    {
      if ( (v2 & 0x100) == 0 || *(_BYTE *)(this + 3734) )
      {
        if ( !*(_BYTE *)(this + 3734) )
          sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.AlarmPing", 0.0, 0);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 2268))(this, 5);
        v3 = *(float *)(dword_106B31C8 + 12) + 0.25;
        sub_100EC4A0((int *)this, v3, 0);
      }
    }
    else
    {
      v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
      sub_100EC4A0((int *)this, v4, 0);
    }
  }
  else
  {
    sub_103C2C50((int *)this);
  }
}
