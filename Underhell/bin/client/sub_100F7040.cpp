int __thiscall sub_100F7040(char *this, int a2)
{
  int result; // eax
  int (__thiscall *v3)(char *, int); // edx

  result = (int)this;
  v3 = (int (__thiscall *)(char *, int))*((_DWORD *)this + 16);
  if ( v3 )
    return v3(&this[*((_DWORD *)this + 17)], a2);
  return result;
}
