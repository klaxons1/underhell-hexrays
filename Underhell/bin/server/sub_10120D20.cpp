void __thiscall sub_10120D20(int this, __int64 a2, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  bool v11; // zf

  if ( (_DWORD)a2 )
    *(_DWORD *)(this + 880) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 880) = -1;
  if ( *(_DWORD *)(this + 1000) )
    sub_1011F590(this);
  v5 = *(_DWORD *)(this + 880);
  if ( v5 == -1
    || (v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1],
        v7 = v5 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v7)
    || !*v6
    || (off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v7 ? (v8 = 0) : (v8 = *v6),
        !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) || (*(_DWORD *)(this + 248) & 0x100) != 0) )
  {
    v9 = *(_DWORD *)(this + 248);
    v10 = *(_DWORD *)(this + 800);
    if ( (v9 & 0x10000) != 0 )
    {
      if ( v10 != 1 && v10 != 3 )
      {
        if ( (v9 & 0x20) == 0 )
          return;
        if ( v10 )
        {
          v11 = v10 == 2;
          goto LABEL_23;
        }
      }
    }
    else if ( v10 != 1 )
    {
      if ( (v9 & 0x20) == 0 )
        return;
      v11 = v10 == 0;
LABEL_23:
      if ( !v11 )
        return;
    }
    if ( *(_BYTE *)(this + 972) )
    {
      sub_1010DD80((_DWORD *)(this + 1200), a2, 0.0);
      sub_1011FE20(this, this + 928, 1, 0);
    }
    else
    {
      sub_10120BA0(this);
    }
  }
}
