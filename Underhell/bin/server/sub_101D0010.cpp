void __thiscall sub_101D0010(int *this, int a2, float *a3, int a4)
{
  __int16 v4; // ax

  v4 = *(_WORD *)(a4 + 72);
  if ( v4 >= 0 && v4 < this[283] )
    sub_100D6020(this, this[6 * v4 + 289]);
  sub_100EAC20(this, a2, a3, (float *)a4);
  sub_101CE6F0((int)this, *(__int16 *)(a4 + 72), a2);
}
