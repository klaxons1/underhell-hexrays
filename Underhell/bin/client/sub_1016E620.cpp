int __thiscall sub_1016E620(int this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // edx

  if ( a2 <= 0 || a2 > *((_DWORD *)off_103DC81C + 5) )
    return Warning("Bad client in KillAttachedTents()!\n");
  for ( result = *(unsigned __int16 *)(this + 64);
        result != 0xFFFF;
        result = *(unsigned __int16 *)(v3 + *(_DWORD *)(this + 52) + 6) )
  {
    v3 = 8 * (unsigned __int16)result;
    v4 = *(_DWORD *)(v3 + *(_DWORD *)(this + 52));
    if ( (*(_DWORD *)(v4 + 1980) & 0x8000) != 0 && *(__int16 *)(v4 + 2016) == a2 )
      *(float *)(v4 + 1984) = *((float *)off_103DC81C + 3);
  }
  return result;
}
