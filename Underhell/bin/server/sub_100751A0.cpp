char __thiscall sub_100751A0(_DWORD *this, int a2, float a3, _DWORD *a4)
{
  float *v5; // esi
  double v6; // st7
  double v7; // st7
  float v8; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]

  if ( (*(_BYTE *)(a2 + 56) & 8) != 0
    || *(_DWORD *)(dword_1069318C + 48)
    || (*(_DWORD *)(this[1] + 248) & 0x10) != 0
    || !(unsigned __int8)sub_10092430(a2, LODWORD(a3), &v8) )
  {
    return 0;
  }
  v5 = (float *)(a2 + 12);
  if ( sub_1001F080(&v8, (float *)(a2 + 12)) )
  {
    v6 = v8;
    if ( *v5 * v8 + *(float *)(a2 + 16) * v9 > 0.96600002 )
    {
      v7 = *(float *)(a2 + 36);
      sub_10090C40(*(float *)(a2 + 36));
      if ( v7 * 0.33333 > *(float *)(a2 + 40) && v7 * 0.6666 < a3 )
      {
        *a4 = 0;
        return 1;
      }
      v6 = v8;
    }
    *v5 = v6;
    *(float *)(a2 + 16) = v9;
    *(float *)(a2 + 20) = v10;
    *(float *)(a2 + 24) = v6;
    *(float *)(a2 + 28) = *(float *)(a2 + 16);
    *(float *)(a2 + 32) = *(float *)(a2 + 20);
  }
  *a4 = 0;
  return 1;
}
