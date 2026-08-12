void __userpurge sub_1024B830(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, _DWORD *a4@<esi>, int a5, int a6)
{
  int v6; // eax
  __int16 v8; // ax
  int *v9; // esi
  int v10; // eax
  int v11; // ebx
  char *v12; // ecx
  int v13; // eax
  char v14; // dl
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  int **v22; // ebx
  _DWORD *v25; // [esp-4h] [ebp-804h]
  char v26[2048]; // [esp+0h] [ebp-800h] BYREF
  int v27; // [esp+808h] [ebp+8h]

  if ( *(_BYTE *)(a1 + 4) )
  {
    v25 = a4;
    sub_1024B570(a4);
    v6 = dword_106C68C0;
    dword_106C68CC = 0;
    if ( dword_106C68C8 >= 0 )
    {
      if ( dword_106C68C0 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_106C68C0);
        v6 = 0;
        dword_106C68C0 = 0;
      }
      dword_106C68C4 = 0;
    }
    dword_106C68D0 = v6;
    dword_106C6870 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 56))(a5);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 52))(a5);
    v27 = v8;
    while ( v27 )
    {
      --v27;
      v9 = (int *)(*(int (__thiscall **)(_DWORD, int, int, int, _DWORD *))(*g_pMemAlloc + 4))(
                    g_pMemAlloc,
                    24,
                    a2,
                    a3,
                    v25);
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a5 + 8))(a5, v9, &dword_1064F85C);
      (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)a5 + 80))(a5, v26, 2048, 0);
      v10 = (*(int (__thiscall **)(_DWORD, unsigned int))(*g_pMemAlloc + 4))(g_pMemAlloc, strlen(v26) + 1);
      v11 = v10;
      if ( v10 )
      {
        v12 = v26;
        v13 = v10 - (_DWORD)v26;
        do
        {
          v14 = *v12;
          v12[v13] = *v12;
          ++v12;
        }
        while ( v14 );
        v15 = v11;
      }
      else
      {
        v15 = 0;
      }
      *v9 = v15;
      v16 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, v9[3]);
      v17 = v9[3];
      v25 = 0;
      v9[1] = v16;
      a3 = v17;
      a2 = v16;
      (*(void (__thiscall **)(int))(*(_DWORD *)a5 + 80))(a5);
      v9[5] = 0;
      v18 = dword_106C68CC;
      v19 = dword_106C68CC;
      if ( dword_106C68CC + 1 > dword_106C68C4 )
      {
        sub_102ABFC0(dword_106C68CC - dword_106C68C4 + 1);
        v18 = dword_106C68CC;
      }
      v20 = dword_106C68C0;
      dword_106C68CC = v18 + 1;
      v21 = v18 - v19;
      dword_106C68D0 = dword_106C68C0;
      if ( v21 > 0 )
      {
        memcpy((void *)(dword_106C68C0 + 4 * v19 + 4), (const void *)(dword_106C68C0 + 4 * v19), 4 * v21);
        v20 = dword_106C68C0;
      }
      v22 = (int **)(v20 + 4 * v19);
      if ( v22 )
        *v22 = v9;
    }
  }
}
