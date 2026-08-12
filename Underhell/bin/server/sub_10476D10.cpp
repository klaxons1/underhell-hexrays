void __cdecl sub_10476D10()
{
  int v0; // eax

  v0 = unk_106DE834;
  *(_DWORD *)byte_106DE810 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE810[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE834 = 0;
  }
  *(_DWORD *)byte_106DE810 = &ConCommandBase::`vftable';
}
