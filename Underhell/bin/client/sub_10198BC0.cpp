int __thiscall sub_10198BC0(void *this, int a2, int a3)
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
  int v23; // edx
  _BYTE v24[12]; // [esp+20h] [ebp-10h] BYREF
  int v25; // [esp+2Ch] [ebp-4h]

  v3 = (int)this;
  v4 = *(int (__fastcall **)(void *))(*(_DWORD *)this + 8);
  v25 = (int)this;
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
      v3 = v25;
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
      sub_1022C690(v24);
      v23 = *(_DWORD *)(v3 + 3376);
      *(float *)(v3 + 3400) = 1.25;
      return (*(int (__stdcall **)(_DWORD))(v23 + 52))(4.0);
    case 2:
      sub_1022C690(v24);
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)(v3 + 3376) + 40))(v3 + 3376, v24);
      v20 = *(_DWORD *)(v3 + 3376);
      v21 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(v3 - 4) + 140))(v3 - 4, "BigGun");
      v22 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 36))(v3, v21);
      (*(void (__thiscall **)(int, int))(v20 + 44))(v3 + 3376, v22);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(v3 + 3376) + 52))(v3 + 3376, 1.25);
    case 3:
      return (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 3376) + 48))(v3 + 3376);
  }
  return result;
}
