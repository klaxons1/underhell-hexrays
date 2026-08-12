bool __thiscall sub_102A6C00(int this)
{
  int *v3; // ebx
  int v4; // esi
  int v5[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 148) )
    return 0;
  v3 = (int *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
  sub_10260A10((int)v3, this, v3, 1.0, (float *)v5);
  v4 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  return fabs(*(float *)&v5[1] - *(float *)(v4 + 584))
       + fabs(*(float *)v5 - *(float *)(v4 + 580))
       + fabs(*(float *)&v5[2] - *(float *)(v4 + 588)) < 1000.0
      && sub_10260DA0(*(_DWORD *)(this + 4), (int)v3, 0.70710677, 0);
}
