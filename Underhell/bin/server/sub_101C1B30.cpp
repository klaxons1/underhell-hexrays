int __fastcall sub_101C1B30(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int result; // eax
  int v5; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 16) - 1;
  v5 = a1;
  if ( v1 >= 0 )
  {
    v2 = 16 * v1;
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      sub_100DCB50(*(void **)(v3 + v2), v3 + v2 + 4);
      result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + v2) + 620))(*(float *)(dword_106B31C8 + 16));
      v2 -= 16;
      if ( --v1 < 0 )
        break;
      a1 = v5;
    }
  }
  return result;
}
