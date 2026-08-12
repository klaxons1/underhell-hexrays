int __thiscall sub_10428AC0(int *this, int a2)
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
  v4 = (void *)sub_1044A890(a2);
  v5 = sub_1044A4D0("preventNameBasedLookup");
  if ( !v5 )
  {
    byte_106FDBD8 = 0;
LABEL_4:
    result = sub_1042F670(&a2, v4);
    if ( *(_WORD *)result != 0xFFFF )
    {
      v7 = (int *)sub_10428080(this, v4);
      v8 = *v7;
      if ( *v7 )
      {
        sub_10428990((_DWORD *)*v7);
        sub_10184660(v8);
      }
      result = sub_10428080(this, v4);
      *(_DWORD *)result = 0;
    }
    return result;
  }
  if ( *(_DWORD *)v5 != 4 )
  {
    byte_106FDBD0 = 0;
    goto LABEL_4;
  }
  if ( !**(_BYTE **)(v5 + 8) )
    goto LABEL_4;
  v9 = this[22];
  result = sub_1044A160(v2);
  v10 = 0;
  v11 = result;
  if ( v9 > 0 )
  {
    while ( 1 )
    {
      result = sub_10433270(*(_DWORD *)(this[19] + 4 * v10) + 520, v11);
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
      sub_10428990(v13);
      return sub_10184660((int)v13);
    }
  }
  return result;
}
