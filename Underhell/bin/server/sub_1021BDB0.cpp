bool __thiscall sub_1021BDB0(int this, int a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // ebx
  float *v5; // edi
  float *v6; // eax
  double v7; // st7
  bool result; // al
  float v9[3]; // [esp+8h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v11; // [esp+18h] [ebp-4h]

  sub_1021AEA0(this - 800, 0);
  v3 = *(_DWORD *)(this + 64);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != v3 >> 12 )
    v11 = 0;
  else
    v11 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
  if ( *(_DWORD *)(this + 68) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != *(_DWORD *)(this + 68) >> 12 )
  {
    v4 = 0;
  }
  else
  {
    v4 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
  }
  if ( (*(_BYTE *)(this + 4) & 1) != 0 )
  {
    if ( v11 )
    {
      if ( v11[6] )
      {
        if ( v4 )
        {
          if ( v4[6] )
          {
            v5 = (float *)sub_10019640(v4);
            v6 = (float *)sub_10019640(v11);
            v9[0] = *v6 - *v5;
            v9[1] = v6[1] - v5[1];
            v7 = v6[2] - v5[2];
            v9[2] = v7;
            sub_100D7A40(v9);
            v10 = *(_DWORD *)(this + 12) + (int)v7;
            if ( v10 != *(_DWORD *)(this + 44) )
              sub_1021B450((_DWORD *)(this + 44), &v10);
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(this + 60) != (v11 != 0) )
    *(_BYTE *)(this + 60) = v11 != 0;
  result = v4 != 0;
  if ( *(_BYTE *)(this + 61) != (v4 != 0) )
    *(_BYTE *)(this + 61) = result;
  return result;
}
