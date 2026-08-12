int __thiscall sub_10190D00(int this, int a2)
{
  float v6; // [esp+10h] [ebp+8h]

  v6 = (*(float *)(a2 + 20) + *(float *)(a2 + 8)) * 0.5;
  sub_1018F880((int *)this, a2);
  if ( v6 >= (double)*(float *)(this + 36) )
    return sub_1018F8F0((int *)this, a2);
  else
    return sub_1018F980((int *)this, a2);
}
