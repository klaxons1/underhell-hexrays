void __thiscall sub_10134850(int this)
{
  float v2; // [esp+Ch] [ebp-Ch]
  float v3; // [esp+10h] [ebp-8h]

  v3 = sub_10134630(
         *(float *)(dword_106B31C8 + 12),
         *(float *)(this + 812),
         *(float *)(this + 808),
         *(float *)(this + 800),
         *(float *)(this + 804));
  sub_1042C7F0(v3);
  if ( *(float *)(this + 808) > (double)*(float *)(dword_106B31C8 + 12) )
  {
    v2 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v2, 0);
  }
}
