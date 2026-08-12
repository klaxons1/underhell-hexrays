void __thiscall sub_1020D350(int this, int a2)
{
  double v3; // st7
  double v4; // st6
  float v5; // [esp+0h] [ebp-Ch]

  *(float *)(this + 1420) = *(float *)(a2 + 1420);
  *(_DWORD *)(this + 1072) = *(_DWORD *)(a2 + 1072);
  if ( *(float *)(this + 1420) != *(float *)(this + 1072) )
  {
    v3 = sub_100E9200((_DWORD *)a2, off_10642FA0);
    v4 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
    if ( v4 > v3 )
      v3 = v4;
    v5 = v3;
    sub_100EC3F0((_DWORD *)this, (int)sub_1020B8C0, v5, off_10642FA0);
  }
}
