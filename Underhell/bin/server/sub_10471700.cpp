void __cdecl sub_10471700()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B3038[36];
  *(_DWORD *)byte_106B3038 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3038[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B3038[36] = 0;
  }
  *(_DWORD *)byte_106B3038 = &ConCommandBase::`vftable';
}
