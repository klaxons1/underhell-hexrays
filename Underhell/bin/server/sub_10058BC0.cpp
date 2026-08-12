char __thiscall sub_10058BC0(int this)
{
  if ( *(float *)(this + 72) == flt_106F1CA8
    && *(float *)(this + 76) == flt_106F1CAC
    && *(float *)(this + 80) == flt_106F1CB0
    || *(_DWORD *)(dword_10698344 + 48) )
  {
    return sub_1004B620((_DWORD **)this);
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 220))(*(_DWORD *)(this + 4)) == 3;
  }
}
