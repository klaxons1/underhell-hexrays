void __cdecl sub_10479BA0()
{
  int v0; // eax

  v0 = unk_106F0C7C;
  *(_DWORD *)byte_106F0C58 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0C58[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0C7C = 0;
  }
  *(_DWORD *)byte_106F0C58 = &ConCommandBase::`vftable';
}
