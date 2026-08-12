bool __thiscall sub_100DC3E0(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  int v5; // eax
  bool result; // al
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v10; // eax

  v3 = a3;
  v5 = sub_1022B4C0("lessEqualVar", (int)Locale);
  if ( !v5 )
    return 0;
  v7 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)a2 + 44))(a2, v5, (char *)&a3 + 3, 1);
  v8 = HIBYTE(a3) == 0;
  this[5] = v7;
  result = 0;
  if ( !v8 )
  {
    v9 = sub_1022B4C0("greaterVar", (int)Locale);
    if ( v9 )
    {
      v10 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)a2 + 44))(a2, v9, (char *)&a3 + 3, 1);
      v8 = HIBYTE(a3) == 0;
      this[6] = v10;
      if ( !v8 && sub_1009EA60(this, a2, v3) && this[4] )
        return 1;
    }
  }
  return result;
}
