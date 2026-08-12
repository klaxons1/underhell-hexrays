void __thiscall sub_100EB730(int this)
{
  int v2; // edx
  double v3; // st7
  double v4; // st5
  double v5; // st7
  double v6; // st7
  double v7; // st6
  float v8; // [esp+4h] [ebp-4h]

  v2 = *(unsigned __int16 *)(this + 8);
  if ( (_WORD)v2 != 0xFFFF )
  {
    v8 = *(float *)(dword_1043594C + 44);
    v3 = v8 * 1.3;
    if ( *(float *)(this + 104) > (double)*(float *)(this + 80)
      || *(float *)(this + 108) > (double)*(float *)(this + 84)
      || *(float *)(this + 112) > (double)*(float *)(this + 88)
      || *(float *)(this + 104) + v3 < *(float *)(this + 80)
      || v3 + *(float *)(this + 108) < *(float *)(this + 84)
      || *(float *)(this + 112) + v3 < *(float *)(this + 88)
      || *(float *)(this + 116) < (double)*(float *)(this + 92)
      || *(float *)(this + 120) < (double)*(float *)(this + 96)
      || *(float *)(this + 124) < (double)*(float *)(this + 100)
      || *(float *)(this + 116) - v3 > *(float *)(this + 92)
      || *(float *)(this + 120) - v3 > *(float *)(this + 96)
      || *(float *)(this + 124) - v3 > *(float *)(this + 100) )
    {
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 48))(off_103DCDDC, v2);
      v4 = *(float *)(this + 84) - v8;
      v5 = *(float *)(this + 88) - v8;
      *(float *)(this + 104) = *(float *)(this + 80) - v8;
      *(float *)(this + 108) = v4;
      *(float *)(this + 112) = v5;
      v6 = v8 + *(float *)(this + 100);
      v7 = *(float *)(this + 96) + v8;
      *(float *)(this + 116) = *(float *)(this + 92) + v8;
      *(float *)(this + 120) = v7;
      *(float *)(this + 124) = v6;
    }
  }
}
