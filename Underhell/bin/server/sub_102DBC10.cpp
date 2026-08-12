int __thiscall sub_102DBC10(int this, int a2)
{
  int result; // eax
  int (__thiscall *v4)(int); // edx

  result = sub_100CF460((_DWORD *)this);
  if ( result )
  {
    v4 = *(int (__thiscall **)(int))(*(_DWORD *)this + 1684);
    *(_BYTE *)(this + 3368) = 0;
    return v4(this);
  }
  return result;
}
