int __thiscall sub_1035AEA0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edi
  double v12; // st6
  double v13; // st5
  double v14; // st7
  float v15; // [esp+0h] [ebp-18h]
  float v16; // [esp+10h] [ebp-8h]
  float v17; // [esp+14h] [ebp-4h]

  if ( !sub_10023D10(this, 10) )
    return 0;
  if ( this[939] == -1 || off_1061BE18[4 * (this[939] & 0xFFF) + 2] != this[939] >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[939] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v6 = this[939];
  if ( v6 == -1 || off_1061BE18[4 * (this[939] & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (this[939] & 0xFFF) + 1];
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v16 = *(float *)(v7 + 580);
  v17 = *(float *)(v5 + 584);
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v9 = v8;
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v11 = v10;
  if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
    sub_100DAE60(v10);
  v12 = v17 - *(float *)(v9 + 584);
  v13 = v16 - *(float *)(v11 + 580);
  v15 = v13 * v13 + v12 * v12;
  v14 = off_10689708(v15);
  if ( v14 > 1400.0 )
    return 39;
  result = 38;
  if ( v14 >= 700.0 )
    return 21;
  return result;
}
