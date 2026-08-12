_DWORD *__thiscall sub_101C7ED0(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *v3; // edx
  int v4; // ebx
  int *v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // eax
  int v13; // [esp+8h] [ebp-Ch]
  _DWORD *v14; // [esp+Ch] [ebp-8h]

  v2 = a2;
  v3 = this;
  v4 = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  *(float *)this = *(float *)a2;
  v5 = this + 2;
  this[1] = *(_DWORD *)(a2 + 4);
  v13 = *(_DWORD *)(a2 + 20);
  if ( v13 > 0 )
  {
    while ( 1 )
    {
      v6 = v5[3];
      v7 = *(_DWORD *)(v2 + 8) + 4 * v4;
      v8 = v5[1];
      v14 = (_DWORD *)v7;
      if ( v6 + 1 > v8 )
      {
        sub_102ABFC0(v6 - v8 + 1);
        v3 = this;
      }
      ++v5[3];
      v9 = *v5;
      v10 = v5[3] - v6 - 1;
      v5[4] = *v5;
      if ( v10 > 0 )
      {
        memcpy((void *)(v9 + 4 * v6 + 4), (const void *)(v9 + 4 * v6), 4 * v10);
        v3 = this;
      }
      v11 = (_DWORD *)(*v5 + 4 * v6);
      if ( v11 )
        *v11 = *v14;
      if ( ++v4 >= v13 )
        break;
      v2 = a2;
    }
  }
  return v3;
}
