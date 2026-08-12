char __thiscall sub_10178C90(int this, char *String1, char *String)
{
  float v4; // eax
  float v6[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( String1 != "pitch" && _stricmp(String1, "pitch") )
    return sub_100D7750((_DWORD *)this, String1, String);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 712);
  v6[1] = *(float *)(this + 708);
  v6[2] = v4;
  v6[0] = atof(String);
  sub_100E0EA0(this, v6);
  return 1;
}
