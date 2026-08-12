void __thiscall sub_102CBB20(float *this, int a2, int a3, int a4)
{
  float v5; // edx
  float v6; // [esp+0h] [ebp-8h]

  if ( this[231] >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    this[200] = *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    sub_102CBA20(this);
    v5 = *this;
    this[200] = *(float *)(dword_106B31C8 + 12);
    v6 = 1.0 / this[201] + *(float *)(dword_106B31C8 + 12);
    (*(void (__thiscall **)(float *, _DWORD))(LODWORD(v5) + 748))(this, LODWORD(v6));
  }
}
