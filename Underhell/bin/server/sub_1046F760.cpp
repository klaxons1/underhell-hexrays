void __cdecl sub_1046F760()
{
  int v0; // eax

  v0 = *(_DWORD *)&byte_10695670[36];
  *(_DWORD *)byte_10695670 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695670[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    *(_DWORD *)&byte_10695670[36] = 0;
  }
  *(_DWORD *)byte_10695670 = &ConCommandBase::`vftable';
}
