void __fastcall sub_101FBC50(_DWORD *a1)
{
  int v1; // ebx
  int v2; // ebp
  bool v3; // sf
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // [esp+8h] [ebp-4h]

  v1 = a1[3] - 1;
  v6 = a1;
  if ( v1 < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    v2 = 24 * v1;
    do
    {
      v3 = *(int *)(*a1 + v2 + 12) < 0;
      v4 = (_DWORD *)(*a1 + v2 + 4);
      *(_DWORD *)(*a1 + v2 + 16) = 0;
      if ( !v3 )
      {
        if ( *v4 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
          a1 = v6;
          *v4 = 0;
        }
        v4[1] = 0;
      }
      v3 = (int)v4[2] < 0;
      v5 = *v4;
      v4[4] = *v4;
      if ( !v3 )
      {
        if ( v5 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
          a1 = v6;
          *v4 = 0;
        }
        v4[1] = 0;
      }
      --v1;
      v2 -= 24;
    }
    while ( v1 >= 0 );
    a1[3] = 0;
  }
}
