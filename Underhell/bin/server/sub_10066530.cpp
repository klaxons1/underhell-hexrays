double __thiscall sub_10066530(int this, int a2)
{
  if ( a2 < 0 || a2 >= *(__int16 *)(this + 18) )
    return 1.0;
  else
    return *(float *)(*(_DWORD *)(this + 4) + 80 * (__int16)a2 + 76);
}
