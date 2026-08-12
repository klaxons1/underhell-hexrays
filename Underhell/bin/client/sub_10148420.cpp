int __userpurge sub_10148420@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, float *a4, char a5)
{
  int v6; // eax
  int result; // eax
  int v8; // eax
  int v9; // ebx
  double v10; // st7
  int v11; // esi
  int v12; // eax
  int i; // esi
  int v14; // eax
  int j; // esi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // eax
  _DWORD *v23; // esi
  _DWORD *v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  float v29[29]; // [esp+4Ch] [ebp-A4h] BYREF
  int v30; // [esp+C0h] [ebp-30h] BYREF
  int v31; // [esp+C4h] [ebp-2Ch]
  int v32; // [esp+C8h] [ebp-28h]
  int v33; // [esp+CCh] [ebp-24h]
  int v34; // [esp+D0h] [ebp-20h]
  _DWORD *v35; // [esp+D4h] [ebp-1Ch]
  int v36; // [esp+D8h] [ebp-18h] BYREF
  int v37; // [esp+DCh] [ebp-14h]
  int v38; // [esp+E0h] [ebp-10h]
  int v39; // [esp+E4h] [ebp-Ch]
  int v40; // [esp+E8h] [ebp-8h]
  char v41; // [esp+EFh] [ebp-1h]
  int k; // [esp+FCh] [ebp+Ch]
  bool v43; // [esp+FFh] [ebp+Fh]

  v35 = a1;
  if ( a5 )
  {
    if ( *(_DWORD *)(dword_1043BFF4 + 48) )
    {
      if ( !sub_10042310() || byte_10407398 )
      {
        v6 = a1[68];
        v43 = (!v6 || *(_DWORD *)(*(_DWORD *)(v6 + 28) + 48))
           && (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168) <= *((_DWORD *)off_103DC81C
                                                                                                + 5);
      }
      else
      {
        v43 = 0;
      }
    }
    else
    {
      v43 = 0;
    }
  }
  else
  {
    v43 = 0;
  }
  result = sub_101BC880();
  v41 = result;
  if ( v43 || (_BYTE)result )
  {
    v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3, a2);
    v9 = v8;
    if ( v8 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 80))(v9, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 84))(v9);
    v10 = a4[19];
    qmemcpy(v29, a4, sizeof(v29));
    v29[17] = v10;
    v29[18] = a4[20];
    v29[9] = a4[10];
    v29[22] = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C);
    v11 = *(_DWORD *)dword_10413168;
    v12 = (*(int (__thiscall **)(_DWORD *))(*v35 + 40))(v35);
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, int))(v11 + 152))(dword_10413168, v29, 0, 0, v12);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 44))(v9, 0.0, 0.1);
    v38 = 32;
    v32 = 32;
    v36 = 0;
    v37 = 0;
    v39 = 0;
    v40 = 0;
    v30 = 0;
    v31 = 0;
    v33 = 0;
    v34 = 0;
    (*(void (__thiscall **)(void *, int *, int *))(*(_DWORD *)off_103DCDDC + 64))(off_103DCDDC, &v36, &v30);
    if ( (unsigned __int8)sub_101BC880() && (!v43 || !v41) )
    {
      for ( i = v39 - 1; i >= 0; --i )
      {
        v14 = (***(int (__thiscall ****)(_DWORD))(v36 + 4 * i))(*(_DWORD *)(v36 + 4 * i));
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 28))(v14) )
        {
          if ( !v43 )
            goto LABEL_24;
        }
        else if ( !v41 )
        {
LABEL_24:
          if ( v39 > 0 )
            *(_DWORD *)(v36 + 4 * i) = *(_DWORD *)(v36 + 4 * v39-- - 4);
        }
      }
      for ( j = v33 - 1; j >= 0; --j )
      {
        v16 = (***(int (__thiscall ****)(_DWORD))(v30 + 4 * j))(*(_DWORD *)(v30 + 4 * j));
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 28))(v16) )
        {
          if ( !v43 )
            goto LABEL_32;
        }
        else if ( !v41 )
        {
LABEL_32:
          if ( v33 > 0 )
            *(_DWORD *)(v30 + 4 * j) = *(_DWORD *)(v30 + 4 * v33-- - 4);
        }
      }
    }
    if ( !sub_10144610(&v36) )
      sub_10144610(&v36);
    v17 = v39 - 1;
    for ( k = v39 - 1; v17 >= 0; k = v17 )
    {
      v18 = (***(int (__thiscall ****)(_DWORD))(v36 + 4 * v17))(*(_DWORD *)(v36 + 4 * v17));
      v19 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 28))(v18);
      if ( sub_10014650(v19) == 2 )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 44))(v9, 0.15000001, 0.25);
        v20 = (***(int (__thiscall ****)(_DWORD))(v36 + 4 * v17))(*(_DWORD *)(v36 + 4 * v17));
        v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 20))(v20);
        v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 28))(v20);
        v23 = v35;
        v35[112] = v22;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 40))(v21, 1);
        v23[112] = 0;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 44))(v9, 0.0, 0.1);
        v17 = k;
        if ( v39 > 0 )
          *(_DWORD *)(v36 + 4 * k) = *(_DWORD *)(v36 + 4 * v39-- - 4);
      }
      --v17;
    }
    v24 = v35;
    sub_10143470(v35, &v36, 0);
    sub_10143470(v24, &v30, 0x80000000);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v9 + 44))(v9, 0.0, 1.0);
    v25 = *(_DWORD *)dword_10413168;
    v26 = (*(int (__thiscall **)(_DWORD *))(*v35 + 40))(v35);
    (*(void (__thiscall **)(int, int))(v25 + 160))(dword_10413168, v26);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 80))(v9, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 88))(v9);
    v27 = v30;
    v33 = 0;
    if ( v32 >= 0 )
    {
      if ( v30 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v30);
        v27 = 0;
        v30 = 0;
      }
      v31 = 0;
    }
    v34 = v27;
    if ( v32 >= 0 )
    {
      if ( v27 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v27);
        v30 = 0;
      }
      v31 = 0;
    }
    v28 = v36;
    v39 = 0;
    if ( v38 >= 0 )
    {
      if ( v36 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v36);
        v28 = 0;
        v36 = 0;
      }
      v37 = 0;
    }
    v40 = v28;
    if ( v38 >= 0 )
    {
      if ( v28 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v28);
        v36 = 0;
      }
      v37 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
  }
  return result;
}
