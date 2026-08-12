bool __thiscall sub_10051150(int this)
{
  int v2; // eax
  float *v3; // eax
  double v4; // st4
  double v5; // st7
  double v6; // st4
  double v7; // st5
  bool result; // al
  float v9; // [esp+4h] [ebp-4h]

  result = 1;
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
    v9 = *(float *)(this + 76) * *(float *)(this + 76);
    v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 576))(v2);
    v4 = *v3 - *(float *)(this + 28);
    v5 = v4 * v4;
    v6 = v3[1] - *(float *)(this + 32);
    v7 = v3[2] - *(float *)(this + 36);
    if ( v7 * v7 + v6 * v6 + v5 > v9 )
      return 0;
  }
  return result;
}
