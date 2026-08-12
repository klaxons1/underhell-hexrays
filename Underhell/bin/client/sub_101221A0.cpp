char __thiscall sub_101221A0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  int *v12; // eax

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 8) + 36))(a2 + 8);
  if ( v3 < 0 )
    return 0;
  v5 = this[5];
  v6 = 0;
  if ( v5 > 0 )
  {
    v7 = (_DWORD *)this[2];
    while ( *v7 != v3 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_9;
    }
    if ( v6 != -1 )
      return 0;
  }
LABEL_9:
  v8 = this[3];
  v9 = this[5];
  if ( v5 + 1 > v8 )
    sub_1010AFF0(this + 2, v5 - v8 + 1);
  ++this[5];
  v10 = this[2];
  v11 = this[5] - v9 - 1;
  this[6] = v10;
  if ( v11 > 0 )
    memcpy((void *)(v10 + 4 * v9 + 4), (const void *)(v10 + 4 * v9), 4 * v11);
  v12 = (int *)(this[2] + 4 * v9);
  if ( v12 )
    *v12 = v3;
  return 1;
}
