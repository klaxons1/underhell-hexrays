void __cdecl sub_10163300(_DWORD *a1)
{
  int i; // edi
  int *v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // [esp+4h] [ebp-4h] BYREF

  for ( i = 0; i < dword_106B4D4C; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_106B4D40 + 4 * i) + 800) == a1[23] )
    {
      v2 = (int *)(*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
      v3 = *(_DWORD *)(dword_106B4D40 + 4 * i);
      v6 = *v2;
      v4 = sub_10319100(&v6);
      if ( v4 != -1 )
      {
        v5 = *(_DWORD *)(v3 + 828);
        if ( v5 > 0 )
        {
          *(_DWORD *)(*(_DWORD *)(v3 + 816) + 4 * v4) = *(_DWORD *)(*(_DWORD *)(v3 + 816) + 4 * v5 - 4);
          --*(_DWORD *)(v3 + 828);
        }
      }
    }
  }
}
