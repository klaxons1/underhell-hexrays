int __thiscall sub_10279170(_DWORD **this, int a2, _DWORD *a3, int *a4)
{
  int result; // eax
  int v6; // ebp
  int i; // edi
  int v8; // ebx
  int v9; // [esp+18h] [ebp-8h] BYREF
  char v10[4]; // [esp+1Ch] [ebp-4h] BYREF

  *a3 = 0;
  *a4 = 0;
  result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this[72] + 832))(this[72], this[74]);
  v6 = result;
  for ( i = 0; i < v6; ++i )
  {
    v8 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this[72] + 848))(this[72], this[74], i);
    result = ((int (__thiscall *)(_DWORD **, int))(*this)[211])(this, i);
    if ( result )
    {
      (*(void (__thiscall **)(int, int *, char *))(*(_DWORD *)result + 8))(result, &v9, v10);
      if ( v8 < 0 )
        v8 = v9;
      else
        v9 = v8;
      if ( i == a2 )
      {
        result = (int)a4;
        *a4 = v8;
        return result;
      }
      result = (int)a3;
      *a3 += v8;
    }
  }
  return result;
}
