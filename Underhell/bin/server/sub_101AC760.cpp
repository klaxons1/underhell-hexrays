int __thiscall sub_101AC760(int this)
{
  int result; // eax
  int v3; // esi
  char Destination[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(_DWORD *)(this + 212) )
      sub_10429A00(Destination, 0xFFu, "Target: %s", *(_DWORD *)(this + 212));
    else
      sub_104299C0(Destination, "Target:   -  ", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
