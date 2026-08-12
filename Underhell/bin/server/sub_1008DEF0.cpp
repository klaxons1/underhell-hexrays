int __thiscall sub_1008DEF0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  int v11; // edx
  int v12; // edi
  float *v13; // esi
  void *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  void *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23[15]; // [esp+1Ch] [ebp-44h] BYREF
  int v24; // [esp+58h] [ebp-8h]
  _DWORD *v25; // [esp+5Ch] [ebp-4h]
  int v26; // [esp+74h] [ebp+14h]

  v8 = this[1];
  v9 = 0;
  memset(v23, 0, 0x38u);
  v10 = a5;
  v23[0] = 0;
  v11 = *(_DWORD *)(v8 + 252) >> 11;
  v25 = *(_DWORD **)(v8 + 2600);
  v24 = 0;
  if ( (v11 & 1) != 0 )
    sub_100DAE60(v8);
  sub_1007C550(v25, a7, (float *)(v8 + 580), (float *)(a2 + 12 * a5), 33701899, a8, 100.0, 0, (float *)v23);
  if ( v23[0] < 0 )
    return 0;
  v26 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      ++v26;
      v12 = v10 + a4;
      if ( v10 + a4 <= a3 - 1 )
      {
        if ( v12 < 0 )
          v12 = a3 - 1;
      }
      else
      {
        v12 = 0;
      }
      v13 = (float *)(a2 + 12 * v10);
      sub_1007C550(v25, a7, v13, (float *)(a2 + 12 * v12), 33701899, a8, 100.0, 0, (float *)v23);
      if ( v23[0] < 0 )
        break;
      v14 = (void *)sub_1042FCC0(48);
      if ( v9 )
      {
        if ( v14 )
          v15 = sub_100B9A20(v14, (int)v13, 0.0, a7, 33, -1);
        else
          v15 = 0;
        v16 = *(_DWORD *)(v9 + 40);
        if ( v16 )
          *(_DWORD *)(v16 + 44) = 0;
        *(_DWORD *)(v9 + 40) = v15;
        if ( v15 )
        {
          v17 = *(_DWORD *)(v15 + 44);
          if ( v17 )
            *(_DWORD *)(v17 + 40) = 0;
          *(_DWORD *)(*(_DWORD *)(v9 + 40) + 44) = v9;
        }
        v9 = v15;
      }
      else if ( v14 )
      {
        v9 = sub_100B9A20(v14, (int)v13, 0.0, a7, 1, -1);
        v24 = v9;
      }
      else
      {
        v9 = 0;
        v24 = 0;
      }
      if ( v12 == a6 )
      {
        v19 = (void *)sub_1042FCC0(48);
        if ( v19 )
          v20 = sub_100B9A20(v19, a2 + 12 * a6, 0.0, a7, 1, -1);
        else
          v20 = 0;
        v21 = *(_DWORD *)(v9 + 40);
        if ( v21 )
          *(_DWORD *)(v21 + 44) = 0;
        *(_DWORD *)(v9 + 40) = v20;
        if ( v20 )
        {
          v22 = *(_DWORD *)(v20 + 44);
          if ( v22 )
            *(_DWORD *)(v22 + 40) = 0;
          *(_DWORD *)(*(_DWORD *)(v9 + 40) + 44) = v9;
        }
        return v24;
      }
      v10 = v12;
      if ( v26 >= a3 )
        return v24;
    }
    if ( v9 )
      sub_100B9C00(v9);
    return 0;
  }
  return v24;
}
