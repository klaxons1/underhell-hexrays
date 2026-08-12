_BYTE *__thiscall sub_10432280(_DWORD *this, float *a2)
{
  bool v4; // c0
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // rtt
  double v10; // rt0
  double v11; // st6
  double v12; // st7
  int v13; // ecx
  _BYTE *v14; // eax
  char v15; // cl
  int v16; // ecx
  _BYTE *v17; // eax
  char v18; // bl
  int v19; // ecx
  _BYTE *result; // eax
  char v21; // bl
  BOOL v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]
  int v24; // [esp+20h] [ebp+8h]

  if ( *a2 >= 0.03125 || (v4 = *a2 > -0.03125, v24 = 0, !v4) )
    v24 = 1;
  v5 = 0.03125;
  v6 = -0.03125;
  if ( a2[1] >= 0.03125 )
    goto LABEL_8;
  v7 = -0.03125;
  v8 = 0.03125;
  if ( a2[1] <= -0.03125 )
  {
    v5 = 0.03125;
    v6 = -0.03125;
LABEL_8:
    v23 = 1;
    v9 = v5;
    v7 = v6;
    v8 = v9;
    goto LABEL_9;
  }
  v23 = 0;
LABEL_9:
  v10 = v7;
  v11 = v8;
  v12 = v10;
  v22 = v11 <= a2[2] || v12 >= a2[2];
  v13 = this[3];
  if ( v13 + 1 > this[2] )
    *((_BYTE *)this + 16) = 1;
  if ( !*((_BYTE *)this + 16) )
  {
    v14 = (_BYTE *)(*this + (v13 >> 3));
    v15 = v13 & 7;
    if ( v24 )
      *v14 |= 1 << v15;
    else
      *v14 &= ~(1 << v15);
    ++this[3];
  }
  v16 = this[3];
  if ( v16 + 1 > this[2] )
    *((_BYTE *)this + 16) = 1;
  if ( !*((_BYTE *)this + 16) )
  {
    v17 = (_BYTE *)(*this + (v16 >> 3));
    v18 = 1 << (v16 & 7);
    if ( v23 )
      *v17 |= v18;
    else
      *v17 &= ~v18;
    ++this[3];
  }
  v19 = this[3];
  result = (_BYTE *)(v19 + 1);
  if ( v19 + 1 > this[2] )
    *((_BYTE *)this + 16) = 1;
  if ( !*((_BYTE *)this + 16) )
  {
    result = (_BYTE *)(*this + (v19 >> 3));
    v21 = 1 << (v19 & 7);
    if ( v22 )
      *result |= v21;
    else
      *result &= ~v21;
    ++this[3];
  }
  if ( v24 )
    result = (_BYTE *)sub_10432140((int)this, *a2);
  if ( v23 )
    result = (_BYTE *)sub_10432140((int)this, a2[1]);
  if ( v22 )
    return (_BYTE *)sub_10432140((int)this, a2[2]);
  return result;
}
