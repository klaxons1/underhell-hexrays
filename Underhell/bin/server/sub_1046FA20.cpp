void __cdecl sub_1046FA20()
{
  int v0; // eax

  v0 = unk_106968E4;
  *(_DWORD *)byte_106968C0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106968C0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106968E4 = 0;
  }
  *(_DWORD *)byte_106968C0 = &ConCommandBase::`vftable';
}
