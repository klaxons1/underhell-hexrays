int __usercall sub_1023FB20@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int *a3@<esi>)
{
  _DWORD *v3; // ebp
  int v4; // ecx
  int result; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int (__thiscall **v9)(int, int, int); // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int (__thiscall **v15)(int, int, int); // ebx
  int v16; // eax
  int v17; // ebx
  int (__thiscall *v18)(int, int, int *); // edx
  _DWORD *v19; // ebp
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // esi
  int v24; // ebx
  int v25; // edi
  int (__thiscall **v26)(int, int, int); // esi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v32; // [esp+28h] [ebp-30h]
  int v33; // [esp+2Ch] [ebp-2Ch]
  int v34; // [esp+38h] [ebp-20h] BYREF
  int v35; // [esp+3Ch] [ebp-1Ch]
  int v36; // [esp+40h] [ebp-18h]
  int v37; // [esp+44h] [ebp-14h]
  int v38; // [esp+48h] [ebp-10h]
  int v39; // [esp+4Ch] [ebp-Ch] BYREF
  int v40; // [esp+50h] [ebp-8h]
  int v41; // [esp+54h] [ebp-4h]
  void *retaddr; // [esp+58h] [ebp+0h]

  v3 = a1;
  v4 = a1[55];
  result = v4 - 1;
  v32 = v3;
  v36 = v4;
  v33 = v4 - 1;
  if ( v4 - 1 < 0 )
    goto LABEL_32;
  do
  {
    v6 = *(_DWORD *)(4 * result + v3[52]);
    if ( v6 != -1
      && (v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, v6)) != 0
      && (v8 = dword_1047CA70,
          v9 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216),
          v10 = sub_10278FB0(),
          (v11 = (*v9)(v8, v7, v10)) != 0) )
    {
      v12 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 600))(v11) + 72);
      if ( v12 == -1 )
        goto LABEL_12;
      v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, v12);
      if ( !v13 )
        goto LABEL_12;
      v14 = dword_1047CA70;
      v15 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
      v16 = sub_10278FB0();
      v17 = (*v15)(v14, v13, v16);
      v34 = v17;
      if ( !v17 )
      {
        v3 = v32;
LABEL_12:
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 616))(v11);
        goto LABEL_30;
      }
      v18 = *(int (__thiscall **)(int, int, int *))(*(_DWORD *)v11 + 600);
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v19 = (_DWORD *)(v18(v11, a2, a3) + 44);
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 600))(v11);
      v21 = v19[3];
      v22 = v20 + 24;
      v23 = 0;
      v37 = v22;
      v35 = v21;
      v34 = 0;
      if ( v21 > 0 )
      {
        do
        {
          if ( *(_DWORD *)(*v19 + 4 * v23) == -1
            || (v24 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
                        dword_1047CA74,
                        *(_DWORD *)(*v19 + 4 * v23))) == 0 )
          {
            v28 = 0;
          }
          else
          {
            v25 = dword_1047CA70;
            v26 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
            v27 = sub_10278FB0();
            v28 = (*v26)(v25, v24, v27);
            v23 = v34;
          }
          v34 = v28;
          if ( v28 )
            sub_10258C50(retaddr, &v34);
          v34 = ++v23;
        }
        while ( v23 < v35 );
        v17 = v36;
        v22 = v37;
      }
      a3 = &v39;
      a2 = v22;
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 620))(v17);
      v29 = v37;
      v40 = 0;
      if ( v39 >= 0 )
      {
        if ( v37 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v37);
          v29 = 0;
          v37 = 0;
        }
        v38 = 0;
      }
      v41 = v29;
      if ( v39 >= 0 && v29 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v29);
      v3 = v32;
    }
    else
    {
      if ( v3[55] - v33 - 1 > 0 )
        memcpy((void *)(v3[52] + 4 * v33), (const void *)(v3[52] + 4 * v33 + 4), 4 * (v3[55] - v33 - 1));
      --v3[55];
    }
LABEL_30:
    result = --v33;
  }
  while ( v33 >= 0 );
  v4 = v36;
LABEL_32:
  if ( !v4 )
    return (*(int (__thiscall **)(_DWORD *))(*v3 + 300))(v3);
  return result;
}
