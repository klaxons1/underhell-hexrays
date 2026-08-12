void __cdecl sub_1046E770()
{
  int v0; // eax

  v0 = unk_1069030C;
  *(_DWORD *)byte_106902E8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106902E8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069030C = 0;
  }
  *(_DWORD *)byte_106902E8 = &ConCommandBase::`vftable';
}
