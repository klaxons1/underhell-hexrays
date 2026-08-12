void __cdecl sub_104780E0()
{
  int v0; // eax

  v0 = unk_106E78A4;
  *(_DWORD *)byte_106E7880 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E7880[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E78A4 = 0;
  }
  *(_DWORD *)byte_106E7880 = &ConCommandBase::`vftable';
}
