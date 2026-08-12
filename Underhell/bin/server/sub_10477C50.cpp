void __cdecl sub_10477C50()
{
  int v0; // eax

  v0 = unk_106E562C;
  *(_DWORD *)byte_106E5608 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5608[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E562C = 0;
  }
  *(_DWORD *)byte_106E5608 = &ConCommandBase::`vftable';
}
