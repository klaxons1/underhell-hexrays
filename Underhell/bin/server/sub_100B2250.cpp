_DWORD *__thiscall sub_100B2250(int this, int a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // ecx
  int i; // esi
  int v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // edx
  int *v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *result; // eax
  int v15; // edx
  int v16; // esi
  _DWORD *v17; // ebx
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  bool v25; // zf
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // ebx
  _DWORD *v29; // eax
  BOOL (__cdecl *v30)(_DWORD *, _DWORD *); // [esp+Ch] [ebp-20h] BYREF
  int v31; // [esp+10h] [ebp-1Ch]
  int v32; // [esp+14h] [ebp-18h]
  int v33; // [esp+18h] [ebp-14h]
  int v34; // [esp+1Ch] [ebp-10h]
  int v35; // [esp+20h] [ebp-Ch]
  int v36; // [esp+24h] [ebp-8h]
  int v37; // [esp+28h] [ebp-4h] BYREF

  if ( *(float *)(this + 132) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v3 = 0;
    if ( *(_DWORD *)(this + 124) )
    {
      *(_DWORD *)(this + 108) = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0xFFFF;
      v35 = -1;
      v36 = 0;
      v30 = sub_1005D140;
      if ( *(int *)(this + 72) > 0 )
      {
        v4 = (_DWORD *)(this + 8);
        do
        {
          if ( *v4 == -1 || off_1061BE18[4 * (*v4 & 0xFFF) + 2] != *v4 >> 12 )
            v5 = 0;
          else
            v5 = off_1061BE18[4 * (*v4 & 0xFFF) + 1];
          v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5);
          if ( v37 && sub_10055120(&v30, (int)&v37) == -1 )
            sub_10056C80((int)&v30, (int)&v37);
          ++v3;
          ++v4;
        }
        while ( v3 < *(_DWORD *)(this + 72) );
      }
      for ( i = *(_DWORD *)(this + 124) - 1; i >= 0; --i )
      {
        v7 = *(_DWORD *)(this + 112);
        v8 = *(_DWORD *)(v7 + 8 * i);
        v9 = (_DWORD *)(v7 + 8 * i);
        if ( v8 != -1 )
        {
          v10 = &off_1061BE18[4 * (*(_DWORD *)(v7 + 8 * i) & 0xFFF) + 1];
          if ( v10[1] == v8 >> 12 )
          {
            if ( *v10 )
            {
              v11 = *v9 == -1 || off_1061BE18[4 * (*v9 & 0xFFF) + 2] != *v9 >> 12
                  ? 0
                  : off_1061BE18[4 * (*v9 & 0xFFF) + 1];
              v37 = v11;
              if ( sub_10055120(&v30, (int)&v37) != -1 )
                continue;
            }
          }
        }
        v12 = *(_DWORD *)(this + 124);
        if ( v12 > 0 )
        {
          v13 = *(_DWORD *)(this + 112);
          *(_DWORD *)(v13 + 8 * i) = *(_DWORD *)(v13 + 8 * v12 - 8);
          *(_DWORD *)(v13 + 8 * i + 4) = *(_DWORD *)(v13 + 8 * v12 - 4);
          --*(_DWORD *)(this + 124);
        }
      }
      sub_100552F0((int)&v30);
      if ( v33 >= 0 && v31 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v31);
    }
    *(float *)(this + 132) = *(float *)(dword_106B31C8 + 12) + 30.0;
  }
  result = *(_DWORD **)(this + 108);
  if ( !result
    || (*result == -1 || off_1061BE18[4 * (*result & 0xFFF) + 2] != *result >> 12
      ? (v15 = 0)
      : (v15 = off_1061BE18[4 * (*result & 0xFFF) + 1]),
        v15 != a2) )
  {
    v16 = 0;
    if ( *(int *)(this + 124) <= 0 )
    {
LABEL_43:
      *(_DWORD *)(this + 108) = 0;
      v19 = *(_DWORD *)(this + 124);
      v20 = *(_DWORD *)(this + 116);
      if ( v19 + 1 > v20 )
        sub_10226330(v19 - v20 + 1);
      ++*(_DWORD *)(this + 124);
      v21 = *(_DWORD *)(this + 112);
      v22 = *(_DWORD *)(this + 124) - v19 - 1;
      *(_DWORD *)(this + 128) = v21;
      if ( v22 > 0 )
        memcpy((void *)(v21 + 8 * v19 + 8), (const void *)(v21 + 8 * v19), 8 * v22);
      v23 = *(_DWORD *)(this + 112);
      v24 = 8 * v19;
      v25 = 8 * v19 + v23 == 0;
      v26 = 8 * v19 + v23;
      v37 = 8 * v19;
      if ( !v25 )
      {
        v25 = v26 == -4;
        v27 = (_DWORD *)(v26 + 4);
        *(v27 - 1) = -1;
        if ( !v25 )
          *v27 = 0;
      }
      v28 = (_DWORD *)(v24 + *(_DWORD *)(this + 112));
      if ( a2 )
      {
        v29 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
        v24 = v37;
        *v28 = *v29;
      }
      else
      {
        *v28 = -1;
      }
      result = (_DWORD *)(v24 + *(_DWORD *)(this + 112));
      *(_DWORD *)(this + 108) = result;
    }
    else
    {
      v17 = *(_DWORD **)(this + 112);
      while ( 1 )
      {
        v18 = *v17 == -1 || off_1061BE18[4 * (*v17 & 0xFFF) + 2] != *v17 >> 12
            ? 0
            : off_1061BE18[4 * (*v17 & 0xFFF) + 1];
        if ( v18 == a2 )
          break;
        ++v16;
        v17 += 2;
        if ( v16 >= *(_DWORD *)(this + 124) )
          goto LABEL_43;
      }
      result = (_DWORD *)(*(_DWORD *)(this + 112) + 8 * v16);
      *(_DWORD *)(this + 108) = result;
    }
  }
  return result;
}
