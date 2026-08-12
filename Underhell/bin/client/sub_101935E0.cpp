int __thiscall sub_101935E0(void *this, int a2, int a3)
{
  int v3; // ebx
  int (__fastcall *v4)(void *); // edx
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // esi
  int v9; // ecx
  int *v10; // ecx
  int *v11; // edx
  int v12; // edx
  _DWORD *v13; // esi
  int v14; // edi
  int v15; // edx
  _DWORD *v16; // ecx
  unsigned int v17; // esi
  int v18; // ebx
  int v19; // edi
  int v20; // edi
  int v21; // eax
  int v22; // eax
  _BYTE v23[12]; // [esp+4h] [ebp-10h] BYREF
  int v24; // [esp+10h] [ebp-4h]

  v3 = (int)this;
  v4 = *(int (__fastcall **)(void *))(*(_DWORD *)this + 8);
  v24 = (int)this;
  if ( a2 != *(_DWORD *)(v4(this) + 20) )
    return sub_100358E0(v3, a2, a3);
  result = a3;
  v6 = *(_DWORD *)(a3 + 20);
  if ( v6 < 8 )
  {
    v13 = *(_DWORD **)(a3 + 28);
    v14 = *(_DWORD *)(a3 + 16);
    v15 = 8 - v6;
    v16 = *(_DWORD **)(a3 + 24);
    if ( v16 == v13 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_BYTE *)(a3 + 4) = 1;
    }
    else
    {
      if ( v16 > v13 )
      {
        *(_BYTE *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = 0;
        goto LABEL_17;
      }
      *(_DWORD *)(a3 + 16) = *v16;
    }
    *(_DWORD *)(a3 + 24) = v16 + 1;
LABEL_17:
    if ( *(_BYTE *)(a3 + 4) )
    {
      v8 = 0;
    }
    else
    {
      v17 = *(_DWORD *)(a3 + 16);
      v18 = (v17 & dword_1039BF80[v15]) << *(_DWORD *)(a3 + 20);
      *(_DWORD *)(a3 + 20) = 32 - v15;
      v19 = v18 | v14;
      v3 = v24;
      *(_DWORD *)(a3 + 16) = v17 >> v15;
      v8 = v19;
    }
    goto LABEL_20;
  }
  v7 = *(_DWORD *)(a3 + 16);
  v8 = (unsigned __int8)v7;
  v9 = v6 - 8;
  *(_DWORD *)(a3 + 20) = v9;
  if ( v9 )
  {
    *(_DWORD *)(a3 + 16) = v7 >> 8;
  }
  else
  {
    v10 = *(int **)(a3 + 24);
    v11 = *(int **)(a3 + 28);
    *(_DWORD *)(a3 + 20) = 32;
    if ( v10 == v11 )
    {
      *(_DWORD *)(a3 + 20) = 1;
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)(a3 + 24) = v10 + 1;
    }
    else if ( v10 <= v11 )
    {
      v12 = *v10;
      *(_DWORD *)(a3 + 24) = v10 + 1;
      *(_DWORD *)(a3 + 16) = v12;
    }
    else
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 16) = 0;
    }
  }
LABEL_20:
  switch ( v8 )
  {
    case 1:
      result = sub_1022C690(v23);
      *(float *)(v3 + 3408) = 3.0;
      *(float *)(v3 + 3412) = 0.0;
      break;
    case 2:
      sub_1022C690(v23);
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)(v3 + 3384) + 40))(v3 + 3384, v23);
      v20 = *(_DWORD *)(v3 + 3384);
      v21 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(v3 - 4) + 140))(v3 - 4, "BellyGun");
      v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 36))(v3, v21);
      result = (*(int (__thiscall **)(int, int))(v20 + 44))(v3 + 3384, v22);
      *(float *)(v3 + 3412) = 3.0;
      break;
    case 3:
      return (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 3384) + 48))(v3 + 3384);
  }
  return result;
}
