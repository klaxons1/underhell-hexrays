int __thiscall sub_10049000(int this, int a2)
{
  int result; // eax
  int (__stdcall *v4)(_DWORD); // edx

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    v4 = *(int (__stdcall **)(_DWORD))(*(_DWORD *)(this - 8) + 408);
    *(float *)(this + 1220) = *(float *)(this + 1188);
    return v4(-1293.0);
  }
  return result;
}
