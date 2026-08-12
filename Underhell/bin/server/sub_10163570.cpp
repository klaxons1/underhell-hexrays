void __cdecl sub_10163570(_DWORD *a1)
{
  int v1; // esi
  int v2; // ebx
  _DWORD *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax

  v1 = 0;
  if ( dword_106B4D4C > 0 )
  {
    while ( *(_DWORD *)(*(_DWORD *)(dword_106B4D40 + 4 * v1) + 800) != a1[23] )
    {
      if ( ++v1 >= dword_106B4D4C )
        return;
    }
    v2 = *(_DWORD *)(*(int (**)(void))(*a1 + 8))();
    v3 = *(_DWORD **)(dword_106B4D40 + 4 * v1);
    v4 = v3[207];
    v5 = v3[205];
    if ( v4 + 1 > v5 )
      sub_102ABFC0(v4 - v5 + 1);
    ++v3[207];
    v6 = v3[204];
    v7 = v3[207] - v4 - 1;
    v3[208] = v6;
    if ( v7 > 0 )
      memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
    v8 = (_DWORD *)(v3[204] + 4 * v4);
    if ( v8 )
      *v8 = v2;
  }
}
