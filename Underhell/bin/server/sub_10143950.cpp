int __thiscall sub_10143950(int this)
{
  int result; // eax
  int v3; // esi
  const char *v4; // eax
  int v5; // esi
  char v6; // bh
  char v7; // bh
  char Buffer[512]; // [esp+20h] [ebp-204h] BYREF
  int v9; // [esp+220h] [ebp-4h]

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = "On";
    if ( !*(_BYTE *)(this + 864) )
      v4 = "Off";
    sub_10429A00(Buffer, 0x200u, "State: %s", (char)v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v5 = v3 + 1;
    sub_10429A00(Buffer, 0x200u, "Start: %3.0f", *(_DWORD *)(this + 832));
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    sub_10429A00(Buffer, 0x200u, "End  : %3.0f", *(_DWORD *)(this + 836));
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    v9 = *(_DWORD *)(this + 816);
    v6 = BYTE1(v9);
    sub_10429A00(Buffer, 0x200u, "1) Red  : %i", v9);
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    sub_10429A00(Buffer, 0x200u, "1) Green: %i", v6);
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    sub_10429A00(Buffer, 0x200u, "1) Blue : %i", SBYTE2(v9));
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    v9 = *(_DWORD *)(this + 820);
    v7 = BYTE1(v9);
    sub_10429A00(Buffer, 0x200u, "2) Red  : %i", v9);
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    sub_10429A00(Buffer, 0x200u, "2) Green: %i", v7);
    sub_100D5DE0((_DWORD *)this, v5++, (int)Buffer, 0.0, 255, 255, 255, 255);
    sub_10429A00(Buffer, 0x200u, "2) Blue : %i", SBYTE2(v9));
    sub_100D5DE0((_DWORD *)this, v5, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v5 + 1;
  }
  return result;
}
