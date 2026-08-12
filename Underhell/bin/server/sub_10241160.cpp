int __thiscall sub_10241160(int *this)
{
  int *v1; // ebx
  int v2; // edi
  int *v3; // esi
  int i; // eax
  int result; // eax
  int v6; // eax
  int v7; // edi
  int *v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  int k; // ebx
  int *v16; // ecx
  int v17; // edi
  float v18; // [esp+0h] [ebp-34h]
  int v19[2]; // [esp+14h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-18h]
  int v21; // [esp+20h] [ebp-14h]
  int v22; // [esp+24h] [ebp-10h]
  int v23; // [esp+28h] [ebp-Ch] BYREF
  int *v24; // [esp+2Ch] [ebp-8h]
  int j; // [esp+30h] [ebp-4h]

  v1 = this;
  v18 = *(float *)(dword_106B31C8 + 12) + 0.2;
  v24 = this;
  sub_100EC4A0(this, v18, 0);
  v2 = v1[278];
  v19[0] = 0;
  v19[1] = 0;
  v20 = 0;
  v22 = 0;
  v3 = v1 + 275;
  v21 = 0;
  sub_100F89E0(v19, 0, v2, 0);
  for ( i = 0; i < v2; ++i )
    *(_DWORD *)(v19[0] + 4 * i) = *(_DWORD *)(*v3 + 4 * i);
  v1[278] = 0;
  result = 1;
  for ( j = 1; result <= *(_DWORD *)(dword_106B31C8 + 20); j = result )
  {
    v6 = sub_1025FB50(j);
    v7 = v6;
    if ( v6 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 264))(v6) && sub_100D82D0(v1, v7) )
    {
      v23 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( (int)sub_10319100(&v23) < 0 )
        (*(void (__thiscall **)(int *, int))(*v1 + 376))(v1, v7);
      v8 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      v9 = v3[3];
      v10 = *v8;
      v11 = v3[1];
      if ( v9 + 1 > v11 )
        sub_102ABFC0(v9 - v11 + 1);
      ++v3[3];
      v12 = *v3;
      v13 = v3[3] - v9 - 1;
      v3[4] = *v3;
      if ( v13 > 0 )
        memcpy((void *)(v12 + 4 * v9 + 4), (const void *)(v12 + 4 * v9), 4 * v13);
      v14 = (_DWORD *)(*v3 + 4 * v9);
      if ( v14 )
        *v14 = v10;
      v1 = v24;
    }
    result = j + 1;
  }
  for ( k = 0; k < v21; ++k )
  {
    result = *(_DWORD *)(v19[0] + 4 * k);
    if ( result != -1 )
    {
      v16 = &off_1061BE18[4 * (*(_DWORD *)(v19[0] + 4 * k) & 0xFFF) + 1];
      result = (unsigned int)result >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(v19[0] + 4 * k) & 0xFFF) + 2] == result )
      {
        v17 = *v16;
        if ( *v16 )
        {
          v23 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(*v16);
          result = sub_10319100(&v23);
          if ( result < 0 )
            result = (*(int (__thiscall **)(int *, int))(*v24 + 384))(v24, v17);
        }
      }
    }
  }
  if ( v20 >= 0 )
  {
    result = v19[0];
    if ( v19[0] )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19[0]);
  }
  return result;
}
