void __cdecl sub_10477CB0()
{
  int v0; // eax

  v0 = unk_106E5864;
  *(_DWORD *)byte_106E5840 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5840[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5864 = 0;
  }
  *(_DWORD *)byte_106E5840 = &ConCommandBase::`vftable';
}
