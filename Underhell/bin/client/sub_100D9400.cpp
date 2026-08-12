void __thiscall sub_100D9400(float *this)
{
  void (__thiscall *v2)(float *); // eax

  if ( !*((_BYTE *)this + 49) && *((_BYTE *)this + 48) )
  {
    if ( *((_BYTE *)this + 107) )
      *((_BYTE *)this + 76) = SystemParametersInfoA(4u, 0, this + 23, 0);
    v2 = *(void (__thiscall **)(float *))(*(_DWORD *)this + 120);
    *((_BYTE *)this + 49) = 1;
    v2(this);
    this[13] = 0.0;
    this[14] = 0.0;
  }
}
