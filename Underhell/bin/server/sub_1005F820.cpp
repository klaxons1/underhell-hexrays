char __thiscall sub_1005F820(int this, float *a2, int a3)
{
  char result; // al

  result = sub_1004B5B0((_DWORD **)this);
  if ( result )
    return (unsigned __int8)sub_1004B510((void *)this, 28, 1)
        || *(_BYTE *)(this + 200)
        || sub_1005F650((_DWORD *)this, a2);
  return result;
}
