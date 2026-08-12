void __cdecl sub_10474F10()
{
  int v0; // eax

  v0 = unk_106D07CC;
  *(_DWORD *)byte_106D07A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106D07A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106D07CC = 0;
  }
  *(_DWORD *)byte_106D07A8 = &ConCommandBase::`vftable';
}
