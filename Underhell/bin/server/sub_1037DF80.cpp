_DWORD *__thiscall sub_1037DF80(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // edi
  int *v5; // ecx
  int v6; // eax
  int (__thiscall *v7)(int *); // edx
  int v8; // esi
  _DWORD *v9; // eax
  int v10; // edi
  int v11; // ecx
  _DWORD *result; // eax
  int v13[2]; // [esp+Ch] [ebp-30h] BYREF
  int v14; // [esp+14h] [ebp-28h]
  int v15; // [esp+18h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-20h]
  _DWORD Src[3]; // [esp+20h] [ebp-1Ch] BYREF
  int v18; // [esp+2Ch] [ebp-10h]
  _DWORD *i; // [esp+30h] [ebp-Ch]
  float v20; // [esp+34h] [ebp-8h]
  int v21; // [esp+38h] [ebp-4h]

  v2 = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  i = Src;
  sub_1037BAF0(v13);
  v4 = 0;
  for ( i = Src; v4 < v15; ++v4 )
  {
    if ( v18 >= 3 )
      break;
    v5 = *(int **)(v13[0] + 4 * v4);
    v6 = *v5;
    v21 = v5[55];
    v7 = *(int (__thiscall **)(int *))(v6 + 448);
    v20 = (float)v21;
    v21 = v7(v5);
    if ( (double)v21 * 0.2 < v20 )
    {
      v8 = v18++;
      i = Src;
      if ( v18 - v8 - 1 > 0 )
        memcpy(&Src[v8 + 1], &Src[v8], 4 * (v18 - v8 - 1));
      v9 = &Src[v8];
      v2 = 0;
      if ( v9 )
        *v9 = *(_DWORD *)(v13[0] + 4 * v4);
    }
  }
  v10 = a2;
  if ( a2 < 3 )
  {
    v10 = v18 + a2;
    if ( v18 + a2 > 3 )
      v10 = 3;
  }
  if ( v18 > 0 )
  {
    do
    {
      if ( !v10 )
        break;
      sub_100577F0(Src[v2] + 4292, (int)this, 0);
      v11 = Src[v2++];
      *(_DWORD *)(v11 + 260) = this[234];
      --v10;
    }
    while ( v2 < v18 );
  }
  DevMsg("Requested %d to spawn, Summoning %d free hunters, spawning %d new hunters\n", a2, v2, v10);
  if ( v10 )
    sub_10187480((unsigned int)this, v2, v10);
  result = Src;
  v18 = 0;
  i = Src;
  if ( v14 >= 0 )
  {
    result = (_DWORD *)v13[0];
    if ( v13[0] )
      return (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v13[0]);
  }
  return result;
}
