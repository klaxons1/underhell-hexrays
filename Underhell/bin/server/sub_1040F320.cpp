void __thiscall sub_1040F320(int this, int a2)
{
  int v3; // edx
  _BYTE v4[84]; // [esp+8h] [ebp-60h] BYREF
  float v5[3]; // [esp+5Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  if ( *(char **)(a2 + 92) != "grenade_homer"
    && !sub_100D6240((_DWORD *)a2, "grenade_homer")
    && *(_BYTE *)(a2 + 361)
    && (*(_BYTE *)(a2 + 356) & 4) == 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(_DWORD *)(this + 252) >> 11;
    v5[0] = *(float *)(this + 580) + *(float *)(this + 476);
    v5[1] = *(float *)(this + 584) + *(float *)(this + 480);
    v5[2] = *(float *)(this + 588) + *(float *)(this + 484);
    if ( (v3 & 1) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v5, 16395, this, 0, (int)v4);
    if ( (v4[66] & 4) != 0 )
    {
      sub_1040F290((_DWORD *)this);
      sub_1025FAC0(this);
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1152))(this);
    }
  }
}
