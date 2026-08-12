char __thiscall sub_1000D560(float *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  int v7; // edi
  int v9; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  double v15; // st7
  char v16; // [esp+13h] [ebp-1h]
  float v17; // [esp+1Ch] [ebp+8h]

  v5 = *((_DWORD *)this + 490);
  if ( v5 == -1 )
    return 0;
  v6 = (_DWORD *)((char *)off_103DCD74 + 16 * ((_DWORD)this[490] & 0xFFF) + 4);
  if ( v6[1] != v5 >> 12 )
    return 0;
  v7 = *v6;
  if ( !*v6
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 512))(*v6)
    || sub_1000A5F0((_DWORD *)v7, *((_DWORD *)this + 508)) <= 0 )
  {
    return 0;
  }
  v16 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1184))(this) )
  {
    v9 = a2 - *((_DWORD *)this + 510);
    if ( v9 >= sub_1000A5F0((_DWORD *)v7, *((_DWORD *)this + 508))
       ? sub_1000A5F0((_DWORD *)v7, *((_DWORD *)this + 508))
       : v9 )
    {
      v16 = 1;
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 1188))(this)
    || ((v11 = a3 - *((_DWORD *)this + 511), v11 >= sub_1000A5F0((_DWORD *)v7, *((_DWORD *)this + 509)))
      ? (v12 = sub_1000A5F0((_DWORD *)v7, *((_DWORD *)this + 509)))
      : (v12 = v11),
        !v12) )
  {
    if ( !v16 )
      return 0;
  }
  (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 1044))(this, 7, 0.0);
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 852))(this, a4);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 504))(v7) )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 980))(v7, 7);
  v13 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  v14 = sub_10029CF0(183);
  sub_1000B780(this, v14);
  v15 = *((float *)off_103DC81C + 3) + 0.0;
  v17 = v15;
  *(float *)(v7 + 3016) = v15;
  if ( *((_DWORD *)this + 494) != LODWORD(v17) )
    this[494] = v15;
  if ( *((_DWORD *)this + 493) != *((_DWORD *)this + 494) )
    this[493] = this[494];
  *((_BYTE *)this + 1984) = 1;
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
  return 1;
}
