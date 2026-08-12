void __cdecl sub_104771E0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106DFB60[36];
  *(_DWORD *)byte_106DFB60 = &ConVar::`vftable';
  *(_DWORD *)&byte_106DFB60[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106DFB60[36] = 0;
  }
  *(_DWORD *)byte_106DFB60 = &ConCommandBase::`vftable';
}
