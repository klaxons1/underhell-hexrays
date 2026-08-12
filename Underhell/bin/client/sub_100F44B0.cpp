char __userpurge sub_100F44B0@<al>(int a1@<ebp>, int a2, int a3, int a4, int a5, int a6, char a7)
{
  unsigned int *v7; // ecx
  char result; // al
  unsigned int v9; // ecx
  DWORD CurrentThreadId; // ecx
  int (__thiscall *v11)(_DWORD *); // edx
  float *v12; // eax
  int (__thiscall *v13)(_DWORD *); // edx
  float *v14; // eax
  _DWORD *v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // esi
  bool v19; // zf
  _DWORD *v20; // esi
  int v21; // [esp-3B0h] [ebp-3BCh] BYREF
  _BYTE v22[88]; // [esp-1B0h] [ebp-1BCh] BYREF
  _BYTE v23[88]; // [esp-158h] [ebp-164h] BYREF
  float v24[20]; // [esp-100h] [ebp-10Ch] BYREF
  float v25[20]; // [esp-B0h] [ebp-BCh] BYREF
  _BYTE v26[48]; // [esp-60h] [ebp-6Ch] BYREF
  float v27[3]; // [esp-30h] [ebp-3Ch] BYREF
  float v28[3]; // [esp-24h] [ebp-30h] BYREF
  float v29[3]; // [esp-18h] [ebp-24h] BYREF
  _DWORD *v30; // [esp-Ch] [ebp-18h]
  _DWORD *v31; // [esp-8h] [ebp-14h]
  char v32; // [esp-2h] [ebp-Eh]
  char v33; // [esp-1h] [ebp-Dh]
  int v34; // [esp+0h] [ebp-Ch]
  void *v35; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v34 = a1;
  v35 = retaddr;
  v7 = *(unsigned int **)(a2 + 68 * a3 + 148);
  result = 0;
  v33 = 0;
  if ( !v7 )
    return result;
  v9 = *v7;
  if ( v9 == -1 )
    return result;
  if ( *((_DWORD *)off_103DCD74 + 4 * (v9 & 0xFFF) + 2) != v9 >> 12 )
    return result;
  v31 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v9 & 0xFFF) + 1);
  if ( !v31 )
    return result;
  CurrentThreadId = GetCurrentThreadId();
  if ( CurrentThreadId != dword_10435DF4 && _InterlockedCompareExchange(&dword_10435DF4, CurrentThreadId, 0) )
  {
    _mm_pause();
    CThreadFastMutex::Lock(&dword_10435DF4, CurrentThreadId, 0);
  }
  else
  {
    ++dword_10435DF8;
  }
  v30 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v31 + 164))(v31);
  v11 = *(int (__thiscall **)(_DWORD *))(v31[88] + 4);
  v32 = 0;
  v12 = (float *)v11(v31 + 88);
  v28[0] = *v12;
  v28[1] = v12[1];
  v13 = *(int (__thiscall **)(_DWORD *))(v31[88] + 8);
  v28[2] = v12[2];
  v14 = (float *)v13(v31 + 88);
  v29[0] = *v14;
  v29[1] = v14[1];
  v29[2] = v14[2];
  sub_10037F50((int)v31);
  qmemcpy(v26, v31 + 165, sizeof(v26));
  sub_101ED8C0(&a4, v26, v27);
  if ( sub_100904A0(v27, v28, v29) )
  {
    v32 = 1;
    if ( a7 )
    {
      v33 = 1;
      goto LABEL_23;
    }
  }
  v15 = v30;
  if ( v30 && v32 )
  {
    if ( sub_10028810((int)v30, &v21) )
    {
      v16 = *(_DWORD *)dword_10413178;
      v17 = (*(int (__thiscall **)(_DWORD *))(v15[1] + 36))(v15 + 1);
      v18 = (*(int (__thiscall **)(int, int))(v16 + 112))(dword_10413178, v17);
      if ( v18 )
      {
        if ( v18 + *(_DWORD *)(v18 + 176) + 12 * sub_10025760(v15) )
        {
          sub_1000E430(v24, (float *)&a4, (float *)&a4);
          (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
            dword_104131A0,
            v24,
            -1,
            v31,
            v23);
          v19 = v23[55] == 0;
          goto LABEL_21;
        }
      }
    }
  }
  else
  {
    v20 = v31;
    if ( sub_10034820(v31) && v32 )
    {
      sub_1000E430(v25, (float *)&a4, (float *)&a4);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_104131A0 + 8))(
        dword_104131A0,
        v25,
        -1,
        v20,
        v22);
      v19 = v22[55] == 0;
LABEL_21:
      if ( !v19 )
        v33 = 1;
    }
  }
LABEL_23:
  if ( !--dword_10435DF8 )
    _InterlockedExchange(&dword_10435DF4, 0);
  return v33;
}
