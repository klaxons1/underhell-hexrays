int __thiscall sub_1000B320(char *this)
{
  int result; // eax
  int (__thiscall *v2)(char *); // edx

  result = (int)this;
  v2 = (int (__thiscall *)(char *))*((_DWORD *)this + 12);
  if ( v2 )
    return v2(&this[*((_DWORD *)this + 13)]);
  return result;
}
