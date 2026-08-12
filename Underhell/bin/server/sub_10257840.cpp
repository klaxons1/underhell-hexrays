int __thiscall sub_10257840(int this, unsigned int a2)
{
  int result; // eax

  sub_102576F0((_DWORD *)this, a2);
  result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    result = sub_100EC4A0((int *)this, -1.0, 0);
    *(float *)(this + 1128) = -1.0;
  }
  return result;
}
