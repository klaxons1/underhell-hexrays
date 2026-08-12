int __thiscall sub_10280F80(int *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // ebp
  int v4; // esi
  int v5; // ebx
  int result; // eax
  int v7; // eax
  int *v8; // esi
  int v9; // edi
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int *v13; // edi
  int v14; // [esp+10h] [ebp-4h] BYREF

  v14 = -1;
  sub_102393F0(&v14, a2);
  v3 = this[22];
  v4 = 0;
  if ( v3 <= 0 )
  {
LABEL_4:
    v7 = this[20];
    v8 = this + 19;
    v9 = this[22];
    if ( v9 + 1 > v7 )
      sub_102AA460(v9 - v7 + 1);
    ++v8[3];
    v10 = *v8;
    v11 = v8[3] - v9 - 1;
    v12 = v8[3] - v9 == 1;
    v8[4] = *v8;
    if ( v11 >= 0 && !v12 )
      memcpy((void *)(v10 + 4 * v9 + 4), (const void *)(v10 + 4 * v9), 4 * v11);
    result = *v8;
    v13 = (int *)(*v8 + 4 * v9);
    if ( v13 )
      *v13 = v14;
  }
  else
  {
    while ( 1 )
    {
      v5 = sub_10237C80(&v14);
      result = sub_10237C80((_DWORD *)(this[19] + 4 * v4));
      if ( result == v5 )
        break;
      if ( ++v4 >= v3 )
        goto LABEL_4;
    }
  }
  return result;
}
