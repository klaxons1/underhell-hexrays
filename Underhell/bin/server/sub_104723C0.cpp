void __cdecl sub_104723C0()
{
  int v0; // eax

  v0 = unk_106B77F4;
  *(_DWORD *)byte_106B77D0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B77D0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B77F4 = 0;
  }
  *(_DWORD *)byte_106B77D0 = &ConCommandBase::`vftable';
}
