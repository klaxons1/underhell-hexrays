int __thiscall sub_102512E0(_BYTE *this, char a2)
{
  int (__stdcall *v3)(int, _DWORD); // edx
  int result; // eax

  v3 = *(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this + 580);
  if ( a2 )
  {
    result = v3(1, 1.0);
    this[294] = a2;
  }
  else
  {
    result = v3(0, 0.0);
    this[294] = 0;
  }
  return result;
}
