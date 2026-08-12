bool __thiscall sub_100358B0(int this)
{
  if ( *(_BYTE *)(this + 112) == 10 )
    return 0;
  return *(_DWORD *)(this + 88) && (*(_DWORD *)(this + 108) & 0x20) == 0 && *(_DWORD *)(this + 76);
}
