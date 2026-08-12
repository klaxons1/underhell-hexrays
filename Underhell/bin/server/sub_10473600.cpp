void __cdecl sub_10473600()
{
  int v0; // eax

  v0 = unk_106BD144;
  *(_DWORD *)byte_106BD120 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BD120[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BD144 = 0;
  }
  *(_DWORD *)byte_106BD120 = &ConCommandBase::`vftable';
}
