void __cdecl sub_1046E910()
{
  int v0; // eax

  v0 = unk_106909FC;
  *(_DWORD *)byte_106909D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106909D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106909FC = 0;
  }
  *(_DWORD *)byte_106909D8 = &ConCommandBase::`vftable';
}
