char __userpurge sub_10058AA0@<al>(int a1@<ecx>, int a2@<edi>, int (__thiscall ***a3)(_DWORD))
{
  int v4; // ecx
  char result; // al
  int (__thiscall ***v6)(_DWORD); // ebx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  char v14; // dl
  unsigned int v15; // eax
  int v16; // eax
  double v17; // st7
  char v18; // cl
  int v19; // edi
  int v20; // eax
  int v21; // eax
  double v22; // st6
  double v23; // st6
  double v24; // st5
  double v25; // st6
  double v26; // st7
  int v27; // ebx
  int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // [esp+4h] [ebp-Ch]
  int v32; // [esp+8h] [ebp-8h]
  float v33; // [esp+8h] [ebp-8h]
  char v34; // [esp+Fh] [ebp-1h]

  v4 = *(_DWORD *)(a1 + 4);
  result = *(_BYTE *)(v4 + 28) & 0xF;
  if ( result == 3 )
  {
    v6 = a3;
    v7 = (**(int (__thiscall ***)(int, int))v4)(v4, a2);
    v32 = v7;
    if ( a3 )
    {
      v8 = (**a3)(a3);
      v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 28))(v8);
      if ( v9 )
      {
        v10 = sub_1000EFC0(v9);
        if ( v10 )
        {
          do
          {
            v11 = __RTDynamicCast(
                    v10,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                    (int)&C_MaterialModifyControl `RTTI Type Descriptor',
                    0);
            if ( v11 && *(_BYTE *)(v11 + 1964) )
            {
              v12 = *(_DWORD *)(v11 + 1968);
              v13 = *(_DWORD *)(v11 + 1972);
              v14 = *(_BYTE *)(v11 + 1976);
              *(float *)(a1 + 44) = *(float *)(v11 + 1980);
              *(_DWORD *)(a1 + 24) = v12;
              *(_DWORD *)(a1 + 28) = v13;
              *(_BYTE *)(a1 + 40) = v14;
              *(_BYTE *)(a1 + 32) = 0;
              *(float *)(a1 + 36) = *((float *)off_103DC81C + 3);
              *(_BYTE *)(v11 + 1964) = 0;
            }
            v15 = *(_DWORD *)(v10 + 332);
            if ( v15 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v10 + 332) & 0xFFF) + 2) != v15 >> 12 )
              v16 = 0;
            else
              v16 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v10 + 332) & 0xFFF) + 1);
            v10 = v16;
          }
          while ( v16 );
          v7 = v32;
        }
        v6 = a3;
      }
    }
    if ( *(_DWORD *)(a1 + 24) == -1 )
    {
      v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
      v17 = *(float *)(a1 + 12);
      v18 = *(_BYTE *)(a1 + 16);
      v19 = v21;
      v31 = v21;
      v20 = v21 - 1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 28) == -1 )
        *(_DWORD *)(a1 + 28) = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
      v17 = *(float *)(a1 + 44);
      v18 = *(_BYTE *)(a1 + 40);
      v19 = *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24) + 1;
      v31 = v19;
      v20 = *(_DWORD *)(a1 + 28) - 1;
    }
    v33 = v17;
    v34 = v18;
    if ( !*(_BYTE *)(a1 + 32) || v18 )
    {
      if ( *(_DWORD *)(a1 + 24) == -1 )
      {
        v22 = ((double (__thiscall *)(int, int (__thiscall ***)(_DWORD)))*(_DWORD *)(*(_DWORD *)a1 + 20))(a1, v6);
        v17 = v33;
      }
      else
      {
        v22 = *(float *)(a1 + 36);
      }
      v23 = *((float *)off_103DC81C + 3) - v22;
      v24 = v23 - *((float *)off_103DC81C + 4);
      if ( v23 < 0.0 )
        v23 = 0.0;
      if ( v24 < 0.0 )
        v24 = 0.0;
      v25 = v17 * v23;
      v26 = v24 * v17;
      v27 = (int)v25 % v19;
      v28 = (int)v26 % v19;
      v29 = *(_DWORD *)(a1 + 24);
      if ( v29 != -1 )
      {
        v27 += v29;
        v28 += v29;
      }
      if ( v28 > v27 )
      {
        *(_BYTE *)(a1 + 32) = 1;
        if ( v34 )
        {
          (*(void (__thiscall **)(int, int (__thiscall ***)(_DWORD)))(*(_DWORD *)a1 + 24))(a1, a3);
        }
        else
        {
          if ( (double)v31 > v26 )
            (*(void (__thiscall **)(int, int (__thiscall ***)(_DWORD)))(*(_DWORD *)a1 + 24))(a1, a3);
          v27 = v19 - 1;
        }
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), v27);
      result = sub_101BC880();
      if ( result )
      {
        v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
        return sub_101BCA60(v30);
      }
    }
    else
    {
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 16))(*(_DWORD *)(a1 + 8), v20);
    }
  }
  return result;
}
