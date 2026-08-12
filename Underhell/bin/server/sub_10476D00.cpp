void __cdecl sub_10476D00()
{
  int v0; // eax

  v0 = unk_106DE7EC;
  *(_DWORD *)byte_106DE7C8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE7C8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE7EC = 0;
  }
  *(_DWORD *)byte_106DE7C8 = &ConCommandBase::`vftable';
}
