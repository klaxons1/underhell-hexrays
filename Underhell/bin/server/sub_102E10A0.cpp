void __thiscall sub_102E10A0(int this)
{
  int v2; // [esp+Ch] [ebp-18h]
  int v3; // [esp+10h] [ebp-14h]
  int v4; // [esp+14h] [ebp-10h]
  char v5; // [esp+23h] [ebp-1h] BYREF

  if ( !*(_BYTE *)(this + 5064) && (!sub_102DA6D0() || sub_102DF000(this, (int)dword_10665E5C)) )
  {
    if ( *(_BYTE *)(this + 2329) )
    {
      v5 = 1;
      sub_102E02B0((_BYTE *)(this + 5061), &v5);
      sub_100EAB80((_DWORD *)this, 4);
      sub_1023C380((_DWORD *)this, (int)"HL2Player.FlashLightOn", 0.0, 0);
      *(float *)&v2 = *(float *)(this + 5084) * 0.0099999998;
      sub_102DCFA0((_DWORD *)this, "OnFlashlightOn", v2, v3, v4, -1, 1, this, this);
    }
  }
}
