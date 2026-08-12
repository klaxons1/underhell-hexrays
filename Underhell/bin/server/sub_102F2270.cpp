void __thiscall sub_102F2270(int *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  void *v5; // eax
  float v6; // [esp+0h] [ebp-Ch]

  v2 = this[200];
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4) && *v3 )
  {
    if ( v3[1] == v4 )
      v5 = (void *)*v3;
    else
      v5 = 0;
    sub_102F1F40(v5);
    v6 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    sub_100EC4A0(this, v6, 0);
  }
  else
  {
    sub_1025FAC0((int)this);
  }
}
