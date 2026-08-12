void __cdecl sub_10476CF0()
{
  int v0; // eax

  v0 = unk_106DE7A4;
  *(_DWORD *)byte_106DE780 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DE780[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DE7A4 = 0;
  }
  *(_DWORD *)byte_106DE780 = &ConCommandBase::`vftable';
}
