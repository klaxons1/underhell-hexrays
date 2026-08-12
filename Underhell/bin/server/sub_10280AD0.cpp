int __thiscall sub_10280AD0(_DWORD *this)
{
  *this = &CWorld::`vftable';
  sub_1013BD70();
  sub_10008CC0();
  if ( dword_106B3CDC )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 148))(dword_106B3CDC);
    if ( dword_106B3CDC )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 48))(dword_106B3CDC, 1);
    dword_106B3CDC = 0;
  }
  dword_106D1EF0 = 0;
  return sub_100DF1D0(this);
}
