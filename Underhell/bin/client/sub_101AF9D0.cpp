int __thiscall sub_101AF9D0(float *this, int a2)
{
  float *v3; // ebx
  int v4; // esi
  float v5; // ecx
  _DWORD *v6; // edx
  _DWORD *v7; // esi
  _DWORD *v8; // ecx
  int v9; // edi
  int v10; // edx
  _DWORD *v11; // esi
  unsigned int v12; // esi
  int v13; // ebx
  int v14; // edi
  float v15; // eax
  int (__thiscall *v16)(float *, int); // edx
  double v17; // st7
  float v20; // [esp+18h] [ebp+8h]

  v3 = this;
  *((_DWORD *)this + 76) = 1;
  v4 = *(_DWORD *)(a2 + 20);
  if ( v4 >= 32 )
  {
    v5 = *(float *)(a2 + 16);
    *(_DWORD *)(a2 + 20) = v4 - 32;
    if ( v4 == 32 )
    {
      v6 = *(_DWORD **)(a2 + 24);
      v7 = *(_DWORD **)(a2 + 28);
      *(_DWORD *)(a2 + 20) = 32;
      if ( v6 == v7 )
      {
        *(_DWORD *)(a2 + 20) = 1;
        *(_DWORD *)(a2 + 16) = 0;
        *(_DWORD *)(a2 + 24) = v6 + 1;
        v20 = v5;
        goto LABEL_18;
      }
      if ( v6 <= v7 )
      {
        *(_DWORD *)(a2 + 16) = *v6;
        *(_DWORD *)(a2 + 24) = v6 + 1;
        v20 = v5;
        goto LABEL_18;
      }
      *(_BYTE *)(a2 + 4) = 1;
    }
    *(_DWORD *)(a2 + 16) = 0;
    v20 = v5;
    goto LABEL_18;
  }
  v8 = *(_DWORD **)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 16);
  v10 = 32 - v4;
  v11 = *(_DWORD **)(a2 + 28);
  if ( v8 == v11 )
  {
    *(_DWORD *)(a2 + 20) = 1;
    *(_DWORD *)(a2 + 16) = 0;
    *(_BYTE *)(a2 + 4) = 1;
  }
  else
  {
    if ( v8 > v11 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      *(_DWORD *)(a2 + 16) = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a2 + 16) = *v8;
  }
  *(_DWORD *)(a2 + 24) = v8 + 1;
LABEL_15:
  if ( *(_BYTE *)(a2 + 4) )
  {
    v20 = 0.0;
  }
  else
  {
    v12 = *(_DWORD *)(a2 + 16);
    v13 = (v12 & dword_1039BF80[v10]) << *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a2 + 20) = 32 - v10;
    v14 = v13 | v9;
    v3 = this;
    v20 = *(float *)&v14;
    *(_DWORD *)(a2 + 16) = v12 >> v10;
  }
LABEL_18:
  sub_101AF410(v3, 0);
  v15 = *v3;
  v3[85] = v20;
  v3[75] = 0.0;
  v16 = *(int (__thiscall **)(float *, int))(LODWORD(v15) + 44);
  v17 = *((float *)off_103DC81C + 3) + 5.0;
  v3[77] = 0.0;
  v3[73] = v17;
  return v16(v3, 1);
}
