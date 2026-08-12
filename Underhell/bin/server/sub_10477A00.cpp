void __cdecl sub_10477A00()
{
  int v0; // eax

  v0 = unk_106E3784;
  *(_DWORD *)byte_106E3760 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E3760[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E3784 = 0;
  }
  *(_DWORD *)byte_106E3760 = &ConCommandBase::`vftable';
}
