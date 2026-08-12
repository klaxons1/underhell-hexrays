int __thiscall sub_10255DA0(int this)
{
  int result; // eax
  int v3; // esi
  char Destination[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( (*(_BYTE *)(this + 356) & 8) != 0 )
      sub_104299C0(Destination, "State: Enabled", 0xFFu);
    else
      sub_104299C0(Destination, "State: Disabled", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
