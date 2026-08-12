void __cdecl sub_10479160()
{
  int v0; // eax

  v0 = unk_106EDBCC;
  *(_DWORD *)byte_106EDBA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EDBA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EDBCC = 0;
  }
  *(_DWORD *)byte_106EDBA8 = &ConCommandBase::`vftable';
}
