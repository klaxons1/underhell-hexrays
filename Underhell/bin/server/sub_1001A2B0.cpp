_DWORD *__thiscall sub_1001A2B0(int this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // edx
  int v5; // ecx

  sub_1001A190((float *)this);
  result = a2;
  v4 = *(_DWORD *)(this + 3672);
  *a2 = *(_DWORD *)(this + 3668);
  v5 = *(_DWORD *)(this + 3676);
  a2[1] = v4;
  a2[2] = v5;
  return result;
}
