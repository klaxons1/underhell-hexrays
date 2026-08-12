void __thiscall sub_102B2460(float *this)
{
  if ( ((_BYTE)this[948] & 1) != 0
    && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2292))(this)
    && ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 2332))(this) < this[960] )
  {
    this[960] = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 2332))(this);
  }
  if ( ((_BYTE)this[948] & 2) != 0 )
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2308))(this);
}
