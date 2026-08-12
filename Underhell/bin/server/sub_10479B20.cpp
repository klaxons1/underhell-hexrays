void __cdecl sub_10479B20()
{
  int v0; // eax

  v0 = unk_106F0A3C;
  *(_DWORD *)byte_106F0A18 = &ConVar::`vftable';
  *(_DWORD *)&byte_106F0A18[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106F0A3C = 0;
  }
  *(_DWORD *)byte_106F0A18 = &ConCommandBase::`vftable';
}
