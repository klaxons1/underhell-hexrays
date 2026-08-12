_DWORD *__thiscall sub_1026D2C0(int this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int i; // esi
  int v8; // ecx
  int *v9; // esi
  _DWORD *result; // eax
  int v11; // edi
  int v12; // ebp
  int v13; // ecx
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  _DWORD *v23; // [esp+Ch] [ebp-8h]
  _DWORD *v24; // [esp+10h] [ebp-4h]

  v4 = *(_DWORD *)(this + 244);
  if ( v4 != -1 )
  {
    v5 = *(_DWORD *)(this + 232);
    do
    {
      v6 = 12 * v4;
      sub_10236200(*(int (__thiscall ****)(void *, int, int))(v5 + v6), 0, 0, 0, 0);
      v5 = *(_DWORD *)(this + 232);
      v4 = *(_DWORD *)(v5 + v6 + 8);
    }
    while ( v4 != -1 );
  }
  for ( i = 0; i < *(_DWORD *)(this + 340); ++i )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(this + 328) + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 124))(v8, 0);
  }
  v9 = (int *)(this + 268);
  *(_DWORD *)(this + 280) = 0;
  v24 = 0;
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 228) + 772))(*(_DWORD *)(this + 228));
  v11 = (int)result;
  v23 = result;
  while ( v11 < *(_DWORD *)(this + 300) )
  {
    v12 = *(_DWORD *)(*(_DWORD *)(this + 288) + 4 * v11);
    v13 = *(_DWORD *)(*(_DWORD *)(this + 232) + 12 * v12);
    result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 128))(v13);
    if ( (_BYTE)result )
    {
      v14 = *(_DWORD *)(this + 320);
      v15 = *(_DWORD *)(this + 212);
      v16 = 0;
      if ( v14 > 0 )
      {
        v17 = *(_DWORD **)(this + 308);
        while ( *v17 != v12 )
        {
          ++v16;
          ++v17;
          if ( v16 >= v14 )
            goto LABEL_16;
        }
        if ( v16 != -1 )
          v15 += 3;
      }
LABEL_16:
      result = (_DWORD *)((char *)v24 + v15);
      if ( (int)v24 + v15 > a3 || a2 > 0 && *(_DWORD *)(this + 280) >= a2 )
        return result;
      v18 = *(_DWORD *)(this + 280);
      v24 = result;
      v19 = *(_DWORD *)(this + 272);
      if ( v18 + 1 > v19 )
        sub_1010AFF0((_DWORD *)(this + 268), v18 - v19 + 1);
      ++*(_DWORD *)(this + 280);
      v20 = *v9;
      v21 = *(_DWORD *)(this + 280) - v18 - 1;
      v22 = *(_DWORD *)(this + 280) - v18 == 1;
      *(_DWORD *)(this + 284) = *(_DWORD *)(this + 268);
      if ( v21 >= 0 && !v22 )
        memcpy((void *)(v20 + 4 * v18 + 4), (const void *)(v20 + 4 * v18), 4 * v21);
      result = (_DWORD *)(*v9 + 4 * v18);
      if ( result )
        *result = v12;
      v23 = (_DWORD *)((char *)v23 + 1);
      v11 = (int)v23;
    }
    else
    {
      v23 = (_DWORD *)++v11;
    }
  }
  return result;
}
