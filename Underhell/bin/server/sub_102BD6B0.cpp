int __thiscall sub_102BD6B0(int this, int a2)
{
  int result; // eax

  if ( *(_BYTE *)(this + 1120) && *(_BYTE *)(this + 1283) )
  {
    result = *(_DWORD *)(this + 248) >> 15;
    if ( (*(_DWORD *)(this + 248) & 0x8000) != 0 )
      return sub_102BC5C0(this, 0.0099999998);
  }
  return result;
}
