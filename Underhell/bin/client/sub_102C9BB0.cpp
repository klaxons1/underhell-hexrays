void __cdecl sub_102C9BB0()
{
  dword_1042F9E0 = (int)&C_HLTVCamera::`vftable';
  dword_1042FA78 = (int)&CUserCmd::`vftable';
  sub_1011A810(dword_1042FAB8);
  dword_1042F9E0 = (int)&CGameEventListener::`vftable';
  if ( byte_1042F9E4 )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_104131A8 + 20))(dword_104131A8, &dword_1042F9E0);
    byte_1042F9E4 = 0;
  }
  dword_1042F9E0 = (int)&IGameEventListener2::`vftable';
}
