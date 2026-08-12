void __thiscall sub_101ADEE0(int this)
{
  double v2; // st7
  float *v3; // ecx
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+10h] [ebp-4h]

  v2 = *(float *)(this + 108);
  v4 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 820)) * *(float *)(this + 816);
  sub_10424B10(*(float *)(this + 108), *(float *)(this + 836), v4);
  v5 = v2;
  *(float *)(this + 836) = v2;
  v3 = (float *)(dword_106B31C8 + 12);
  *(float *)(this + 820) = *(float *)(dword_106B31C8 + 12);
  if ( *(float *)(this + 108) != v5 )
    sub_100EC4A0((int *)this, *v3, 0);
}
