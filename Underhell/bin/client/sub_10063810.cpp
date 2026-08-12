int __thiscall sub_10063810(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // edx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // eax
  int *v9; // esi
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // [esp+4h] [ebp-4h]

  v2 = a2;
  result = *(_DWORD *)(a2 + 1952);
  v17 = this;
  if ( result )
  {
    v4 = this[4];
    v5 = 0;
    if ( v4 > 0 )
    {
      v6 = (_DWORD *)this[1];
      do
      {
        if ( *(_DWORD *)(a2 + 1952) == *v6 && *(_DWORD *)(a2 + 1956) == v6[1] )
          break;
        ++v5;
        v6 += 131;
      }
      while ( v5 < v4 );
    }
    if ( v5 == v4 )
    {
      v7 = this[4];
      v8 = this[2];
      v9 = this + 1;
      if ( v7 + 1 > v8 )
      {
        sub_1005FFA0(this + 1, v7 - v8 + 1);
        this = v17;
      }
      ++v9[3];
      v10 = *v9;
      v11 = v9[3] - v7 - 1;
      v9[4] = *v9;
      if ( v11 > 0 )
      {
        memcpy((void *)(v10 + 524 * v7 + 524), (const void *)(v10 + 524 * v7), 524 * v11);
        this = v17;
      }
      v12 = 524 * v7;
      *(_DWORD *)(v12 + *v9) = *(_DWORD *)(a2 + 1952);
      *(_DWORD *)(v12 + *v9 + 4) = *(_DWORD *)(a2 + 1956);
      v13 = *v9;
      v2 = a2;
      *(_DWORD *)(v12 + v13 + 8) = 0;
    }
    v14 = this[1];
    v15 = 524 * v5;
    if ( *(int *)(524 * v5 + v14 + 8) < 128 )
    {
      *(_DWORD *)(v14 + 4 * (*(_DWORD *)(v14 + v15 + 8) + 131 * v5) + 12) = v2;
      v16 = this[1];
      ++*(_DWORD *)(v15 + v16 + 8);
      return v15 + v16 + 8;
    }
    else
    {
      return Warning("CRopeManager::AddToRenderCache count to large for cache!\n");
    }
  }
  return result;
}
