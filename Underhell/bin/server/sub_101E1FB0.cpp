int __thiscall sub_101E1FB0(float *this)
{
  if ( *(float *)(dword_106B31C8 + 12) < (double)this[890] )
    return (int)(this[889] / *(float *)(dword_106B31C8 + 28) + 0.5);
  if ( this[889] > 0.0 )
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1388))(this);
  return 0;
}
