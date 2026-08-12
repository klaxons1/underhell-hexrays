void __thiscall sub_1013A280(int this, int a2)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v3, 0);
    sub_1013A160((void *)this);
  }
}
