_DWORD *__thiscall sub_1044DCF0(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  bool v14; // zf
  int v15; // [esp+8h] [ebp-8h]
  int v16; // [esp+Ch] [ebp-4h]

  result = (_DWORD *)this[13];
  v3 = 0;
  if ( (int)result > 0 )
  {
    v4 = 0;
    v15 = 0;
    v16 = this[13];
    while ( 1 )
    {
      v5 = *(_DWORD **)(v4 + this[10]);
      if ( *v5 != 15 )
      {
        sub_1044C6F0(v5, 15);
        v6 = (_DWORD *)v5[2];
        if ( v6 )
        {
          *v6 = 0;
          v6[1] = 0;
          v6[2] = 0;
          v6[3] = 0;
          v6[4] = 0;
        }
      }
      v7 = (int *)v5[2];
      v8 = v4 + this[10];
      if ( *(_DWORD *)(v8 + 4) == 1 )
        v9 = *(_DWORD *)(v8 + 8);
      else
        v9 = sub_1044D740(this, (_DWORD *)(v8 + 8));
      if ( v9 != -1 )
        v3 = *(_DWORD *)(*this + 20 * v9);
      v10 = v7[3];
      v11 = v7[1];
      if ( v10 + 1 > v11 )
        sub_1044A1C0(v7, v10 - v11 + 1);
      ++v7[3];
      v12 = *v7;
      v13 = v7[3] - v10 - 1;
      v14 = v7[3] - v10 == 1;
      v7[4] = *v7;
      if ( v13 >= 0 && !v14 )
        memcpy((void *)(v12 + 4 * v10 + 4), (const void *)(v12 + 4 * v10), 4 * v13);
      result = (_DWORD *)(*v7 + 4 * v10);
      if ( result )
        *result = v3;
      v15 += 24;
      if ( !--v16 )
        break;
      v4 = v15;
      v3 = 0;
    }
  }
  return result;
}
