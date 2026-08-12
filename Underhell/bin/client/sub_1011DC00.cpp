int __thiscall sub_1011DC00(
        _DWORD *this,
        int a2,
        int a3,
        __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        _BYTE *a19)
{
  bool v20; // zf
  int v21; // eax
  _BYTE *v22; // edi
  int v23; // esi
  int result; // eax

  qmemcpy(this + 39, &a3, 0x3Cu);
  sub_10145000(a2);
  v20 = (_BYTE)a3 == 0;
  this[34] = (HIBYTE(a5) != 0)
           | ((unsigned __int8)a6 != 0 ? 2 : 0)
           | (BYTE1(a6) != 0 ? 0x20 : 0)
           | (BYTE2(a6) != 0 ? 0x10 : 0);
  if ( !v20 || BYTE2(a3) || (_BYTE)a4 || BYTE1(a3) || HIBYTE(a3) )
    v21 = 0x2000;
  else
    v21 = 0;
  v22 = a19;
  v23 = a18;
  this[33] = v21;
  if ( (*v22 & 0x20) != 0 )
  {
    if ( (unsigned __int8)sub_10144E30(*(float *)(v23 + 16), *(_DWORD *)v23) )
    {
      this[33] |= 0x30u;
    }
    else if ( *(_BYTE *)(v23 + 8) )
    {
      this[33] |= 0x10u;
    }
    else
    {
      this[33] |= 0x20u;
    }
  }
  else
  {
    this[33] = v21 | 0x30;
  }
  if ( (*v22 & 0x10) != 0 && HIBYTE(a4) )
    this[33] |= 0x40u;
  if ( !*(_BYTE *)(v23 + 8) && BYTE1(a5) )
    this[33] |= 0x800u;
  if ( BYTE2(a5) )
    this[33] |= 0x40000u;
  this[38] = 0;
  this[54] = *(_DWORD *)v23;
  this[55] = *(_DWORD *)(v23 + 4);
  this[56] = *(_DWORD *)(v23 + 8);
  this[57] = *(_DWORD *)(v23 + 12);
  this[58] = *(_DWORD *)(v23 + 16);
  result = *(_DWORD *)(v23 + 20);
  this[59] = result;
  return result;
}
