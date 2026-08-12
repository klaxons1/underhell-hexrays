int __thiscall sub_1004D200(int this)
{
  int result; // eax

  *(float *)(this + 3804) = 0.0;
  *(_DWORD *)(this + 3800) = 0;
  *(_DWORD *)(this + 3796) = 0;
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)this + 408))(-1293.0);
  sub_1004CCB0((float *)this);
  result = *(_DWORD *)(this + 3788);
  if ( *(_DWORD *)(this + 3796) != result )
  {
    *(_DWORD *)(this + 3800) = result;
    *(_DWORD *)(this + 3796) = result;
    return sub_1004CCB0((float *)this);
  }
  return result;
}
