char __thiscall sub_10085580(void *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // eax

  v3 = a2;
  if ( !a2 )
    return 0;
  while ( 1 )
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 112))(v3);
    v5 = v4;
    if ( !v4 )
      return 0;
    v6 = sub_10085210((int)this, v4);
    if ( v6 == 1 )
      return 0;
    if ( v6 )
      break;
    v3 = v5;
  }
  return 1;
}
