int __thiscall sub_1006F910(_DWORD *this)
{
  _DWORD *v1; // edi
  int *v2; // esi
  int v3; // eax
  const char *v4; // eax
  int v5; // eax
  char *v6; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // eax
  char *v15; // eax
  int result; // eax
  int v18; // [esp+10h] [ebp-4h]

  v1 = this;
  v2 = this + 206;
  this[209] = 0;
  v18 = 0;
  while ( 1 )
  {
    v3 = v1[204];
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_11;
      v4 = (const char *)v1[201];
      if ( !v4 )
        v4 = String;
      v5 = sub_1012BC90(v18, v4);
    }
    else
    {
      v6 = (char *)v1[201];
      if ( !v6 )
        v6 = (char *)String;
      v5 = sub_1012BF20(v18, v6, 0, 0, 0, 0);
    }
    v18 = v5;
LABEL_11:
    if ( !v18 )
      break;
    v7 = (_DWORD *)sub_100D7680(v18);
    if ( v7 && v7[581] != 7 )
    {
      v8 = (int *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
      v9 = v2[3];
      v10 = *v8;
      v11 = v2[1];
      if ( v9 + 1 > v11 )
        sub_102ABFC0(v9 - v11 + 1);
      ++v2[3];
      v12 = *v2;
      v13 = v2[3] - v9 - 1;
      v2[4] = *v2;
      if ( v13 > 0 )
        memcpy((void *)(v12 + 4 * v9 + 4), (const void *)(v12 + 4 * v9), 4 * v13);
      v14 = (_DWORD *)(*v2 + 4 * v9);
      v1 = this;
      if ( v14 )
        *v14 = v10;
    }
  }
  v15 = (char *)v1[202];
  if ( !v15 )
    v15 = (char *)String;
  result = sub_1012BF20(0, v15, 0, 0, 0, 0);
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 8))(result);
    v1[211] = *(_DWORD *)result;
  }
  else
  {
    v1[211] = -1;
  }
  return result;
}
