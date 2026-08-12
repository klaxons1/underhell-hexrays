void __cdecl sub_10479B70()
{
  int v0; // eax

  v0 = unk_106F0BA4;
  *(_DWORD *)byte_106F0B80 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0B80[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0BA4 = 0;
  }
  *(_DWORD *)byte_106F0B80 = &ConCommandBase::`vftable';
}
