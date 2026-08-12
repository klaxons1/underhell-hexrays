int sub_100766B0()
{
  int v0; // eax
  int v1; // eax

  v0 = sub_100422D0();
  if ( v0 && (v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 848))(v0)) != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)(v1 + 8) + 36))(v1 + 8);
  else
    return 0;
}
