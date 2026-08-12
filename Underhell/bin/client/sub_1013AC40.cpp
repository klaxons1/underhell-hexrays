int __thiscall sub_1013AC40(_DWORD *this, unsigned __int16 *a2)
{
  int v3; // edi
  unsigned __int8 v4; // dl
  int v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int result; // eax
  int *v12; // ebx

  v3 = sub_100DDA40(20);
  *(float *)(v3 + 4) = (double)*a2 * 0.001953125;
  *(float *)(v3 + 8) = 0.001953125 * (double)a2[1];
  *(_BYTE *)(v3 + 12) = *((_BYTE *)a2 + 6);
  *(_BYTE *)(v3 + 13) = *((_BYTE *)a2 + 7);
  *(_BYTE *)(v3 + 14) = *((_BYTE *)a2 + 8);
  v4 = *((_BYTE *)a2 + 9);
  *(_BYTE *)(v3 + 15) = v4;
  v5 = (__int16)a2[2];
  *(float *)v3 = 0.0;
  *(_DWORD *)(v3 + 16) = v5;
  if ( *a2 )
  {
    if ( (a2[2] & 2) != 0 )
    {
      if ( *(float *)(v3 + 4) != 0.0 )
        *(float *)v3 = -((double)v4 / *(float *)(v3 + 4));
      v6 = *((float *)off_103DC81C + 3) + *(float *)(v3 + 4);
      *(float *)(v3 + 4) = v6;
      *(float *)(v3 + 8) = v6 + *(float *)(v3 + 8);
    }
    else
    {
      if ( *(float *)(v3 + 4) != 0.0 )
        *(float *)v3 = (double)*(unsigned __int8 *)(v3 + 15) / *(float *)(v3 + 4);
      v7 = *((float *)off_103DC81C + 3) + *(float *)(v3 + 8);
      *(float *)(v3 + 8) = v7;
      *(float *)(v3 + 4) = v7 + *(float *)(v3 + 4);
    }
  }
  if ( (a2[2] & 0x10) != 0 )
    (*(void (__thiscall **)(_DWORD *))(*this + 24))(this);
  v8 = this[4];
  v9 = this[2];
  if ( v8 + 1 > v9 )
    sub_1010AFF0(this + 1, v8 - v9 + 1);
  ++this[4];
  v10 = this[1];
  result = this[4] - v8 - 1;
  this[5] = v10;
  if ( result > 0 )
    result = (int)memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * result);
  v12 = (int *)(this[1] + 4 * v8);
  if ( v12 )
    *v12 = v3;
  return result;
}
