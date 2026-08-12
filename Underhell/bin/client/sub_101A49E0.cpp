void __thiscall sub_101A49E0(void *this, int a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  unsigned int v5; // edx
  int v6; // esi
  int *v7; // ecx
  int *v8; // edx
  int v9; // edx
  _DWORD *v10; // esi
  int v11; // edi
  int v12; // edx
  _DWORD *v13; // ecx
  unsigned int v14; // esi
  int v15; // ebx

  v3 = (int)this;
  if ( a2 != *(_DWORD *)((*(int (__fastcall **)(void *))(*(_DWORD *)this + 8))(this) + 20) )
  {
    sub_100358E0(v3, a2, a3);
    return;
  }
  v4 = *(_DWORD *)(a3 + 20);
  if ( v4 < 8 )
  {
    v10 = *(_DWORD **)(a3 + 28);
    v11 = *(_DWORD *)(a3 + 16);
    v12 = 8 - v4;
    v13 = *(_DWORD **)(a3 + 24);
    if ( v13 == v10 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v13 > v10 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
LABEL_17:
        if ( *(_BYTE *)(a3 + 4) )
        {
          v6 = 0;
        }
        else
        {
          v14 = *(_DWORD *)(a3 + 16);
          v15 = (v14 & dword_1039BF80[v12]) << *(_DWORD *)(a3 + 20);
          *(_DWORD *)(a3 + 20) = 32 - v12;
          *(_DWORD *)(a3 + 16) = v14 >> v12;
          v6 = v15 | v11;
        }
        v3 = (int)this;
        goto LABEL_21;
      }
      *(_DWORD *)(a3 + 16) = *v13;
    }
    *(_DWORD *)(a3 + 24) = v13 + 1;
    goto LABEL_17;
  }
  v5 = *(_DWORD *)(a3 + 16);
  v6 = (unsigned __int8)v5;
  *(_DWORD *)(a3 + 20) = v4 - 8;
  if ( v4 == 8 )
  {
    v7 = *(int **)(a3 + 24);
    v8 = *(int **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( v7 == v8 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = v7 + 1;
    }
    else if ( v7 <= v8 )
    {
      v9 = *v7;
      *(_DWORD *)(a3 + 24) = v7 + 1;
      *(_DWORD *)(a3 + 16) = v9;
    }
    else
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 16) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 16) = v5 >> 8;
  }
LABEL_21:
  if ( v6 )
  {
    if ( v6 == 1 )
      sub_100A4FA0((float *)(v3 + 3448), 0.0, 1.0, 1);
  }
  else
  {
    *(_BYTE *)(v3 + 3404) = 1;
    if ( v3 == 8 )
    {
      MEMORY[0xDA4] = -1;
      sub_101A48A0((float *)0xD40);
    }
    else
    {
      *(_DWORD *)(v3 + 3484) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(v3 - 8) + 8))(v3 - 8);
      sub_101A48A0((float *)(v3 + 3384));
    }
  }
}
