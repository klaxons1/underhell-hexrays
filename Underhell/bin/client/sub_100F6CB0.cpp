void __thiscall sub_100F6CB0(_DWORD *this, int a2)
{
  ++this[45];
  if ( *(float *)(a2 + 20) > 0.1 && *(float *)(a2 + 24) > 70.0 )
  {
    sub_100F6C10(0, a2);
    sub_100F6C10(1, a2);
  }
  --this[45];
}
