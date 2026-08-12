int sub_10033FA0()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi

  v0 = ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
  v1 = 0;
  if ( v0 <= 0 )
    return 0;
  while ( 1 )
  {
    v2 = ((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, v1);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 428))(v2) && (unsigned __int8)sub_10107A40(v2 + 148) )
        break;
    }
    if ( ++v1 >= v0 )
      return 0;
  }
  return v2;
}
