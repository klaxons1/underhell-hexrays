int __fastcall sub_101F73F0(_DWORD *a1)
{
  int result; // eax
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  result = a1[3] - 1;
  v6 = a1;
  v8 = result;
  if ( result < 0 )
  {
    a1[3] = 0;
  }
  else
  {
    result *= 36;
    v7 = result;
    do
    {
      v2 = (_DWORD *)(result + *a1);
      v3 = v2[3] - 1;
      if ( v3 >= 0 )
      {
        v4 = 84 * v3;
        do
        {
          (**(void (__thiscall ***)(int, _DWORD))(*v2 + v4))(v4 + *v2, 0);
          v4 -= 84;
          --v3;
        }
        while ( v3 >= 0 );
      }
      v2[3] = 0;
      if ( (int)v2[2] >= 0 )
      {
        if ( *v2 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v2);
          *v2 = 0;
        }
        v2[1] = 0;
      }
      v5 = *v2;
      v2[4] = *v2;
      if ( (int)v2[2] >= 0 )
      {
        if ( v5 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5);
          *v2 = 0;
        }
        v2[1] = 0;
      }
      result = v7 - 36;
      --v8;
      a1 = v6;
      v7 -= 36;
    }
    while ( v8 >= 0 );
    v6[3] = 0;
  }
  return result;
}
