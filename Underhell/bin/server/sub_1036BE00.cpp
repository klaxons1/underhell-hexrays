int __thiscall sub_1036BE00(int this, int a2)
{
  if ( (a2 == 11 || a2 == 6) && (*(_BYTE *)(this + 3681) || (*(_DWORD *)(this + 256) & 0x8000000) != 0) )
    return dword_106E80E8;
  else
    return sub_1002CC40((_DWORD *)this, a2);
}
