void __cdecl sub_10471CE0()
{
  dword_106B57B8 = (int)&CHLTVDirector::`vftable';
  dword_106B57C0 = (int)&CHLTVDirector::`vftable';
  dword_106B57C4 = (int)&CHLTVDirector::`vftable';
  sub_1016F670((int)&unk_106B5948);
  dword_106B57C4 = (int)&IHLTVDirector::`vftable';
  sub_10170190(&dword_106B57C0);
  dword_106B57B8 = (int)&CGameEventListener::`vftable';
  if ( byte_106B57BC )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_106B31F8 + 20))(dword_106B31F8, &dword_106B57B8);
    byte_106B57BC = 0;
  }
  dword_106B57B8 = (int)&IGameEventListener2::`vftable';
}
