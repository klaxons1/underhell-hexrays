int __thiscall sub_100B69F0(int this)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebx
  int i; // edi
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // eax
  int k; // ebx
  int result; // eax
  int j; // [esp+Ch] [ebp-8h]

  v1 = this;
  v2 = *(_DWORD *)(this + 72) - 1;
  if ( v2 >= 0 )
  {
    v3 = 24 * v2;
    do
    {
      sub_1022FD10(*(_DWORD *)(v3 + *(_DWORD *)(v1 + 56) + 20));
      v3 -= 24;
      --v2;
    }
    while ( v2 >= 0 );
  }
  for ( i = sub_100B4CF0((_DWORD *)(v1 + 52)); i != -1; i = sub_100B4D90((_DWORD *)(v1 + 52), i) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(
      g_pMemAlloc,
      *(_DWORD *)(*(_DWORD *)(v1 + 56) + 24 * i + 16));
  sub_100B4C30((_DWORD *)(v1 + 52));
  v5 = *(unsigned __int16 *)(v1 + 126) - 1;
  for ( j = v5; j >= 0; --j )
  {
    v6 = (unsigned __int16)v5;
    v7 = *(_DWORD **)(*(_DWORD *)(v1 + 112) + 16 * (unsigned __int16)v5 + 12);
    if ( (_WORD)v5 != 0xFFFF )
    {
      sub_100B6360(this + 108, v5);
      *(_WORD *)(*(_DWORD *)(this + 112) + 16 * v6) = v6;
      *(_WORD *)(*(_DWORD *)(this + 112) + 16 * v6 + 2) = *(_WORD *)(this + 128);
      --*(_WORD *)(this + 126);
      *(_WORD *)(this + 128) = v6;
    }
    if ( v7 )
    {
      v7[4] = 0;
      if ( (int)v7[3] >= 0 )
      {
        if ( v7[1] )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v7[1]);
          v7[1] = 0;
        }
        v7[2] = 0;
      }
      v8 = v7[1];
      v7[5] = v8;
      if ( (int)v7[3] >= 0 )
      {
        if ( v8 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
          v7[1] = 0;
        }
        v7[2] = 0;
      }
      sub_10034930((int)v7);
    }
    v1 = this;
    LOWORD(v5) = j - 1;
  }
  sub_100B4F00(v1 + 108);
  *(_WORD *)(v1 + 128) = -1;
  if ( *(int *)(v1 + 120) >= 0 )
  {
    if ( *(_DWORD *)(v1 + 112) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1 + 112));
      *(_DWORD *)(v1 + 112) = 0;
    }
    *(_DWORD *)(v1 + 116) = 0;
  }
  *(_WORD *)(v1 + 130) = -1;
  if ( *(int *)(v1 + 120) >= 0 )
  {
    if ( *(_DWORD *)(v1 + 112) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1 + 112));
      *(_DWORD *)(v1 + 112) = 0;
    }
    *(_DWORD *)(v1 + 116) = 0;
  }
  *(_DWORD *)(v1 + 100) = 0;
  if ( *(int *)(v1 + 96) >= 0 )
  {
    if ( *(_DWORD *)(v1 + 88) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1 + 88));
      *(_DWORD *)(v1 + 88) = 0;
    }
    *(_DWORD *)(v1 + 92) = 0;
  }
  v9 = *(_DWORD *)(v1 + 88);
  *(_DWORD *)(v1 + 104) = v9;
  if ( *(int *)(v1 + 96) >= 0 )
  {
    if ( v9 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v9);
      *(_DWORD *)(v1 + 88) = 0;
    }
    *(_DWORD *)(v1 + 92) = 0;
  }
  for ( k = sub_100B4CF0((_DWORD *)(v1 + 52)); k != -1; k = sub_100B4D90((_DWORD *)(v1 + 52), k) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(
      g_pMemAlloc,
      *(_DWORD *)(*(_DWORD *)(v1 + 56) + 24 * k + 16));
  sub_100B4C30((_DWORD *)(v1 + 52));
  sub_100B4C30((_DWORD *)(v1 + 52));
  *(_DWORD *)(v1 + 76) = -1;
  if ( *(int *)(v1 + 64) >= 0 )
  {
    if ( *(_DWORD *)(v1 + 56) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1 + 56));
      *(_DWORD *)(v1 + 56) = 0;
    }
    *(_DWORD *)(v1 + 60) = 0;
  }
  *(_DWORD *)(v1 + 80) = -1;
  if ( *(int *)(v1 + 64) >= 0 )
  {
    if ( *(_DWORD *)(v1 + 56) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1 + 56));
      *(_DWORD *)(v1 + 56) = 0;
    }
    *(_DWORD *)(v1 + 60) = 0;
  }
  *(_DWORD *)(v1 + 40) = 0;
  if ( *(int *)(v1 + 36) >= 0 )
  {
    if ( *(_DWORD *)(v1 + 28) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v1 + 28));
      *(_DWORD *)(v1 + 28) = 0;
    }
    *(_DWORD *)(v1 + 32) = 0;
  }
  result = *(_DWORD *)(v1 + 28);
  *(_DWORD *)(v1 + 44) = result;
  if ( *(int *)(v1 + 36) >= 0 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      *(_DWORD *)(v1 + 28) = 0;
    }
    *(_DWORD *)(v1 + 32) = 0;
  }
  return result;
}
