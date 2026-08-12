void __cdecl sub_10477E40()
{
  int v0; // eax

  v0 = unk_106E5F04;
  *(_DWORD *)byte_106E5EE0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5EE0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E5F04 = 0;
  }
  *(_DWORD *)byte_106E5EE0 = &ConCommandBase::`vftable';
}
