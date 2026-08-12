_BYTE *__thiscall sub_104266E0(_DWORD *this, _BYTE *a2, _BYTE *a3)
{
  unsigned __int16 v3; // dx
  unsigned __int16 v4; // bx
  unsigned int v5; // edx
  unsigned int v6; // ebx
  _DWORD *v7; // esi
  unsigned int v8; // ebp
  int v9; // eax
  _BYTE *result; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // [esp+8h] [ebp-4h]
  _DWORD *v14; // [esp+10h] [ebp+4h]

  HIBYTE(v3) = *a2;
  HIBYTE(v4) = a2[4];
  LOBYTE(v3) = a2[1];
  LOBYTE(v4) = a2[5];
  v5 = (unsigned __int8)a2[3] | (((unsigned __int8)a2[2] | (v3 << 8)) << 8);
  v6 = (unsigned __int8)a2[7] | (((unsigned __int8)a2[6] | (v4 << 8)) << 8);
  v13 = v5;
  if ( this[1] - 1 > 0 )
  {
    v7 = (_DWORD *)(this[2] + 12 * (this[1] - 1));
    v14 = v7 - 3;
    v8 = ((unsigned int)(this[1] - 2) >> 1) + 1;
    do
    {
      v13 ^= sub_10426660(v6, v7);
      v9 = sub_10426660(v13, v14);
      v14 -= 6;
      v6 ^= v9;
      v7 -= 6;
      --v8;
    }
    while ( v8 );
    v5 = v13;
  }
  result = a3;
  a3[3] = v6;
  a3[7] = v5;
  v11 = v6 >> 8;
  a3[2] = v11;
  v12 = v5 >> 8;
  a3[6] = v12;
  v11 >>= 8;
  a3[1] = v11;
  v12 >>= 8;
  a3[5] = v12;
  *a3 = BYTE1(v11);
  a3[4] = BYTE1(v12);
  return result;
}
