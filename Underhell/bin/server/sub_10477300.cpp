void __cdecl sub_10477300()
{
  int v0; // eax

  v0 = unk_106E07CC;
  *(_DWORD *)byte_106E07A8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E07A8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E07CC = 0;
  }
  *(_DWORD *)byte_106E07A8 = &ConCommandBase::`vftable';
}
