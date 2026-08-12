int __thiscall sub_1019F6B0(int this)
{
  int result; // eax

  sub_1006FA50((float *)this);
  *(_DWORD *)this = &C_PropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 4) = &C_PropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 8) = &C_PropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 12) = &C_PropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 1960) = &C_PropJeepEpisodic::`vftable';
  if ( !dword_10449704 )
    sub_1012CAB0((int)off_103E6EEC[0], "UpdateJalopyRadar", (int)sub_1019F5D0);
  result = this;
  dword_10449704 = this;
  return result;
}
