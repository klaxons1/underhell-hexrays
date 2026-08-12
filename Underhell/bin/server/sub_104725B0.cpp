void __cdecl sub_104725B0()
{
  int v0; // eax

  v0 = unk_106B8474;
  *(_DWORD *)byte_106B8450 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B8450[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B8474 = 0;
  }
  *(_DWORD *)byte_106B8450 = &ConCommandBase::`vftable';
}
