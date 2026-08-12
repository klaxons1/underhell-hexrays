int __usercall sub_1021C690@<eax>(int a1@<edi>, int a2, int a3, __int16 a4, __int16 a5, int a6, _BYTE *a7, int a8)
{
  int result; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int *v11; // ecx
  int *v12; // ecx
  int v13; // edi
  int *v14; // ecx
  float v15; // [esp+4h] [ebp-4h]

  result = sub_101811E0("keyframe_rope", -1);
  v9 = result;
  if ( result )
  {
    sub_1021B2B0(result, a2, a4);
    sub_1021B330(v9, a3, a5);
    *(_BYTE *)(v9 + 852) = 0;
    v10 = *(_DWORD *)(v9 + 804) & 0xFFFFFFBF;
    if ( *(_DWORD *)(v9 + 804) != v10 )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(v9 + 24);
        if ( v11 )
          sub_100194B0(v11, 804);
      }
      *(_DWORD *)(v9 + 804) = v10;
    }
    sub_1021C0B0(v9);
    sub_1021C000(v9, a1, a7);
    v15 = (float)a6;
    if ( *(_DWORD *)(v9 + 816) != LODWORD(v15) )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v12 = *(int **)(v9 + 24);
        if ( v12 )
          sub_100194B0(v12, 816);
      }
      *(float *)(v9 + 816) = v15;
    }
    if ( a8 <= 10 )
    {
      v13 = 2;
      if ( a8 >= 2 )
        v13 = a8;
    }
    else
    {
      v13 = 10;
    }
    if ( *(_DWORD *)(v9 + 824) != v13 )
    {
      result = v9;
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
        *(_DWORD *)(v9 + 824) = v13;
        return result;
      }
      v14 = *(int **)(v9 + 24);
      if ( v14 )
        sub_100194B0(v14, 824);
      *(_DWORD *)(v9 + 824) = v13;
    }
    return v9;
  }
  return result;
}
