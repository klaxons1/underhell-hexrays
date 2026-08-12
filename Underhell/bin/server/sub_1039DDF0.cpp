int __thiscall sub_1039DDF0(int this)
{
  int result; // eax

  if ( *(_DWORD *)(this + 2324) != 3 || !sub_10023D10((_DWORD *)this, 27) )
    return sub_10033590((_DWORD *)this);
  sub_10021880((void *)this);
  sub_100285C0((_DWORD *)this, 0, 1);
  result = 2;
  *(float *)(this + 3780) = *(float *)(dword_106B31C8 + 12) + 10.0;
  return result;
}
