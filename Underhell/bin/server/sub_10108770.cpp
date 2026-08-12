int __thiscall sub_10108770(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 800);
  if ( v1 != 2 && v1 != 3 )
  {
    if ( v1 )
      return 1;
    if ( (*(_BYTE *)(this + 928) || (*(_DWORD *)(this + 248) & 0x20) != 0)
      && (*(_DWORD *)(this + 248) & 0x20) != 0
      && !*(_BYTE *)(this + 928) )
    {
      return 2;
    }
  }
  return 0;
}
