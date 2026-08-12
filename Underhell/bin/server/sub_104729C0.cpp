void __cdecl sub_104729C0()
{
  int v0; // eax

  v0 = unk_106B8E84;
  *(_DWORD *)byte_106B8E60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8E60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8E84 = 0;
  }
  *(_DWORD *)byte_106B8E60 = &ConCommandBase::`vftable';
}
