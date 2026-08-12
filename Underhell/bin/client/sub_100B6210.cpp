int __thiscall sub_100B6210(int this)
{
  int i; // esi
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // esi
  int v8; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < *(_DWORD *)(this + 40); ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  }
  v5 = *(unsigned __int16 *)(this + 126);
  v6 = 0;
  v8 = v5;
  if ( *(_WORD *)(this + 126) )
  {
    do
    {
      v7 = *(_DWORD *)(*(_DWORD *)(this + 112) + 16 * (unsigned __int16)v6 + 12);
      *(_BYTE *)v7 = 0;
      *(_DWORD *)(v7 + 16) = 0;
      if ( *(int *)(v7 + 12) >= 0 )
      {
        if ( *(_DWORD *)(v7 + 4) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v7 + 4));
          v5 = v8;
          *(_DWORD *)(v7 + 4) = 0;
        }
        *(_DWORD *)(v7 + 8) = 0;
      }
      result = *(_DWORD *)(v7 + 4);
      ++v6;
      *(_DWORD *)(v7 + 20) = result;
    }
    while ( v6 < v5 );
  }
  return result;
}
