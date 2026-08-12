float *__thiscall sub_1010F610(_BYTE *this, float *a2, float *a3)
{
  _BYTE *v3; // esi
  char v4; // al
  _BYTE *v5; // edi
  int v6; // eax
  float *result; // eax
  float *v8; // eax
  int v9; // [esp-10h] [ebp-14h]

  v3 = this + 348;
  if ( (this[384] & 0x40) != 0 || (v4 = this[389], v4 == 2) || !v4 )
  {
    v5 = this - 4;
    sub_10037F50((int)(this - 4));
    v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 8))(v3);
    v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 4))(v3);
    return (float *)sub_101F1180(v5 + 660, v6, v9, a2, a3);
  }
  else
  {
    v8 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 4))(this + 348);
    *a2 = *v8;
    a2[1] = v8[1];
    a2[2] = v8[2];
    result = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 8))(v3);
    *a3 = *result;
    a3[1] = result[1];
    a3[2] = result[2];
  }
  return result;
}
