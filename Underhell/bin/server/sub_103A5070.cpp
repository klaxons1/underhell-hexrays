bool __thiscall sub_103A5070(int this)
{
  return *(_DWORD *)(this + 2420) != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == *(_DWORD *)(this + 2420) >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1]
      || *(float *)(this + 3856) != flt_106F1CA8
      || *(float *)(this + 3860) != flt_106F1CAC
      || *(float *)(this + 3864) != flt_106F1CB0;
}
