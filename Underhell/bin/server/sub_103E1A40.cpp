void __thiscall sub_103E1A40(int this)
{
  int *v2; // ecx

  sub_1023C380((_DWORD *)this, (int)"Airboat_headlight_on", 0.0, 0);
  if ( *(_BYTE *)(this + 1804) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 1804) = 1;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1804);
      *(_BYTE *)(this + 1804) = 1;
    }
  }
}
