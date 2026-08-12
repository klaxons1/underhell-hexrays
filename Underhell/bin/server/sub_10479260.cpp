void __cdecl sub_10479260()
{
  int v0; // eax

  v0 = unk_106EE2AC;
  *(_DWORD *)byte_106EE288 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EE288[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EE2AC = 0;
  }
  *(_DWORD *)byte_106EE288 = &ConCommandBase::`vftable';
}
