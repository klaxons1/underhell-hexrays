void __thiscall sub_102ACAD0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  _BYTE *v7; // eax
  unsigned int v8; // esi
  int *v9; // eax
  unsigned int v10; // esi
  int v11; // [esp+0h] [ebp-Ch]

  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 3652) )
      sub_10301C40(this, this, 1, 0.0);
    v3 = *(_DWORD *)(this + 1000);
    if ( v3 != -1
      && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1000) & 0xFFF) + 1],
          v5 = v3 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 1000) & 0xFFF) + 2] == v5)
      && *v4 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 1000) & 0xFFF) + 2] == v5 )
        sub_102FC860(*v4);
      else
        sub_102FC860(0);
    }
    else if ( *(_DWORD *)(this + 980) )
    {
      sub_102AC0A0((_DWORD *)this, *(char **)(this + 980), 0, 0);
      if ( !sub_102AC800((_DWORD *)this) )
      {
        *(_DWORD *)(this + 988) = 1;
        if ( sub_102AC070((_DWORD *)this) )
        {
          v11 = sub_102AC070((_DWORD *)this);
          sub_102FC860(v11);
        }
      }
    }
    if ( sub_102AC800((_DWORD *)this) && (*(_DWORD *)(this + 248) & 0x1000) == 0
      || *(_DWORD *)(this + 976)
      && (sub_102AC860((_DWORD *)this, *(char **)(this + 976), 0, 0),
          *(_DWORD *)(this + 988) = 2,
          sub_102AC800((_DWORD *)this)) )
    {
      v6 = sub_102AC800((_DWORD *)this);
      sub_102FC1D0(v6);
    }
    sub_102FC900(*(_DWORD *)(this + 988));
    v7 = *(_BYTE **)(this + 260);
    if ( !v7 || !*v7 )
      v7 = 0;
    *(_DWORD *)(a2 + 4096) = v7;
    v8 = *(_DWORD *)(this + 924);
    if ( v8 != -1 )
    {
      v9 = &off_1061BE18[4 * (v8 & 0xFFF) + 1];
      v10 = v8 >> 12;
      if ( v9[1] == v10 )
      {
        if ( *v9 )
        {
          if ( v9[1] == v10 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 76))(a2, *v9);
          else
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 76))(a2, 0);
        }
      }
    }
  }
}
