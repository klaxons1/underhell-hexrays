int __thiscall sub_102429D0(float *this)
{
  int v3; // eax
  float v4; // [esp+4h] [ebp-8h]

  if ( this[204] < (double)*(float *)(dword_106B31C8 + 12) )
    return sub_100D6A00(this);
  v4 = (*(float *)(dword_106B31C8 + 12) - this[212]) * this[202];
  sub_10242760((int)this, v4);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v3 = dword_106B31C8;
  this[212] = *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, *(float *)(v3 + 12), 0);
}
