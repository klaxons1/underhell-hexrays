void __thiscall sub_101AECF0(int this)
{
  float v2; // [esp+0h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 800) )
  {
    sub_101AE1C0((float *)this);
    if ( 0.0 != *(float *)(this + 812) )
    {
      v2 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 812);
      sub_100EC4A0((int *)this, v2, 0);
      sub_100EC3F0((_DWORD *)this, (int)sub_101AE2B0, 0.0, 0);
    }
  }
}
