void __thiscall sub_1038DF60(int *this, int a2)
{
  double v3; // st7
  int v4; // ecx
  const char *v5; // edx
  float v6; // [esp+4h] [ebp-8h]

  if ( *((float *)this + 1082) <= (double)*(float *)(dword_106B31C8 + 12) && (this[64] & 0x8000000) == 0 )
  {
    v6 = (float)this[55];
    v3 = v6 / (double)(*(int (__thiscall **)(int *))(*this + 448))(this);
    if ( v3 > 0.0 )
    {
      v4 = this[679];
      v5 = "METROPOLICE_PAIN";
      if ( (v4 & 0x40000000) != 0 || v3 >= 0.25 )
      {
        if ( v4 >= 0 && v3 > 0.80000001 )
        {
          this[679] = v4 | 0x80000000;
          v5 = "METROPOLICE_PAIN_LIGHT";
        }
      }
      else
      {
        this[679] = v4 | 0xC0000000;
        v5 = "METROPOLICE_PAIN_HEAVY";
      }
      sub_100AC410((int)(this + 1290), v5, -1, 0);
      *((float *)this + 1082) = *(float *)(dword_106B31C8 + 12) + 1.0;
    }
  }
}
