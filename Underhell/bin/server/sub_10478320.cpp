void __cdecl sub_10478320()
{
  int v0; // eax

  v0 = unk_106E8654;
  *(_DWORD *)byte_106E8630 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E8630[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106E8654 = 0;
  }
  *(_DWORD *)byte_106E8630 = &ConCommandBase::`vftable';
}
