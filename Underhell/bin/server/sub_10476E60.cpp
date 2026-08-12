void __cdecl sub_10476E60()
{
  int v0; // eax

  v0 = unk_106DEBC4;
  *(_DWORD *)byte_106DEBA0 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DEBA0[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_106DEBC4 = 0;
  }
  *(_DWORD *)byte_106DEBA0 = &ConCommandBase::`vftable';
}
