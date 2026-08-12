void __cdecl sub_10478D60()
{
  int v0; // eax

  v0 = unk_106EBDCC;
  *(_DWORD *)byte_106EBDA8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EBDA8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106EBDCC = 0;
  }
  *(_DWORD *)byte_106EBDA8 = &ConCommandBase::`vftable';
}
