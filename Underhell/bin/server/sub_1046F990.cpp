void __cdecl sub_1046F990()
{
  int v0; // eax

  v0 = *(_DWORD *)&algn_10696718[4];
  *(_DWORD *)byte_106966F8 = &ConVar::`vftable';
  *(_DWORD *)&byte_106966F8[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&algn_10696718[4] = 0;
  }
  *(_DWORD *)byte_106966F8 = &ConCommandBase::`vftable';
}
