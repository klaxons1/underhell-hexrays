int sub_101FD180()
{
  int result; // eax
  int i; // ebx
  int v2; // esi
  int v3; // edi
  _DWORD *v4; // esi

  result = dword_106B31C8;
  for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
  {
    result = sub_1025FB50(i);
    v2 = result;
    if ( result )
    {
      result = sub_10236A30();
      v3 = result;
      if ( result == *(_DWORD *)(v2 + 2300) )
      {
        if ( !result )
        {
          v4 = (_DWORD *)(v2 + 2360);
          if ( *v4 != 255 )
          {
            result = (*(int (__thiscall **)(_DWORD *, _DWORD *))*(v4 - 5))(v4 - 5, v4);
            *v4 = 255;
          }
        }
      }
      else
      {
        *(_DWORD *)(v2 + 2300) = result;
        *(_DWORD *)(v2 + 2344) = *(_DWORD *)(result + 804);
        sub_101FC0B0((float *)(v2 + 2348), (float *)(result + 808));
        *(_DWORD *)(v2 + 2360) = *(_DWORD *)(v3 + 820);
        sub_101FCB10((void (__thiscall ***)(void *, int))(v2 + 2364), v3 + 824);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 2340) + 4))(v2 + 2340);
      }
    }
  }
  return result;
}
