bool __thiscall sub_10028760(int this, int a2)
{
  if ( *(_DWORD *)(this + 2796) )
  {
    if ( !(unsigned __int8)sub_100B0F10(a2) )
      return 0;
  }
  else if ( *(float *)(this + 3584) >= (double)*(float *)(dword_106B31C8 + 12) && a2 <= *(_DWORD *)(this + 3588) )
  {
    return 0;
  }
  return (*(_DWORD *)(this + 248) & 2) == 0 || *(_DWORD *)(this + 2324) == 3;
}
