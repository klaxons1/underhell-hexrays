void __thiscall sub_102D2110(int this, int a2, float *a3, float *a4, int a5, int a6)
{
  int v7; // eax
  int v9; // ecx
  int v10[21]; // [esp+14h] [ebp-54h] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF
  int v12; // [esp+78h] [ebp+10h]

  if ( sub_102CA330((_DWORD *)this) )
  {
    v7 = a2;
    if ( a2 > 0 )
    {
      v12 = a2;
      do
      {
        sub_100E10C0(*(_DWORD *)(this + 1396), a3);
        sub_102CB050(this, (int)&savedregs, this, a3, a4, &flt_10662E40[3 * *(_DWORD *)(this + 832)], (int)v10);
        v9 = *(_DWORD *)(this + 1396);
        *(float *)(this + 1400) = *(float *)(dword_106B31C8 + 12);
        sub_10138220(v9, (int)&savedregs);
        *(float *)(*(_DWORD *)(this + 1396) + 808) = *(float *)(dword_106B31C8 + 12) - 1.0;
        sub_10137E30(*(_DWORD *)(this + 1396), (int)v10);
        sub_100EC4A0(*(int **)(this + 1396), -1.0, 0);
        --v12;
      }
      while ( v12 );
      v7 = a2;
    }
    sub_102D19C0((char *)this, v7, a3, a4, this, a6);
  }
}
