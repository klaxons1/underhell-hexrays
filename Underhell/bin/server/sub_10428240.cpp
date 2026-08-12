int __fastcall sub_10428240(int *a1)
{
  int v1; // edi
  int v2; // ebx
  int result; // eax
  int *v4; // esi
  int *v5; // [esp+4h] [ebp-4h]

  v1 = a1[3] - 1;
  v5 = a1;
  if ( v1 >= 0 )
  {
    v2 = 40 * v1;
    do
    {
      result = *a1;
      v4 = (int *)(v2 + *a1 + 16);
      if ( *(int *)(v2 + *a1 + 24) >= 0 )
      {
        result = *v4;
        if ( *v4 )
        {
          result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
          a1 = v5;
          *v4 = 0;
        }
        v4[1] = 0;
      }
      --v1;
      v2 -= 40;
    }
    while ( v1 >= 0 );
  }
  a1[3] = 0;
  return result;
}
