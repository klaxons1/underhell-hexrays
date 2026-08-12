int __stdcall sub_1010BE80(int a1, int a2)
{
  _DWORD *v2; // esi
  int result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int i; // ecx
  void (__thiscall *v8)(int, int *, int); // edx

  v2 = *(_DWORD **)a1;
  result = *(unsigned __int16 *)(*(_DWORD *)(a1 + 8) + 16);
  if ( *(_WORD *)(*(_DWORD *)(a1 + 8) + 16) )
  {
    v4 = a2;
    v5 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 8) + 16);
    do
    {
      v6 = v2[5];
      for ( i = 0; v6; ++i )
        v6 = *(_DWORD *)(v6 + 24);
      v8 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)v4 + 52);
      a1 = i;
      v8(v4, &a1, 1);
      result = sub_1010BB40(v2, v4);
      v2 += 6;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
