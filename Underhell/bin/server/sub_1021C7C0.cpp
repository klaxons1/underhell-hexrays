int __usercall sub_1021C7C0@<eax>(int a1@<edi>, int a2, __int16 a3, int a4, int a5, _BYTE *a6, int a7, char a8)
{
  int result; // eax
  unsigned int v9; // ebx
  int *v10; // ecx
  int *v11; // ecx
  int v12; // eax
  int *v13; // ecx
  int v14; // edi
  int *v15; // ecx
  float v16; // [esp+4h] [ebp-4h] BYREF

  result = sub_101811E0("keyframe_rope", -1);
  v9 = result;
  if ( result )
  {
    sub_1021B2B0(result, a2, a3);
    sub_1021B330(v9, 0, 0);
    *(_BYTE *)(v9 + 852) = 0;
    if ( *(_DWORD *)(v9 + 848) != 1 )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(v9 + 24);
        if ( v10 )
          sub_100194B0(v10, 848);
      }
      *(_DWORD *)(v9 + 848) = 1;
    }
    if ( !a8 )
    {
      v16 = NAN;
      sub_1021B4F0((int *)(v9 + 804), &v16);
    }
    sub_1021C0B0(v9);
    sub_1021C000(v9, a1, a6);
    if ( *(_DWORD *)(v9 + 844) != a4 )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(v9 + 24);
        if ( v11 )
          sub_100194B0(v11, 844);
      }
      *(_DWORD *)(v9 + 844) = a4;
    }
    v12 = *(_DWORD *)(v9 + 816);
    v16 = (float)a5;
    if ( v12 != LODWORD(v16) )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v13 = *(int **)(v9 + 24);
        if ( v13 )
          sub_100194B0(v13, 816);
      }
      *(float *)(v9 + 816) = v16;
    }
    if ( a7 <= 10 )
    {
      v14 = 2;
      if ( a7 >= 2 )
        v14 = a7;
    }
    else
    {
      v14 = 10;
    }
    if ( *(_DWORD *)(v9 + 824) != v14 )
    {
      result = v9;
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
        *(_DWORD *)(v9 + 824) = v14;
        return result;
      }
      v15 = *(int **)(v9 + 24);
      if ( v15 )
        sub_100194B0(v15, 824);
      *(_DWORD *)(v9 + 824) = v14;
    }
    return v9;
  }
  return result;
}
