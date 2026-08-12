void __cdecl sub_10477C80()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106E5768[36];
  *(_DWORD *)byte_106E5768 = &ConVar::`vftable';
  *(_DWORD *)&byte_106E5768[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106E5768[36] = 0;
  }
  *(_DWORD *)byte_106E5768 = &ConCommandBase::`vftable';
}
