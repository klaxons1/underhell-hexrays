void __cdecl sub_104721F0()
{
  int v0; // eax

  v0 = unk_106B6FA4;
  *(_DWORD *)byte_106B6F80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B6F80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B6FA4 = 0;
  }
  *(_DWORD *)byte_106B6F80 = &ConCommandBase::`vftable';
}
