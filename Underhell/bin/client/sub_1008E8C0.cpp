float *__thiscall sub_1008E8C0(int this)
{
  char v1; // al

  if ( (*(_BYTE *)(this + 36) & 0x40) != 0 )
    return &flt_1045924C;
  v1 = *(_BYTE *)(this + 41);
  if ( v1 == 2 || !v1 )
    return &flt_1045924C;
  else
    return (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 40))(*(_DWORD *)(this + 4));
}
