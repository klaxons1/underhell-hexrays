void __thiscall sub_10266410(int this, int *a2)
{
  double v3; // st6
  double v4; // st7
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 252) & 1) == 0 )
  {
    (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 424) + 204))(*(_DWORD *)(this + 424), v5, 0);
    v3 = 0.1 * v5[2] + 0.89999998 * *(float *)(this + 1472);
    v4 = v5[1] * 0.1 + *(float *)(this + 1468) * 0.89999998;
    *(float *)(this + 1464) = v5[0] * 0.1 + *(float *)(this + 1464) * 0.89999998;
    *(float *)(this + 1468) = v4;
    *(float *)(this + 1472) = v3;
    if ( sub_101475D0((int **)(this + 1124), a2) )
      sub_100EC6E0(this, (int)a2);
  }
}
