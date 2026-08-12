void __thiscall sub_10381DB0(int this)
{
  sub_100397D0((int *)this);
  if ( *(float *)(this + 3896) != flt_10689730
    || *(float *)(this + 3900) != flt_10689734
    || *(float *)(this + 3904) != flt_10689738 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      *(float *)(this + 3896) = flt_10689730;
      *(float *)(this + 3900) = flt_10689734;
      *(float *)(this + 3904) = flt_10689738;
      *(float *)(this + 3908) = *(float *)(dword_106B31C8 + 12);
    }
  }
}
