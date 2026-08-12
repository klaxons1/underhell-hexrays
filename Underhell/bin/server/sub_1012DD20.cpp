int *__thiscall sub_1012DD20(int *this)
{
  _DWORD *v1; // esi
  int *result; // eax
  _BYTE *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edi

  v1 = this + 1;
  this[4] = 0;
  if ( this[3] >= 0 )
  {
    if ( *v1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v1);
      *v1 = 0;
    }
    v1[1] = 0;
  }
  v1[4] = *v1;
  result = (int *)dword_106AE3E4;
  if ( dword_106AE3E4 )
    v3 = *(_BYTE **)dword_106AE3E4;
  else
    v3 = 0;
  if ( v3 )
  {
    do
    {
      if ( (v3[258] & 1) != 0 && (v3[252] & 1) == 0 )
      {
        v4 = v1[3];
        v5 = v1[1];
        if ( v4 + 1 > v5 )
          sub_102ABFC0(v4 - v5 + 1);
        ++v1[3];
        v6 = *v1;
        v7 = v1[3] - v4 - 1;
        v1[4] = *v1;
        if ( v7 > 0 )
          memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
        v8 = (_DWORD *)(*v1 + 4 * v4);
        if ( v8 )
          *v8 = v3;
      }
      result = &dword_1069E3E4[4 * (*(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 8))(v3) & 0xFFF)];
      if ( !result )
        break;
      result = (int *)result[3];
      if ( !result )
        break;
      v3 = (_BYTE *)*result;
    }
    while ( *result );
  }
  return result;
}
