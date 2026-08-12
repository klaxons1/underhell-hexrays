float *__thiscall sub_10206B20(_DWORD *this, float *a2)
{
  int v3; // ecx
  float *result; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  v3 = this[106];
  if ( v3 )
  {
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 176))(v3, v5);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    return (float *)sub_10421B40(v5, this + 125, a2);
  }
  else
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  return result;
}
