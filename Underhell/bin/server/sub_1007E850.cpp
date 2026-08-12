int __thiscall sub_1007E850(int this)
{
  int v2; // ecx
  int result; // eax

  *(_DWORD *)(this + 96) = -1;
  *(float *)(this + 100) = -1.0;
  *(float *)(this + 108) = -1.0;
  *(_DWORD *)(this + 124) = -1;
  *(float *)(this + 116) = -1.0;
  *(_BYTE *)(this + 57) = 0;
  *(float *)(this + 132) = flt_10689730;
  *(float *)(this + 136) = flt_10689734;
  *(float *)(this + 140) = flt_10689738;
  v2 = *(_DWORD *)(this + 28);
  *(float *)(this + 144) = 3.4028235e38;
  *(float *)(this + 68) = -1.0;
  sub_100746F0(v2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 40))(*(_DWORD *)(this + 20));
  result = *(_DWORD *)(this + 24);
  *(_DWORD *)(result + 16) = -1;
  *(float *)(this + 152) = -1.0;
  *(_DWORD *)(this + 148) = 0;
  return result;
}
