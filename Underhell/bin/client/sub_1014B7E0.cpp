int __thiscall sub_1014B7E0(int this)
{
  int v2; // edi
  char v3; // al
  bool v4; // bl
  const void *v5; // eax
  char v6; // bl
  const void *v7; // eax
  bool v8; // al
  int result; // eax
  const void *v10; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = *(_BYTE *)(this + 312);
  if ( (v3 & 2) != 0 )
  {
    v4 = (v3 & 8) != 0;
    if ( this )
      v5 = (const void *)(this + 8);
    else
      v5 = 0;
    sub_10145000((_DWORD *)(this + 356), v5);
    *(_DWORD *)(this + 492) = 2;
    *(_DWORD *)(this + 488) = 2094;
    if ( v4 )
      *(_DWORD *)(this + 488) = 10286;
    (**(void (__thiscall ***)(int, int))(*(_DWORD *)(this + 128) + 556))(*(_DWORD *)(this + 128) + 556, this + 356);
  }
  v6 = 0;
  if ( (*(_BYTE *)(this + 312) & 4) != 0 )
  {
    if ( this )
      v7 = (const void *)(this + 8);
    else
      v7 = 0;
    sub_10145000((_DWORD *)(this + 512), v7);
    *(_DWORD *)(this + 648) = 3;
    *(_DWORD *)(this + 644) = 12309;
    (**(void (__thiscall ***)(int, int))(*(_DWORD *)(this + 128) + 556))(*(_DWORD *)(this + 128) + 556, this + 512);
    if ( !*(_BYTE *)(this + 324) )
      v6 = sub_10144E30(0, this + 512, this, *(float *)(this + 344), *(_DWORD *)(this + 328));
  }
  else if ( (*(_DWORD *)(this + 132) & 0x800) == 0 )
  {
    *(_DWORD *)(this + 136) |= 1u;
  }
  v8 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 120))(dword_1047C97C) == 0;
  if ( v6 && v8 )
    *(_DWORD *)(this + 132) |= 0xCu;
  sub_1014B3A0(
    (_DWORD *)this,
    v2,
    *(float *)(this + 316),
    *(_DWORD *)(this + 132),
    COERCE_INT(*(float *)(this + 320)),
    -1);
  sub_10149570();
  result = sub_1014B480((int *)this, *(float *)(this + 316), dword_103E7E94, *(float *)(this + 320));
  if ( (*(_BYTE *)(this + 312) & 4) != 0 )
  {
    if ( *(_BYTE *)(this + 324) )
    {
      if ( this )
        v10 = (const void *)(this + 8);
      else
        v10 = 0;
      sub_10145000((_DWORD *)(this + 156), v10);
      *(_DWORD *)(this + 288) = 16;
      result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 156) + 12))(this + 156);
    }
    else if ( v6 )
    {
      sub_10147100((_DWORD *)(this + 668));
      result = (**(int (__thiscall ***)(int, int))(*(_DWORD *)(this + 128) + 556))(
                 *(_DWORD *)(this + 128) + 556,
                 this + 668);
    }
  }
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  return result;
}
