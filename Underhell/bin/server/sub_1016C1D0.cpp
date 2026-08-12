_DWORD *__thiscall sub_1016C1D0(_DWORD *this)
{
  char *v2; // eax
  _DWORD *result; // eax
  int i; // edi
  char *v5; // eax
  float *v6; // ebx
  int (__thiscall *v7)(_DWORD *); // eax
  char *v8; // eax
  float v9[3]; // [esp+8h] [ebp-18h] BYREF
  float v10[3]; // [esp+14h] [ebp-Ch] BYREF

  this[16] = 0;
  memset(this + 17, 0, 0x100u);
  v2 = (char *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
  result = sub_1012BC90(&dword_1069E3E0, 0, v2);
  for ( i = (int)result; result; i = (int)result )
  {
    if ( (int)this[16] >= 64 )
      break;
    v5 = *(char **)(i + 212);
    if ( !v5 )
      v5 = (char *)String;
    v6 = (float *)sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
    if ( v6 )
    {
      if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
        sub_100DAE60(i);
      if ( ((_DWORD)v6[63] & 0x800) != 0 )
        sub_100DAE60((int)v6);
      v10[0] = v6[145] - *(float *)(i + 580);
      v10[1] = v6[146] - *(float *)(i + 584);
      v10[2] = v6[147] - *(float *)(i + 588);
      sub_10422540(v10, v9);
      sub_100E0EA0(i, v9);
    }
    this[this[16] + 17] = i;
    v7 = *(int (__thiscall **)(_DWORD *))(*this + 8);
    ++this[16];
    v8 = (char *)v7(this);
    result = sub_1012BC90(&dword_1069E3E0, i, v8);
  }
  return result;
}
