char __thiscall sub_101885F0(int *this, int a2, float *a3)
{
  int v3; // esi
  int v5; // eax
  _DWORD *v6; // edx
  int *v7; // edi
  int v8; // esi
  int v9; // eax

  v3 = *(_DWORD *)(a2 + 76);
  if ( !v3 || v3 == this[1] )
    return 0;
  v5 = this[5] - 1;
  if ( v5 < 0 )
  {
LABEL_8:
    v7 = this + 2;
    v8 = 96 * sub_10188510(this + 2);
    sub_1007A030(*v7 + v8 + 12, a2);
    v9 = *v7;
    *(float *)(v9 + v8) = *a3;
    *(float *)(v9 + v8 + 4) = a3[1];
    *(float *)(v9 + v8 + 8) = a3[2];
    return 1;
  }
  else
  {
    v6 = (_DWORD *)(96 * v5 + this[2] + 88);
    while ( *v6 != v3 )
    {
      v6 -= 24;
      if ( --v5 < 0 )
        goto LABEL_8;
    }
    return 0;
  }
}
