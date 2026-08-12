void __cdecl sub_10156710(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  if ( a1 )
  {
    v1 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v2 = dword_106B3494;
    v3 = dword_106B3494;
    if ( dword_106B3494 + 1 > dword_106B348C )
    {
      sub_102ABFC0(dword_106B3494 - dword_106B348C + 1);
      v2 = dword_106B3494;
    }
    v4 = dword_106B3488;
    dword_106B3494 = v2 + 1;
    v5 = v2 - v3;
    dword_106B3498 = dword_106B3488;
    if ( v5 > 0 )
    {
      memcpy((void *)(dword_106B3488 + 4 * v3 + 4), (const void *)(dword_106B3488 + 4 * v3), 4 * v5);
      v4 = dword_106B3488;
    }
    v6 = (_DWORD *)(v4 + 4 * v3);
    if ( v6 )
      *v6 = v1;
  }
}
