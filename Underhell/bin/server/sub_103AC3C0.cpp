char __thiscall sub_103AC3C0(int *this, _DWORD *a2)
{
  int v3; // eax
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx

  v3 = (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2);
  if ( (v3 == 1 || v3 == 2 || v3 == 3) && this[932] < 1 )
    return 0;
  if ( v3 == 6 )
  {
    v5 = a2[75];
    if ( v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (a2[75] & 0xFFF) + 1];
      v7 = v5 >> 12;
      if ( off_1061BE18[4 * (a2[75] & 0xFFF) + 2] == v7 )
      {
        if ( *v6 )
        {
          v8 = off_1061BE18[4 * (a2[75] & 0xFFF) + 2] == v7 ? *v6 : 0;
          v9 = *(_DWORD *)(v8 + 424);
          if ( v9 )
          {
            if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v9 + 76))(v9) & 4) != 0 )
              return 0;
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*this + 368))(this)
    && sub_10023D10(this, 10)
    && (_DWORD *)(*(int (__thiscall **)(int *))(*this + 368))(this) != a2
    || sub_1004AE70(this, 0, 1) && !sub_1004AEE0(this, 0, 1)
    || !(*(unsigned __int8 (__thiscall **)(int *, _DWORD *, int, _DWORD))(*this + 548))(this, a2, 16449, 0) )
  {
    return 0;
  }
  v10 = this[906];
  if ( v10 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v10 + 160))(v10, a2);
  else
    return sub_10027D40(this, (int)a2);
}
