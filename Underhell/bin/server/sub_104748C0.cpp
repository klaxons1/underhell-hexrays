void __cdecl sub_104748C0()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_106CC118[4];
  *(_DWORD *)byte_106CC0F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106CC0F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_106CC118[4] = 0;
  }
  *(_DWORD *)byte_106CC0F8 = &ConCommandBase::`vftable';
}
