char *__thiscall sub_1029CCC0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // eax
  int v10; // ecx
  int (__thiscall *v11)(int); // eax
  int v12; // eax
  int v13; // eax

  *(float *)(this + 28) = *(float *)(dword_106B31C8 + 12) + 10.0;
  v2 = *(_DWORD *)(this + 20);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1644))(*(_DWORD *)(this + 4), 1003);
        v4 = *(_DWORD *)(this + 20);
        if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v4 >> 12 )
          v5 = 0;
        else
          v5 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
        *(_BYTE *)(v5 + 1381) = 0;
        v6 = *(_DWORD *)(this + 20);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
        v8 = *(_DWORD *)(this + 4);
        if ( sub_102CA230(v7) == v8 )
        {
          v9 = *(_DWORD *)(this + 20);
          if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v9 >> 12 )
            v10 = 0;
          else
            v10 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
          sub_102CDC40(v10);
        }
        sub_1029C740((void *)this, 0xFFFFFFFF);
      }
    }
  }
  *(_DWORD *)(*(_DWORD *)(this + 4) + 2792) = 3;
  v11 = *(int (__thiscall **)(int))(*(_DWORD *)this + 52);
  *(_BYTE *)(this + 24) = 0;
  v12 = v11(this);
  v13 = sub_1007DB30((_DWORD *)(v12 + 52), 100000);
  return sub_10023CB0(*(char **)(this + 4), v13);
}
