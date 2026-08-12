int *__thiscall sub_10219D00(int this, int *a2)
{
  int v3; // ebx
  int *result; // eax
  int v5; // ecx
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax

  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a2[6]);
  if ( !*(_BYTE *)(this + 28) || (result = dword_10646078 > 0 ? 0 : (int *)dword_10646074, result != a2) )
  {
    v5 = *(_DWORD *)(this + 20);
    result = 0;
    if ( v5 <= 0 )
      goto LABEL_9;
    v6 = *(_DWORD **)(this + 8);
    while ( *v6 != v3 )
    {
      result = (int *)((char *)result + 1);
      ++v6;
      if ( (int)result >= v5 )
        goto LABEL_9;
    }
    if ( result == (int *)-1 )
    {
LABEL_9:
      v7 = *(_DWORD *)(this + 12);
      v8 = *(_DWORD *)(this + 20);
      if ( v5 + 1 > v7 )
        sub_102ABFC0(v8 - v7 + 1);
      ++*(_DWORD *)(this + 20);
      v9 = *(_DWORD *)(this + 8);
      v10 = *(_DWORD *)(this + 20) - v8 - 1;
      *(_DWORD *)(this + 24) = v9;
      if ( v10 > 0 )
        memcpy((void *)(v9 + 4 * v8 + 4), (const void *)(v9 + 4 * v8), 4 * v10);
      result = (int *)(*(_DWORD *)(this + 8) + 4 * v8);
      if ( result )
        *result = v3;
    }
  }
  return result;
}
