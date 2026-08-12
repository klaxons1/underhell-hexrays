void __cdecl sub_10478260()
{
  int v0; // eax

  v0 = unk_106E816C;
  *(_DWORD *)byte_106E8148 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8148[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E816C = 0;
  }
  *(_DWORD *)byte_106E8148 = &ConCommandBase::`vftable';
}
