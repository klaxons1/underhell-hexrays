int __fastcall sub_100CEE70(_DWORD *a1)
{
  int v1; // edi
  int v2; // ebx
  int *v3; // esi
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h]

  v1 = a1[3] - 1;
  v5 = a1;
  if ( v1 >= 0 )
  {
    v2 = 16 * v1;
    do
    {
      v3 = (int *)(v2 + *a1);
      if ( v3[2] >= 0 )
      {
        result = *v3;
        if ( *v3 )
        {
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
          a1 = v5;
          *v3 = 0;
        }
        v3[1] = 0;
      }
      v2 -= 16;
      --v1;
    }
    while ( v1 >= 0 );
  }
  a1[3] = 0;
  return result;
}
