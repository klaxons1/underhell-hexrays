void __cdecl sub_10471CB0()
{
  int v0; // eax

  v0 = unk_106B5704;
  *(_DWORD *)byte_106B56E0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B56E0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106B5704 = 0;
  }
  *(_DWORD *)byte_106B56E0 = &ConCommandBase::`vftable';
}
