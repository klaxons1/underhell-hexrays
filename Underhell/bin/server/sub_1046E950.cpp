void __cdecl sub_1046E950()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10690B18[4];
  *(_DWORD *)byte_10690AF8 = &ConVar::`vftable';
  *(_DWORD *)&byte_10690AF8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10690B18[4] = 0;
  }
  *(_DWORD *)byte_10690AF8 = &ConCommandBase::`vftable';
}
