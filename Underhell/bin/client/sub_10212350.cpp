int __thiscall sub_10212350(int this)
{
  __int64 v1; // kr00_8

  v1 = (1LL << *(_DWORD *)(this + 68)) - 1;
  if ( *(_BYTE *)(this + 72) )
    return ~(_DWORD)v1;
  else
    return ((1LL << (*(_BYTE *)(this + 64) + 1)) - 1) & ~(_DWORD)v1;
}
