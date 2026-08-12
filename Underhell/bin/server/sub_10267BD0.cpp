int __thiscall sub_10267BD0(int this)
{
  int (__thiscall *v2)(int); // edx
  int result; // eax

  sub_100C1080(this);
  if ( !*(_BYTE *)(this + 1713) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10267540((float *)(this + 1664), (float *)(this + 580));
  }
  v2 = *(int (__thiscall **)(int))(*(_DWORD *)this + 340);
  *(float *)(this + 1720) = *(float *)(dword_106B31C8 + 12) + 5.0;
  result = v2(this);
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 144))(result);
  return result;
}
