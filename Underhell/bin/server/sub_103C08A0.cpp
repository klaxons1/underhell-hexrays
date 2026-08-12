int __thiscall sub_103C08A0(int this)
{
  if ( !*(_BYTE *)(this + 3735) )
    return 0;
  if ( *(_BYTE *)(this + 3964) || (*(_DWORD *)(this + 248) & 0x200) != 0 )
    return 2;
  return 9;
}
