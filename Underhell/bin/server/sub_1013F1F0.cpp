void __thiscall sub_1013F1F0(int this)
{
  double v2; // st7
  int v3; // ecx
  double v4; // [esp+Ch] [ebp-224h]
  char Buffer[512]; // [esp+18h] [ebp-218h] BYREF
  int v6[3]; // [esp+218h] [ebp-18h] BYREF
  int v7[3]; // [esp+224h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 236) & 4) == 0 )
    goto LABEL_13;
  v2 = 0.0;
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 820) && *(float *)(this + 832) > 0.0 )
  {
    sub_1011BBD0(this, 88, 255, 128, 0, 0.0);
    v4 = *(float *)(this + 832);
    sub_10429A00(Buffer, 0x200u, "Heat: %.1f", SLOBYTE(v4));
    sub_100D5DE0((_DWORD *)this, 1, (int)Buffer, 0.0, 255, 255, 255, 255);
LABEL_7:
    v2 = 0.0;
    goto LABEL_8;
  }
  if ( *(float *)(this + 828) <= 0.0 )
  {
    sub_1011BBD0(this, 88, 88, 128, 0, 0.0);
    goto LABEL_7;
  }
LABEL_8:
  if ( v2 < *(float *)(this + 828) && sub_1013E990((float *)this, (float *)v7, (float *)v6) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(v3);
    sub_1011BB20(this + 580, (int)v7, (int)v6, 128, 0, 0, 10, 0.0);
  }
LABEL_13:
  sub_100DF330((float *)this);
}
