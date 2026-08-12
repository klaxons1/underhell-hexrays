void __cdecl sub_10473290()
{
  int v0; // eax

  v0 = unk_106BB534;
  *(_DWORD *)byte_106BB510 = &ConVar::`vftable';
  *(_DWORD *)&byte_106BB510[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106BB534 = 0;
  }
  *(_DWORD *)byte_106BB510 = &ConCommandBase::`vftable';
}
