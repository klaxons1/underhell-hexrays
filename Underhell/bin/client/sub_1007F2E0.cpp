int __thiscall sub_1007F2E0(_DWORD *this, int *a2, int *a3)
{
  int result; // eax
  char v5; // bl
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // ebx
  _DWORD *v13; // [esp+0h] [ebp-8h]
  int v14; // [esp+4h] [ebp-4h]
  _BYTE *v15; // [esp+14h] [ebp+Ch]

  result = this[94] - 1;
  v13 = this;
  v14 = result;
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v15 = (_BYTE *)(this[8] + 36 * *(unsigned __int16 *)(this[91] + 2 * result));
      (*(void (**)(void))(**(_DWORD **)v15 + 48))();
      v5 = v15[25];
      if ( v5 == 10 || v5 == 7 )
      {
        v6 = a2[3];
        v10 = a2[1];
        if ( v6 + 1 > v10 )
          sub_1010AFF0(v6 - v10 + 1);
        ++a2[3];
        v11 = *a2;
        result = a2[3] - v6 - 1;
        a2[4] = *a2;
        if ( result > 0 )
          result = (int)memcpy((void *)(v11 + 4 * v6 + 4), (const void *)(v11 + 4 * v6), 4 * result);
        v9 = *a2;
      }
      else
      {
        v6 = a3[3];
        v7 = a3[1];
        if ( v6 + 1 > v7 )
          sub_1010AFF0(v6 - v7 + 1);
        ++a3[3];
        v8 = *a3;
        result = a3[3] - v6 - 1;
        a3[4] = *a3;
        if ( result > 0 )
          result = (int)memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * result);
        v9 = *a3;
      }
      v12 = (_DWORD *)(v9 + 4 * v6);
      if ( v12 )
      {
        result = *(_DWORD *)v15;
        *v12 = *(_DWORD *)v15;
      }
      if ( --v14 < 0 )
        break;
      this = v13;
      result = v14;
    }
  }
  return result;
}
