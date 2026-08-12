void __thiscall sub_10137E30(int this, int a2)
{
  int v2; // edi
  int v4; // eax
  _DWORD *v5; // eax

  v2 = a2 + 12;
  sub_100FAB60(this, (float *)(a2 + 12));
  v4 = *(_DWORD *)(this + 972);
  if ( v4 )
    sub_1025F370(v4, v2, 0);
  if ( *(float *)(this + 808) + 0.1 <= *(float *)(dword_106B31C8 + 12) )
  {
    sub_100F9D30((float *)this, a2);
    v5 = sub_100F9650((_DWORD *)this);
    sub_100F9CD0((_DWORD *)this, (int)v5, v2);
  }
}
