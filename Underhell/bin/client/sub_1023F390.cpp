_BYTE *__userpurge sub_1023F390@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, char a3, __int16 a4, char a5)
{
  _BYTE *result; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  bool v11; // zf
  int v12; // esi
  int v13; // ebx
  int (__thiscall **v14)(int, _DWORD *, int); // edi
  int v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  char *v21; // eax
  _DWORD *v22; // esi
  int v23; // ebx
  int v24; // edi
  int (__thiscall **v25)(int, int, int); // esi
  int v26; // eax
  int (__thiscall ***v27)(void *, int *, int *); // eax
  int v28; // esi
  int v29; // ebx
  _DWORD *v30; // edi
  int v31; // ecx
  _DWORD *v32; // ebp
  int v33; // esi
  _DWORD *v34; // eax
  int i; // esi
  char v37; // [esp+35h] [ebp-131h]
  int v38; // [esp+36h] [ebp-130h]
  int v39; // [esp+3Ah] [ebp-12Ch] BYREF
  _DWORD *v40; // [esp+3Eh] [ebp-128h]
  int v41; // [esp+42h] [ebp-124h] BYREF
  int v42; // [esp+46h] [ebp-120h] BYREF
  _BYTE *v43; // [esp+4Ah] [ebp-11Ch] BYREF
  int v44; // [esp+4Eh] [ebp-118h]
  int v45; // [esp+52h] [ebp-114h]
  int v46; // [esp+56h] [ebp-110h]
  _BYTE *v47; // [esp+5Ah] [ebp-10Ch]
  int (__thiscall ***v48)(void *, int *, int *); // [esp+5Eh] [ebp-108h]
  int v49; // [esp+62h] [ebp-104h] BYREF
  char Destination[4]; // [esp+66h] [ebp-100h] BYREF
  char v51[252]; // [esp+6Ah] [ebp-FCh] BYREF

  dword_103FCF4C = -1;
  result = (_BYTE *)a1[9];
  if ( !*result || !result[1] )
    return result;
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v42, &v41);
  *(_DWORD *)(a1[9] + 16) = v42;
  *(_DWORD *)(a1[9] + 20) = v41;
  if ( sub_102393B0(&dword_103FCF20) )
  {
    v7 = (_DWORD *)sub_102393B0(&dword_103FCF20);
    sub_1023CC30(v7, (int)a1);
  }
  *(_BYTE *)(a1[9] + 1) = 0;
  v8 = a1[9];
  v9 = *(_DWORD *)(v8 + 36);
  v10 = 0;
  v11 = *(_BYTE *)(v8 + 2) == 0;
  v40 = (_DWORD *)(v8 + 24);
  v38 = v9;
  v48 = 0;
  v37 = 0;
  if ( !v11 )
  {
    sub_102282F0(Destination, "default", 256);
    if ( a3 && sub_10239430((_DWORD *)(a1[9] + 72)) && sub_102393B0((_DWORD *)(a1[9] + 84)) )
    {
      v12 = sub_102393B0((_DWORD *)(a1[9] + 84));
      v40 = (_DWORD *)(*(int (__thiscall **)(int, int, int, _DWORD, int))(*(_DWORD *)v12 + 20))(v12, v42, v41, 0, a2);
      if ( v40 )
      {
        v13 = dword_1047CA70;
        v14 = (int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)dword_1047CA70 + 216);
        v15 = (*(int (__thiscall **)(_DWORD *))(*a1 + 104))(a1);
        v16 = (*v14)(v13, v40, v15);
        if ( v16 )
        {
          v17 = 0;
          v40 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 932))(v12);
          if ( (int)v40 > 0 )
          {
            do
            {
              v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 936))(v12, v17);
              v19 = sub_1026B780(v18);
              if ( v19 == v16 )
              {
                v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 1036))(v19);
                if ( v20 )
                {
                  v21 = (char *)sub_1022B4C0(v20, "command", (int)Locale);
                  if ( v21 )
                  {
                    if ( *v21 )
                      sub_102282F0(v51, v21, 256);
                  }
                }
              }
              ++v17;
            }
            while ( v17 < (int)v40 );
          }
        }
        v9 = v39;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 120))(v12, 1);
      *(_DWORD *)(a1[9] + 84) = -1;
      v10 = 0;
    }
    if ( v9 > 0 )
    {
      do
      {
        v22 = *(_DWORD **)(*v40 + 4 * v10);
        sub_1022ABA0(v22, "command", Destination);
        sub_1022ACA0(v22, "screenx", v42);
        sub_1022ACA0(v22, "screeny", v41);
        ++v10;
      }
      while ( v10 < v9 );
      v10 = 0;
    }
    if ( *(_DWORD *)(a1[9] + 72) != -1 )
    {
      v23 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
              dword_1047CA74,
              *(_DWORD *)(a1[9] + 72));
      if ( v23 )
      {
        v24 = dword_1047CA70;
        v25 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
        v26 = sub_10278FB0();
        v27 = (int (__thiscall ***)(void *, int *, int *))(*v25)(v24, v23, v26);
        v48 = v27;
        if ( v27 && !a5 )
        {
          v49 = v42;
          v39 = v41;
          sub_10236F60(v27, &v49, &v39);
          v28 = 0;
          if ( v38 > 0 )
          {
            v29 = v49;
            do
            {
              v30 = *(_DWORD **)(*v40 + 4 * v28);
              sub_1022ACA0(v30, "x", v29);
              sub_1022ACA0(v30, "y", v39);
              ++v28;
            }
            while ( v28 < v38 );
          }
          v9 = v38;
          v37 = 1;
          v10 = 0;
          goto LABEL_35;
        }
        v9 = v38;
        v10 = 0;
        goto LABEL_34;
      }
      v9 = v38;
      v10 = 0;
    }
    v48 = 0;
LABEL_34:
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a1 + 560))(a1, v40);
  }
LABEL_35:
  *(_BYTE *)(a1[9] + 2) = 0;
  *(_DWORD *)(a1[9] + 56) = 0;
  *(_DWORD *)(a1[9] + 72) = -1;
  v31 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( v9 > 0 )
  {
    do
    {
      v32 = (_DWORD *)(*v40 + 4 * v10);
      v33 = v31;
      if ( v31 + 1 > v44 )
      {
        sub_1010AFF0(&v43, v31 - v44 + 1);
        v31 = v46;
      }
      v46 = ++v31;
      v47 = v43;
      if ( v31 - v33 - 1 > 0 )
      {
        memcpy(&v43[4 * v33 + 4], &v43[4 * v33], 4 * (v31 - v33 - 1));
        v31 = v46;
      }
      v34 = &v43[4 * v33];
      if ( v34 )
      {
        *v34 = *v32;
        v31 = v46;
      }
      ++v10;
    }
    while ( v10 < v9 );
  }
  v40[3] = 0;
  if ( v37 && v48 )
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, int *), _BYTE **))(*v48)[156])(v48, &v43);
  for ( i = 0; i < v9; ++i )
    sub_1022AF00(*(void **)&v43[4 * i]);
  result = v43;
  v46 = 0;
  if ( v45 >= 0 )
  {
    if ( v43 )
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, v43);
      result = 0;
      v43 = 0;
    }
    v44 = 0;
  }
  v47 = result;
  if ( v45 >= 0 )
  {
    if ( result )
      return (_BYTE *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
  }
  return result;
}
