int __thiscall sub_1023F7F0(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int (__thiscall **v5)(int, int); // esi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  void (__thiscall *v9)(_DWORD *, int *); // edx
  int (__thiscall ***v10)(_DWORD); // ecx
  int v11; // edi
  int (__thiscall **v12)(int, int); // esi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // edi
  int v16; // eax
  int *v17; // esi
  int v18; // ecx
  int v19; // eax
  bool v20; // zf
  int *v21; // edi
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  int v25; // edi
  int (__thiscall **v26)(int, int, int); // esi
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // eax
  _DWORD *v30; // ebx
  _DWORD *v31; // esi
  int v32; // edi
  int v33; // eax
  int *v34; // esi
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // edi
  int i; // [esp+18h] [ebp-1Ch] BYREF
  int v39; // [esp+1Ch] [ebp-18h]
  int v40; // [esp+20h] [ebp-14h] BYREF
  int v41; // [esp+24h] [ebp-10h]
  int v42; // [esp+28h] [ebp-Ch]
  int v43; // [esp+2Ch] [ebp-8h]
  int v44; // [esp+30h] [ebp-4h]

  result = this[9];
  v3 = 0;
  if ( !*(_DWORD *)(result + 36) )
  {
    v4 = dword_1047CA74;
    v5 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60);
    v6 = (*(int (__thiscall **)(_DWORD *))*this)(this);
    v7 = (*v5)(v4, v6);
    v8 = *(_DWORD *)(this[9] + 56);
    i = v7;
    sub_10258C50(v8, &i);
    v9 = *(void (__thiscall **)(_DWORD *, int *))(*this + 604);
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v9(this, &v40);
    v39 = v43;
    if ( v43 > 0 )
    {
      do
      {
        v10 = *(int (__thiscall ****)(_DWORD))(v40 + 4 * v3);
        if ( v10 )
        {
          v11 = dword_1047CA74;
          v12 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 60);
          v13 = (**v10)(v10);
          i = (*v12)(v11, v13);
        }
        else
        {
          i = -1;
        }
        v14 = (_DWORD *)this[9];
        v15 = v14[14];
        v16 = v14[12];
        v17 = v14 + 11;
        if ( v15 + 1 > v16 )
          sub_102AA460(v15 - v16 + 1);
        ++v17[3];
        v18 = *v17;
        v19 = v17[3] - v15 - 1;
        v20 = v17[3] - v15 == 1;
        v17[4] = *v17;
        if ( v19 >= 0 && !v20 )
          memcpy((void *)(v18 + 4 * v15 + 4), (const void *)(v18 + 4 * v15), 4 * v19);
        v21 = (int *)(*v17 + 4 * v15);
        if ( v21 )
          *v21 = i;
        ++v3;
      }
      while ( v3 < v39 );
    }
    v22 = 0;
    v39 = *(_DWORD *)(this[9] + 56);
    for ( i = 0; i < v39; ++i )
    {
      v23 = *(_DWORD *)(*(_DWORD *)(this[9] + 44) + 4 * v22);
      if ( v23 != -1 )
      {
        v24 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA74 + 64))(dword_1047CA74, v23);
        if ( v24 )
        {
          v25 = dword_1047CA70;
          v26 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
          v27 = sub_10278FB0();
          v28 = (*v26)(v25, v24, v27);
          if ( v28 )
          {
            v29 = (_DWORD *)sub_10229D00(32);
            if ( v29 )
              v30 = sub_10229D20(v29, (int)"DragDrop");
            else
              v30 = 0;
            sub_1022ACE0(v30, "panel", v28);
            (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v28 + 608))(v28, v30);
            v31 = (_DWORD *)this[9];
            v32 = v31[9];
            v33 = v31[7];
            v34 = v31 + 6;
            if ( v32 + 1 > v33 )
              sub_1010AFF0(v34, v32 - v33 + 1);
            ++v34[3];
            v35 = *v34;
            v36 = v34[3] - v32 - 1;
            v20 = v34[3] - v32 == 1;
            v34[4] = *v34;
            if ( v36 >= 0 && !v20 )
              memcpy((void *)(v35 + 4 * v32 + 4), (const void *)(v35 + 4 * v32), 4 * v36);
            v37 = (_DWORD *)(*v34 + 4 * v32);
            if ( v37 )
              *v37 = v30;
          }
        }
      }
      v22 = i + 1;
    }
    result = v40;
    v43 = 0;
    if ( v42 >= 0 )
    {
      if ( v40 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v40);
        result = 0;
        v40 = 0;
      }
      v41 = 0;
    }
    v44 = result;
    if ( v42 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
