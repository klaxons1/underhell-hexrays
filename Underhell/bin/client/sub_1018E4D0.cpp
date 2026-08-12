int __cdecl sub_1018E4D0(int a1)
{
  int v1; // ecx
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ecx
  int *v5; // eax
  int *v6; // ecx
  int v7; // ecx
  _DWORD *v8; // edx
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // ecx
  unsigned int v12; // edx
  int v13; // ebx
  unsigned int v14; // edx
  int v15; // eax
  int v16; // edi
  _BYTE v18[256]; // [esp+Ch] [ebp-100h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 < 8 )
  {
    v8 = *(_DWORD **)(a1 + 28);
    v9 = *(_DWORD *)(a1 + 16);
    v10 = 8 - v1;
    v11 = *(_DWORD **)(a1 + 24);
    if ( v11 == v8 )
    {
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 4) = 1;
    }
    else
    {
      if ( v11 > v8 )
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
        goto LABEL_16;
      }
      *(_DWORD *)(a1 + 16) = *v11;
    }
    *(_DWORD *)(a1 + 24) = v11 + 1;
LABEL_16:
    if ( *(_BYTE *)(a1 + 4) )
    {
      v2 = 0;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 16);
      v13 = (v12 & dword_1039BF80[v10]) << *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = 32 - v10;
      v14 = v12 >> v10;
      v2 = v13 | v9;
      *(_DWORD *)(a1 + 16) = v14;
    }
    goto LABEL_19;
  }
  v2 = *(_DWORD *)(a1 + 16);
  v3 = (unsigned __int8)v2;
  v4 = v1 - 8;
  *(_DWORD *)(a1 + 20) = v4;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 16) = v2 >> 8;
    v2 = (unsigned __int8)v2;
  }
  else
  {
    v5 = *(int **)(a1 + 24);
    v6 = *(int **)(a1 + 28);
    *(_DWORD *)(a1 + 20) = 32;
    if ( v5 == v6 )
    {
      *(_DWORD *)(a1 + 24) = v5 + 1;
      *(_DWORD *)(a1 + 20) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      v2 = v3;
    }
    else
    {
      if ( v5 <= v6 )
      {
        v7 = *v5;
        *(_DWORD *)(a1 + 24) = v5 + 1;
        *(_DWORD *)(a1 + 16) = v7;
      }
      else
      {
        *(_BYTE *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
      v2 = v3;
    }
  }
LABEL_19:
  v15 = sub_10036480(v2);
  v16 = __RTDynamicCast(
          v15,
          0,
          (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
          (int)&C_BaseHLPlayer `RTTI Type Descriptor',
          0);
  sub_1022C220(v18, 254, 0, 0);
  if ( v16 )
    return (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v16 + 1084))(v16, v18);
  else
    return Msg("__MsgFunc_EntityNames did not find player!!!\n");
}
