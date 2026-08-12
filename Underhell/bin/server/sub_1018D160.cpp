int __thiscall sub_1018D160(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  char v6; // al
  int v7; // ecx
  float v8[3]; // [esp+4h] [ebp-Ch] BYREF

  result = this[24];
  if ( result != -1 )
  {
    v3 = this[21];
    do
    {
      v4 = 12 * result;
      v5 = *(_DWORD *)(v3 + 12 * result);
      v6 = *(_BYTE *)(v5 + 28);
      if ( (v6 & 4) != 0 )
      {
        v7 = 10;
      }
      else if ( (v6 & 2) != 0 )
      {
        v7 = 11;
      }
      else
      {
        v7 = ((v6 & 1) == 0) | 0xC;
      }
      v8[0] = *(float *)(v5 + 4);
      v8[1] = *(float *)(v5 + 8);
      v8[2] = *(float *)(v5 + 12) + 50.0;
      sub_10191A10(v5 + 4, v8, v7);
      v3 = this[21];
      result = *(_DWORD *)(v3 + v4 + 8);
    }
    while ( result != -1 );
  }
  return result;
}
