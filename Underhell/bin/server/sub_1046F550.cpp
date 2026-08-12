void __cdecl sub_1046F550()
{
  int v0; // eax

  v0 = unk_1069507C;
  *(_DWORD *)byte_10695058 = &ConVar::`vftable';
  *(_DWORD *)&byte_10695058[24] = &ConVar::`vftable';
  if ( v0 )
  {
    sub_10184660(v0);
    unk_1069507C = 0;
  }
  *(_DWORD *)byte_10695058 = &ConCommandBase::`vftable';
}
