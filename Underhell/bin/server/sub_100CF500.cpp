int __thiscall sub_100CF500(_DWORD *this, int a2, char *String1)
{
  int *v4; // eax
  int result; // eax
  int v6; // esi
  _DWORD *v7; // eax
  int *v8; // esi
  int v9; // ebx
  int v10; // [esp-4h] [ebp-10h]

  v4 = (int *)sub_102D9B20();
  result = sub_100B9D10(v4, String1);
  v6 = result;
  if ( a2 > 0 )
  {
    v10 = result;
    v7 = (_DWORD *)sub_102D9B20();
    result = sub_100BA1B0(v7, v10);
    if ( result != -2 && !*(_DWORD *)(dword_106984AC + 48) )
    {
      result = this[v6 + 445] - a2;
      v8 = &this[v6 + 445];
      v9 = result <= 0 ? 0 : result;
      if ( *v8 != v9 )
      {
        result = (*(int (__thiscall **)(_DWORD *, int *))(*this + 1140))(this, v8);
        *v8 = v9;
      }
    }
  }
  return result;
}
