int __thiscall sub_1014BC90(int this)
{
  int v2; // edi
  const void *v3; // eax
  bool v4; // zf
  double v5; // st7
  const void *v6; // eax
  _DWORD v8[2]; // [esp+3Ch] [ebp-8h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  if ( (*(_BYTE *)(this + 312) & 4) == 0 )
    goto LABEL_10;
  if ( this )
    v3 = (const void *)(this + 8);
  else
    v3 = 0;
  sub_10145000((_DWORD *)(this + 356), v3);
  v4 = *(_BYTE *)(this + 352) == 0;
  *(_DWORD *)(this + 488) = 8236;
  *(_DWORD *)(this + 492) = 2;
  if ( !v4 )
  {
    *(_DWORD *)(this + 492) = 3;
    *(_DWORD *)(this + 488) = 272428;
  }
  (**(void (__thiscall ***)(int, int))(*(_DWORD *)(this + 128) + 556))(*(_DWORD *)(this + 128) + 556, this + 356);
  if ( (*(_BYTE *)(this + 312) & 4) == 0 )
  {
LABEL_10:
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413168 + 120))(
      dword_10413168,
      *(_DWORD *)(this + 328),
      1);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 208))(v2, v8);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 292))(
      v2,
      v8[0],
      *(_DWORD *)((char *)v8 + 1),
      *(_DWORD *)((char *)v8 + 2),
      255);
  }
  sub_1014B3A0(
    (_DWORD *)this,
    v2,
    *(float *)(this + 316),
    *(_DWORD *)(this + 132),
    COERCE_INT(*(float *)(this + 320)),
    -1);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413168 + 120))(
    dword_10413168,
    *(_DWORD *)(this + 328),
    0);
  sub_1014B480((int *)this, *(float *)(this + 316), dword_103E7E94, *(float *)(this + 320));
  v5 = *(float *)(this + 320);
  *(_DWORD *)(this + 136) = 0;
  if ( 0.0 != v5 && *(_BYTE *)(this + 324) && (*(_BYTE *)(this + 312) & 4) != 0 )
  {
    if ( this )
      v6 = (const void *)(this + 8);
    else
      v6 = 0;
    sub_10145000((_DWORD *)(this + 156), v6);
    *(_DWORD *)(this + 288) = 32;
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 156) + 12))(this + 156);
  }
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 292))(v2, 0, 0, 0, 255);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
