int __fastcall sub_1008A2E0(_DWORD *a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int result; // eax
  _DWORD *v5; // [esp+4h] [ebp-4h]

  v1 = a1[3] - 1;
  v5 = a1;
  if ( v1 >= 0 )
  {
    v2 = 12 * v1;
    do
    {
      v3 = *a1;
      if ( *(_WORD *)(*a1 + v2 + 2) > 1u )
      {
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v3 + v2 + 8));
        a1 = v5;
      }
      *(_DWORD *)(v3 + v2 + 8) = 0;
      v2 -= 12;
      --v1;
    }
    while ( v1 >= 0 );
  }
  a1[3] = 0;
  return result;
}
