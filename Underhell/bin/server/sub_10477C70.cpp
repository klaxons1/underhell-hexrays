void __cdecl sub_10477C70()
{
  int v0; // eax

  v0 = unk_106E5744;
  *(_DWORD *)byte_106E5720 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5720[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5744 = 0;
  }
  *(_DWORD *)byte_106E5720 = &ConCommandBase::`vftable';
}
