int __fastcall sub_101E8C00(int a1)
{
  int v1; // edi
  int result; // eax
  int v3; // esi
  int v4; // ebx
  int v5; // edx
  int v6; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 3580);
  result = 0;
  v3 = 0;
  v6 = a1;
  if ( v1 > 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = v3 < 0 || v3 >= v1 ? 0 : v4 + *(_DWORD *)(a1 + 3568);
      ++v3;
      result += *(_DWORD *)(v5 + 20) + *(_DWORD *)(v5 + 28);
      v4 += 36;
      if ( v3 >= v1 )
        break;
      a1 = v6;
    }
  }
  return result;
}
