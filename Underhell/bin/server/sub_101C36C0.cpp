int __thiscall sub_101C36C0(_DWORD *this, float *a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int result; // eax
  _DWORD v7[4]; // [esp+8h] [ebp-64h] BYREF
  int v8; // [esp+18h] [ebp-54h]
  int v9; // [esp+1Ch] [ebp-50h]
  int v10; // [esp+20h] [ebp-4Ch]
  int v11; // [esp+24h] [ebp-48h]
  int v12; // [esp+28h] [ebp-44h]
  float v13; // [esp+50h] [ebp-1Ch] BYREF
  float v14; // [esp+54h] [ebp-18h]
  float v15; // [esp+58h] [ebp-14h]
  float v16; // [esp+5Ch] [ebp-10h] BYREF
  float v17; // [esp+60h] [ebp-Ch]
  float v18; // [esp+64h] [ebp-8h]
  _DWORD *v19; // [esp+68h] [ebp-4h]

  v19 = this;
  this[9] = 0;
  sub_101C32F0(v7, (int)this);
  v3 = this[4] - 1;
  if ( v3 >= 0 )
  {
    v4 = 16 * v3;
    do
    {
      v5 = *(_DWORD *)(v4 + v19[1]);
      if ( *(_BYTE *)(v5 + 361) && (*(_BYTE *)(v5 + 356) & 4) == 0 && (*(_BYTE *)(v5 + 356) & 0x20) == 0 )
      {
        sub_10111910((_BYTE *)(v5 + 320), (float *)(v5 + 328), (float *)(v5 + 340), &v13, &v16);
        if ( *a2 < 0.0 )
          v16 = v16 - *a2;
        else
          v13 = v13 - *a2;
        if ( a2[1] < 0.0 )
          v17 = v17 - a2[1];
        else
          v14 = v14 - a2[1];
        if ( a2[2] < 0.0 )
          v18 = v18 - a2[2];
        else
          v15 = v15 - a2[2];
        (*(void (__thiscall **)(int, int, float *, float *, _DWORD, _DWORD *))(*(_DWORD *)dword_106B31EC + 48))(
          dword_106B31EC,
          16,
          &v13,
          &v16,
          0,
          v7);
      }
      v4 -= 16;
      --v3;
    }
    while ( v3 >= 0 );
  }
  result = v8;
  v11 = 0;
  if ( v10 >= 0 )
  {
    if ( v8 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
      result = 0;
      v8 = 0;
    }
    v9 = 0;
  }
  v12 = result;
  if ( v10 >= 0 )
  {
    if ( result )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
