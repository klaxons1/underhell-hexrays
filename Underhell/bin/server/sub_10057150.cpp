int __thiscall sub_10057150(int *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v5; // eax
  unsigned __int16 *v6; // edi
  int v7; // eax
  char **v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned __int16 **v13; // esi

  result = sub_10053310(this, a2);
  if ( !result )
  {
    v5 = (_DWORD *)sub_10184390(60);
    if ( v5 )
      v6 = (unsigned __int16 *)sub_10056AF0(v5);
    else
      v6 = 0;
    v7 = a3;
    if ( a3 >= 0 )
    {
      if ( (unsigned int)a3 >= 9 )
        v7 = 8;
    }
    else
    {
      v7 = 0;
    }
    v8 = off_10603B84[v7];
    *(_DWORD *)v6 = v8;
    sub_10052D00(v6 + 24, (int)v8[2], 0);
    if ( a2 )
      *((_DWORD *)v6 + 1) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      *((_DWORD *)v6 + 1) = -1;
    v9 = this[3];
    v10 = this[1];
    if ( v9 + 1 > v10 )
      sub_102ABFC0(v9 - v10 + 1);
    ++this[3];
    v11 = *this;
    v12 = this[3] - 1;
    this[4] = *this;
    if ( v12 > 0 )
      memcpy((void *)(v11 + 4), (const void *)v11, 4 * v12);
    v13 = (unsigned __int16 **)*this;
    result = (int)v6;
    if ( v13 )
      *v13 = v6;
  }
  return result;
}
