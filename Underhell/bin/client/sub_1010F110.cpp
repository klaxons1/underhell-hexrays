void __thiscall sub_1010F110(int this, int *a2, int a3, float *a4, int a5, int a6, int a7)
{
  int v8; // ebx
  int savedregs; // [esp+20h] [ebp+0h] BYREF

  nullsub_2((int)a2, a3, (int)a4, a5, a6, a7);
  if ( *(int *)(this + 2736) >= 0 )
  {
    v8 = *(_DWORD *)(this + 2736);
    if ( v8 < sub_10126D70(a2) )
      sub_10024510(
        (int)&savedregs,
        a2,
        *(float **)(this + 1228),
        a3,
        a4,
        v8,
        COERCE_INT(*(float *)(this + 1816)),
        a5,
        a7,
        *(float *)(this + 2732),
        *(float *)&a6);
  }
}
