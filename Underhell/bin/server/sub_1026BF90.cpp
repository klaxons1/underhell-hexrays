char __thiscall sub_1026BF90(_DWORD *this, int a2, char *String2, int a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // esi
  _DWORD *i; // ecx

  if ( a2 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    v5 = sub_1026BAD0(this, String2);
    if ( v5 != -1 )
    {
      v6 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 140))(this, v5, a4);
      if ( v6 == a2 )
        return 1;
      if ( !v6 )
      {
        v7 = this[4];
        if ( v7 > 0 )
        {
          v8 = (_DWORD *)this[1];
          for ( i = v8; i[1] != a4 || *i != v5; i += 5 )
          {
            if ( ++v6 >= v7 )
              return 0;
          }
          sub_10019680(&v8[5 * v6 + 4], a2);
          return 1;
        }
      }
    }
    return 0;
  }
  return 0;
}
