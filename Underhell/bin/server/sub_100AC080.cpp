int __thiscall sub_100AC080(int this, int a2)
{
  if ( *(float *)(dword_106B31C8 + 12) != *(float *)(this + 16) || *(float *)(this + 12) != (double)a2 )
  {
    sub_100AB940(this, a2);
    sub_100ABAF0(this, a2);
    sub_100ABE30(this, a2);
    *(float *)(this + 12) = (float)a2;
    *(float *)(this + 16) = *(float *)(dword_106B31C8 + 12);
  }
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1436))(*(_DWORD *)(this + 4), a2);
}
