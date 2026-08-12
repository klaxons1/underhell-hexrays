void __cdecl sub_104722B0()
{
  int v0; // eax

  v0 = unk_106B7304;
  *(_DWORD *)byte_106B72E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B72E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B7304 = 0;
  }
  *(_DWORD *)byte_106B72E0 = &ConCommandBase::`vftable';
}
