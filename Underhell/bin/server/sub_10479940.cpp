void __cdecl sub_10479940()
{
  int v0; // eax

  v0 = unk_106F044C;
  *(_DWORD *)byte_106F0428 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0428[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F044C = 0;
  }
  *(_DWORD *)byte_106F0428 = &ConCommandBase::`vftable';
}
