void __cdecl sub_104781A0()
{
  int v0; // eax

  v0 = unk_106E7C94;
  *(_DWORD *)byte_106E7C70 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7C70[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E7C94 = 0;
  }
  *(_DWORD *)byte_106E7C70 = &ConCommandBase::`vftable';
}
