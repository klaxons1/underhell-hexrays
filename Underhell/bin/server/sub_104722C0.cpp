void __cdecl sub_104722C0()
{
  int v0; // eax

  v0 = unk_106B734C;
  *(_DWORD *)byte_106B7328 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B7328[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B734C = 0;
  }
  *(_DWORD *)byte_106B7328 = &ConCommandBase::`vftable';
}
