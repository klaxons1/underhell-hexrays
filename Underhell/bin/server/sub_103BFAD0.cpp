int __thiscall sub_103BFAD0(_DWORD *this)
{
  int result; // eax
  int (__stdcall *v2)(_DWORD, _DWORD *); // edx

  result = *(_DWORD *)(dword_106B31C8 + 24);
  if ( result != this[931] )
  {
    v2 = *(int (__stdcall **)(_DWORD, _DWORD *))(*this + 796);
    this[931] = result;
    return v2(this[950], this + 919);
  }
  return result;
}
