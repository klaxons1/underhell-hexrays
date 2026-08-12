bool __thiscall sub_100428A0(int this, int a2, int a3)
{
  _BYTE *v3; // eax
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(this + 2812) )
  {
    v3 = *(_BYTE **)(this + 2808);
    if ( v3 )
    {
      if ( *v3 && (!a3 || *(_BYTE **)(a3 + 824) != v3) )
        return 1;
    }
  }
  return result;
}
