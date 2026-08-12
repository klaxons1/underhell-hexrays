int __thiscall sub_10264B50(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edi
  int v10; // ebp
  int result; // eax
  int i; // ebx
  int v13; // ecx
  _DWORD *v14; // edx

  v5 = this[102];
  if ( v5 == -1 )
  {
    v7 = a3;
  }
  else
  {
    v6 = this[84];
    v7 = 0;
    if ( v6 <= 0 )
    {
LABEL_6:
      v7 = -1;
    }
    else
    {
      v8 = (_DWORD *)this[81];
      while ( *v8 != v5 )
      {
        ++v7;
        ++v8;
        if ( v7 >= v6 )
          goto LABEL_6;
      }
    }
  }
  if ( a3 >= v7 )
  {
    v9 = v7;
    v10 = a3;
  }
  else
  {
    v9 = a3;
    v10 = v7;
  }
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
    if ( !(_BYTE)result )
      result = (*(int (__thiscall **)(_DWORD *))(*this + 948))(this);
  }
  for ( i = v9; i <= v10; ++i )
  {
    v13 = this[100];
    result = 0;
    if ( v13 > 0 )
    {
      v14 = (_DWORD *)this[97];
      while ( *v14 != *(_DWORD *)(this[81] + 4 * i) )
      {
        ++result;
        ++v14;
        if ( result >= v13 )
          goto LABEL_21;
      }
      if ( result >= 0 )
        continue;
    }
LABEL_21:
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 956))(this, *(_DWORD *)(this[81] + 4 * i));
  }
  return result;
}
