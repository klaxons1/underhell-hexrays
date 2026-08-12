int sub_104629C0()
{
  sub_10289D20((int)&dword_106D5D98, (int)"BeamLaser");
  dword_106D5D98 = (int)&CTEBeamLaser::`vftable';
  if ( dword_106D5DE0 )
    dword_106D5DE0 = 0;
  if ( dword_106D5DE4 )
    dword_106D5DE4 = 0;
  return atexit(sub_10475A20);
}
