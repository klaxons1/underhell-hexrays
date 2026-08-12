int __thiscall sub_1025A630(int this)
{
  int result; // eax
  int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int *v10; // edi
  int v11; // ebp
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  bool v15; // zf
  _DWORD *v16; // ebp
  int (__thiscall *v17)(int, _DWORD, _DWORD); // eax

  result = *(_DWORD *)(this + 316);
  if ( result >= 1 )
  {
    v3 = result / 2;
    v4 = *(_DWORD *)(this + 236) - result / 2;
    if ( *(_DWORD *)(this + 236) - v3 > 0 && v3 > 0 )
      memcpy(*(void **)(this + 224), (const void *)(*(_DWORD *)(this + 224) + 2 * v3), 2 * v4);
    *(_DWORD *)(this + 236) -= v3;
    v5 = sub_102581D0((_DWORD *)this, v3);
    if ( v5 > 0 )
    {
      v6 = *(_DWORD *)(this + 264);
      v7 = v6 + 32 * v5;
      *(_DWORD *)v6 = *(_DWORD *)v7;
      *(_DWORD *)(v6 + 4) = *(_DWORD *)(v7 + 4);
      *(_BYTE *)(v6 + 8) = *(_BYTE *)(v7 + 8);
      *(_WORD *)(v6 + 10) = *(_WORD *)(v7 + 10);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v7 + 12);
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v7 + 16);
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(v7 + 20);
      *(_DWORD *)(v6 + 24) = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v6 + 28) = *(_DWORD *)(v7 + 28);
      *(_DWORD *)(*(_DWORD *)(this + 264) + 28) = 0;
      sub_102588C0((_DWORD *)(this + 264), 1, v5);
    }
    v8 = 1;
    if ( *(int *)(this + 276) > 1 )
    {
      v9 = 32;
      do
      {
        *(_DWORD *)(v9 + *(_DWORD *)(this + 264) + 28) -= v3;
        ++v8;
        v9 += 32;
      }
      while ( v8 < *(_DWORD *)(this + 276) );
    }
    v10 = (int *)(this + 244);
    *(_DWORD *)(this + 256) = 0;
    v11 = *(_DWORD *)(this + 256);
    v12 = *(_DWORD *)(this + 248);
    if ( v11 + 1 > v12 )
      sub_1010AFF0((_DWORD *)(this + 244), v11 - v12 + 1);
    ++*(_DWORD *)(this + 256);
    v13 = *v10;
    v14 = *(_DWORD *)(this + 256) - v11 - 1;
    v15 = *(_DWORD *)(this + 256) - v11 == 1;
    *(_DWORD *)(this + 260) = *(_DWORD *)(this + 244);
    if ( v14 >= 0 && !v15 )
      memcpy((void *)(v13 + 4 * v11 + 4), (const void *)(v13 + 4 * v11), 4 * v14);
    v16 = (_DWORD *)(*v10 + 4 * v11);
    if ( v16 )
      *v16 = 999999;
    v17 = *(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244);
    *(_DWORD *)(this + 288) = 0;
    *(_BYTE *)(this + 284) = 1;
    result = v17(this, 0, 0);
    *(_BYTE *)(this + 292) = 1;
  }
  return result;
}
