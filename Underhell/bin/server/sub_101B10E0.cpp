int __cdecl sub_101B10E0(char *String2, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int v6; // eax
  unsigned int *v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  int *v10; // ecx
  int v11; // ecx
  void *v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  int result; // eax
  float *v18; // eax
  unsigned int v19; // eax
  int *v20; // ecx
  float *v21; // eax
  char *v22; // eax
  _DWORD v23[1024]; // [esp+8h] [ebp-1018h] BYREF
  _BYTE v24[12]; // [esp+1008h] [ebp-18h] BYREF
  int v25; // [esp+1014h] [ebp-Ch]
  void *v26; // [esp+1018h] [ebp-8h]
  unsigned int *v27; // [esp+101Ch] [ebp-4h]

  v4 = sub_101B0F10(dword_106B9E30, String2);
  v5 = v4;
  if ( v4
    && (v6 = *(_DWORD *)(v4 + 12), v7 = (unsigned int *)(v5 + 12), v27 = (unsigned int *)(v5 + 12), v6 != -1)
    && off_1061BE18[4 * (v6 & 0xFFF) + 2] == v6 >> 12
    && off_1061BE18[4 * (v6 & 0xFFF) + 1] )
  {
    v8 = a2;
    *(float *)(a2 + 4 * a3 + 36) = *(float *)(v5 + 24);
    if ( *(int *)(v5 + 16) > 0 )
    {
      v9 = *v7;
      if ( *v7 == -1 || (v10 = &off_1061BE18[4 * (*v7 & 0xFFF) + 1], v10[1] != v9 >> 12) )
        v11 = 0;
      else
        v11 = *v10;
      v12 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 208))(v11);
      v26 = v12;
      if ( v12 )
      {
        v13 = sub_1026A890(v27);
        v25 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v13 + 624))(v13, v23, 1024);
        v14 = sub_100BF130((int)v12, *(_DWORD *)(v5 + 16));
        v15 = sub_100C09B0((int)v12, v14);
        if ( v15 < v25 )
        {
          v16 = &v23[v15];
          *(_DWORD *)(a2 + 4 * a3 + 24) = *v16;
          sub_100BD6D0(v26, *(_DWORD *)(v5 + 16), (int)v24, 0, 0, 0);
          return (*(int (__thiscall **)(_DWORD, int, _BYTE *))(*(_DWORD *)*v16 + 224))(*v16, a2 + 12 * a3, v24);
        }
      }
      v8 = a2;
      v7 = v27;
    }
    v18 = (float *)(v8 + 12 * a3);
    *v18 = *(float *)v5;
    v18[1] = *(float *)(v5 + 4);
    v18[2] = *(float *)(v5 + 8);
    v19 = *v7;
    if ( *v7 == -1 || (v20 = &off_1061BE18[4 * (*v7 & 0xFFF) + 1], v20[1] != v19 >> 12) )
    {
      result = MEMORY[0x1A8];
      *(_DWORD *)(v8 + 4 * a3 + 24) = MEMORY[0x1A8];
    }
    else
    {
      result = *(_DWORD *)(*v20 + 424);
      *(_DWORD *)(v8 + 4 * a3 + 24) = result;
    }
  }
  else
  {
    v21 = (float *)(a2 + 12 * a3);
    *v21 = flt_106F1CA8;
    v21[1] = flt_106F1CAC;
    v21[2] = flt_106F1CB0;
    v22 = String2;
    if ( !String2 )
      v22 = (char *)String;
    result = sub_101B60F0(v22, a4);
    *(float *)(a2 + 4 * a3 + 36) = 1.0;
    *(_DWORD *)(a2 + 4 * a3 + 24) = result;
  }
  return result;
}
