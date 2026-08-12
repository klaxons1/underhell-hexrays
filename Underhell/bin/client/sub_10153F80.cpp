int *__thiscall sub_10153F80(_BYTE *this)
{
  int *result; // eax
  float *v3; // eax
  float *v4; // esi

  result = (int *)dword_1043CDD4;
  if ( *(_DWORD *)(dword_1043CDD4 + 48) )
  {
    v3 = (float *)sub_10034900(0x538u);
    if ( v3 )
      v4 = sub_10153E20(v3);
    else
      v4 = 0;
    (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)v4 + 324))(v4, 0, 8);
    result = (int *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 8))(v4);
    dword_103E8C58 = *result;
  }
  this[12] = 1;
  return result;
}
