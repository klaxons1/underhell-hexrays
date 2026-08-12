void __cdecl sub_10470280()
{
  int v0; // eax

  v0 = unk_1069A5FC;
  *(_DWORD *)byte_1069A5D8 = &ConVar::`vftable';
  *(_DWORD *)&byte_1069A5D8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069A5FC = 0;
  }
  *(_DWORD *)byte_1069A5D8 = &ConCommandBase::`vftable';
}
