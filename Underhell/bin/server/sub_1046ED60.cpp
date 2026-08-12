void __cdecl sub_1046ED60()
{
  int v0; // eax

  v0 = unk_106925C4;
  *(_DWORD *)byte_106925A0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106925A0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106925C4 = 0;
  }
  *(_DWORD *)byte_106925A0 = &ConCommandBase::`vftable';
}
