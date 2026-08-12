void __thiscall sub_100F1A10(int this)
{
  int v2; // edx
  double v3; // st7
  double v4; // st5
  double v5; // st7
  double v6; // st7
  double v7; // st6
  float v8; // [esp+4h] [ebp-4h]

  v2 = *(unsigned __int16 *)(this + 12);
  if ( (_WORD)v2 != 0xFFFF )
  {
    v8 = *(float *)(dword_1043594C + 44);
    v3 = v8 * 1.3;
    if ( *(float *)(this + 7000) > (double)*(float *)(this + 6032)
      || *(float *)(this + 7004) > (double)*(float *)(this + 6036)
      || *(float *)(this + 7008) > (double)*(float *)(this + 6040)
      || *(float *)(this + 7000) + v3 < *(float *)(this + 6032)
      || v3 + *(float *)(this + 7004) < *(float *)(this + 6036)
      || *(float *)(this + 7008) + v3 < *(float *)(this + 6040)
      || *(float *)(this + 7012) < (double)*(float *)(this + 6044)
      || *(float *)(this + 7016) < (double)*(float *)(this + 6048)
      || *(float *)(this + 7020) < (double)*(float *)(this + 6052)
      || *(float *)(this + 7012) - v3 > *(float *)(this + 6044)
      || *(float *)(this + 7016) - v3 > *(float *)(this + 6048)
      || *(float *)(this + 7020) - v3 > *(float *)(this + 6052) )
    {
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 48))(off_103DCDDC, v2);
      v4 = *(float *)(this + 6036) - v8;
      v5 = *(float *)(this + 6040) - v8;
      *(float *)(this + 7000) = *(float *)(this + 6032) - v8;
      *(float *)(this + 7004) = v4;
      *(float *)(this + 7008) = v5;
      v6 = v8 + *(float *)(this + 6052);
      v7 = *(float *)(this + 6048) + v8;
      *(float *)(this + 7012) = *(float *)(this + 6044) + v8;
      *(float *)(this + 7016) = v7;
      *(float *)(this + 7020) = v6;
    }
  }
}
