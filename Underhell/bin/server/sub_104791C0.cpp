void __cdecl sub_104791C0()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106EDEB8[36];
  *(_DWORD *)byte_106EDEB8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106EDEB8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106EDEB8[36] = 0;
  }
  *(_DWORD *)byte_106EDEB8 = &ConCommandBase::`vftable';
}
