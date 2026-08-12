int __thiscall sub_1024C250(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  sub_1024C070(this);
  if ( !*(_BYTE *)(this + 848) )
    return sub_100EC4A0((int *)this, -1.0, 0);
  v3 = RandomFloat(*(float *)(this + 840), *(float *)(this + 844)) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v3, 0);
}
