int __thiscall sub_1015C820(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = sub_100F0920();
  result = v2[66];
  v2[66] = result + 1;
  this[61] = result;
  return result;
}
