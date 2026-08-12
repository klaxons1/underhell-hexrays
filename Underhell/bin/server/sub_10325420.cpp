int __thiscall sub_10325420(int this, float a2)
{
  int v3; // eax
  int (__thiscall *v4)(int); // eax
  float *v5; // edi
  float *v6; // eax
  double v7; // st7

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  *(_DWORD *)(v3 + 252) |= 0x100000u;
  if ( !*(_BYTE *)(this + 3692) && a2 + 100.0 > *(float *)(this + 3668) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Barnacle.Scream", 0.0, 0);
    *(_BYTE *)(this + 3692) = 1;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( *(float *)(this + 588) - *(float *)(this + 3716) >= a2 )
    return sub_10325150(this, 1);
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
  *(_BYTE *)(this + 3676) = 0;
  v5 = (float *)v4(this);
  v6 = (float *)sub_10022D70();
  *v6 = v5[85] - v5[82];
  v6[1] = v5[86] - v5[83];
  v7 = v5[87] - v5[84];
  v6[2] = v7;
  if ( v7 >= 40.0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E50A0);
  else
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106E5088);
}
