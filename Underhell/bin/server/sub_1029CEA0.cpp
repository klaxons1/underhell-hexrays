int __thiscall sub_1029CEA0(_BYTE *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // [esp-4h] [ebp-Ch]

  v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 52))(this);
  v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100000);
  if ( sub_10023D10(*((_DWORD **)this + 1), v3)
    || ((v4 = *((_DWORD *)this + 5), v4 == -1) || off_1061BE18[4 * (*((_DWORD *)this + 5) & 0xFFF) + 2] != v4 >> 12
      ? (v5 = 0)
      : (v5 = off_1061BE18[4 * (*((_DWORD *)this + 5) & 0xFFF) + 1]),
        !*(_DWORD *)(v5 + 1016)) )
  {
    if ( this[24] )
      sub_1029CCC0((int)this);
    return sub_1004B430((_DWORD **)this);
  }
  else if ( this[24] )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 368))(*((_DWORD *)this + 1)) )
    {
      if ( sub_1004C220((_DWORD **)this, 26) )
      {
        v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 368))(*((_DWORD *)this + 1));
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
        {
          if ( !this[32] )
          {
            v8 = *((_DWORD *)this + 1);
            this[32] = 1;
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 368))(v8);
            sub_1026A890((unsigned int *)this + 5);
            sub_102C8E30(v9);
          }
        }
      }
      return 100001;
    }
    else
    {
      return 100002;
    }
  }
  else
  {
    return 100000;
  }
}
