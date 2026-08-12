float *__thiscall sub_102A0400(int this)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // edi
  int v6; // ebx
  bool v7; // al
  unsigned int v8; // eax
  int v9; // edi
  float *result; // eax
  float v11; // [esp+Ch] [ebp-Ch]
  float v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+14h] [ebp-4h]

  v7 = 0;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v2 = sub_10261B20();
    v3 = v2;
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 1088))(v2) )
      {
        v4 = *(_DWORD *)(this + 68);
        if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v4 >> 12 )
          v5 = 0;
        else
          v5 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 340))(v3);
        if ( v6 == (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 340))(v5) )
          v7 = 1;
      }
    }
  }
  *(_BYTE *)(this + 64) = v7;
  *(float *)(this + 56) = 0.0;
  *(_WORD *)(this + 65) = 0;
  *(float *)(this + 32) = flt_106F1CA8;
  *(float *)(this + 36) = flt_106F1CAC;
  *(float *)(this + 40) = flt_106F1CB0;
  *(float *)(this + 56) = *(float *)(dword_106B31C8 + 12);
  v8 = *(_DWORD *)(this + 68);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  *(float *)(this + 44) = *(float *)(v9 + 704);
  *(float *)(this + 48) = *(float *)(v9 + 708);
  *(float *)(this + 52) = *(float *)(v9 + 712);
  result = sub_1029FEC0((_DWORD *)this, (float *)(this + 20));
  *(float *)(this + 60) = v12 * v12 + v11 * v11 + v13 * v13;
  return result;
}
