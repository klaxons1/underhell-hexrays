int __thiscall sub_1005F880(int this, float *a2, int a3, int a4)
{
  int result; // eax

  result = sub_1004B5C0((_DWORD **)this);
  if ( (_BYTE)result )
    return *(_BYTE *)(this + 200) || sub_1005F650((_DWORD *)this, a2);
  return result;
}
