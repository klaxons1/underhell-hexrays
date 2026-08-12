void __cdecl sub_10471970()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_106B3978[36];
  *(_DWORD *)byte_106B3978 = &ConVar::`vftable';
  *(_DWORD *)&byte_106B3978[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_106B3978[36] = 0;
  }
  *(_DWORD *)byte_106B3978 = &ConCommandBase::`vftable';
}
