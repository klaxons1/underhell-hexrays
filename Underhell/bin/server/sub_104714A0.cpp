void __cdecl sub_104714A0()
{
  int v0; // eax

  v0 = unk_106B24AC;
  *(_DWORD *)byte_106B2488 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B2488[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B24AC = 0;
  }
  *(_DWORD *)byte_106B2488 = &ConCommandBase::`vftable';
}
