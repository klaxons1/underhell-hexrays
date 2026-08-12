char __thiscall sub_10266830(_DWORD *this, int a2, char a3)
{
  char result; // al
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  result = a2;
  if ( a2 >= 0 && a2 < this[73] && a2 <= this[79] )
  {
    v5 = 12 * a2 + this[72];
    if ( *(_DWORD *)(v5 + 4) != a2 || *(_DWORD *)(v5 + 8) == a2 )
    {
      v6 = *(_DWORD *)(12 * a2 + this[72]);
      result = a3;
      if ( *(_BYTE *)(v6 + 48) != a3 )
      {
        *((_BYTE *)this + 376) |= 1u;
        *(_BYTE *)(v6 + 48) = result;
        if ( result )
        {
          return sub_100C2010(this + 81, this[84], &a2);
        }
        else
        {
          if ( sub_10263910(this + 97, &a2) )
          {
            sub_1012D820(this + 97, &a2);
            v7 = (_DWORD *)sub_10229D00(32);
            if ( v7 )
              v8 = sub_10229D20(v7, (int)"ItemDeselected");
            else
              v8 = 0;
            (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v8);
          }
          sub_1012D820(this + 81, &a2);
          return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
        }
      }
    }
  }
  return result;
}
