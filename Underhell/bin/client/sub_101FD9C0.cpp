int __thiscall sub_101FD9C0(int *this, int a2)
{
  int v2; // edi
  void *v4; // ebp
  int v5; // eax
  int result; // eax
  int *v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // edi
  int v11; // ebx
  int v12; // edx
  _DWORD *v13; // ebx

  v2 = a2;
  v4 = (void *)sub_102AAB30(a2);
  v5 = sub_102AA770("preventNameBasedLookup");
  if ( !v5 )
  {
    byte_10465848 = 0;
LABEL_4:
    result = sub_10230C80(&a2, v4);
    if ( *(_WORD *)result != 0xFFFF )
    {
      v7 = (int *)sub_101FBB20(this, v4);
      v8 = *v7;
      if ( *v7 )
      {
        sub_101FD890((_DWORD *)*v7);
        sub_10034930(v8);
      }
      result = sub_101FBB20(this, v4);
      *(_DWORD *)result = 0;
    }
    return result;
  }
  if ( *(_DWORD *)v5 != 4 )
  {
    byte_10465840 = 0;
    goto LABEL_4;
  }
  if ( !**(_BYTE **)(v5 + 8) )
    goto LABEL_4;
  v9 = this[22];
  result = sub_102AA400(v2);
  v10 = 0;
  v11 = result;
  if ( v9 > 0 )
  {
    while ( 1 )
    {
      result = sub_10232FD0(*(_DWORD *)(this[19] + 4 * v10) + 520, v11);
      if ( (_BYTE)result )
        break;
      if ( ++v10 >= v9 )
        return result;
    }
    result = this[22];
    v12 = this[19];
    v13 = *(_DWORD **)(v12 + 4 * v10);
    if ( result > 0 )
    {
      result = *(_DWORD *)(v12 + 4 * result - 4);
      *(_DWORD *)(v12 + 4 * v10) = result;
      --this[22];
    }
    if ( v13 )
    {
      sub_101FD890(v13);
      return sub_10034930((int)v13);
    }
  }
  return result;
}
