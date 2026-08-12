void __cdecl sub_1046ED70()
{
  int v0; // eax

  v0 = unk_1069260C;
  *(_DWORD *)byte_106925E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106925E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069260C = 0;
  }
  *(_DWORD *)byte_106925E8 = &ConCommandBase::`vftable';
}
