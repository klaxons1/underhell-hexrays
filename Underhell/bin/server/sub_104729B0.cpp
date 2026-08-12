void __cdecl sub_104729B0()
{
  int v0; // eax

  v0 = unk_106B8E3C;
  *(_DWORD *)byte_106B8E18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8E18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8E3C = 0;
  }
  *(_DWORD *)byte_106B8E18 = &ConCommandBase::`vftable';
}
