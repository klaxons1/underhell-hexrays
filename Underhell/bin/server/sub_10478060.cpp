void __cdecl sub_10478060()
{
  int v0; // eax

  v0 = unk_106E69D4;
  *(_DWORD *)byte_106E69B0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E69B0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E69D4 = 0;
  }
  *(_DWORD *)byte_106E69B0 = &ConCommandBase::`vftable';
}
