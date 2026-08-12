void __thiscall sub_100ED9B0(int this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax

  if ( (*(_WORD *)(this + 36))++ == 0xFFFF )
  {
    v2 = *(unsigned __int16 *)(this + 52);
    if ( v2 != 0xFFFF )
    {
      v3 = *(_DWORD *)(this + 40);
      do
      {
        v4 = 8 * (unsigned __int16)v2;
        *(_WORD *)(*(_DWORD *)(v3 + v4) + 134) = 0;
        v3 = *(_DWORD *)(this + 40);
        v2 = *(unsigned __int16 *)(v3 + v4 + 6);
      }
      while ( v2 != 0xFFFF );
    }
    *(_WORD *)(this + 36) = 1;
  }
}
