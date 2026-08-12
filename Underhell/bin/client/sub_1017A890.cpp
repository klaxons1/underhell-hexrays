void __thiscall sub_1017A890(int this, int *a2)
{
  int v2; // ecx
  _DWORD *v3; // eax
  bool i; // zf

  if ( *(float *)(this + 260) >= (double)*((float *)off_103DC81C + 3) )
  {
    if ( (*(_BYTE *)(this + 272) & 1) != 0 )
      sub_100F2DE0((void *)this, (int)a2);
  }
  else
  {
    v2 = a2[1];
    v3 = *(_DWORD **)(v2 + 8);
    for ( i = v3 == (_DWORD *)(v2 + 4); !i; i = v3 == (_DWORD *)(a2[1] + 4) )
    {
      a2[4] = v3[1];
      sub_100EB9C0(*a2, v3);
      v3 = (_DWORD *)a2[4];
    }
  }
}
