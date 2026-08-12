char __cdecl sub_101A0900(float *a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi

  v1 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
    return 1;
  while ( 1 )
  {
    v2 = sub_1025FB50(v1);
    v3 = v2;
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 24)
        && (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v2 + 24))
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3)
        && !sub_101A0330(a1, v3) )
      {
        break;
      }
    }
    if ( ++v1 > *(_DWORD *)(dword_106B31C8 + 20) )
      return 1;
  }
  return 0;
}
