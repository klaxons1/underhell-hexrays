void __cdecl sub_10476D70()
{
  int v0; // eax

  v0 = unk_106DE92C;
  *(_DWORD *)byte_106DE908 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE908[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE92C = 0;
  }
  *(_DWORD *)byte_106DE908 = &ConCommandBase::`vftable';
}
