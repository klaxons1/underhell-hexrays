void __cdecl sub_10471710()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B3080[36];
  *(_DWORD *)byte_106B3080 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3080[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B3080[36] = 0;
  }
  *(_DWORD *)byte_106B3080 = &ConCommandBase::`vftable';
}
