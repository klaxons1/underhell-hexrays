_DWORD *__thiscall sub_1012A730(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int *v5; // edi
  _DWORD *result; // eax
  double v7; // st7
  int v8; // esi
  int v9; // eax
  float v10; // [esp+Ch] [ebp-64h]
  float v11; // [esp+Ch] [ebp-64h]
  _DWORD v12[20]; // [esp+1Ch] [ebp-54h] BYREF
  _BYTE v13[4]; // [esp+6Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 308);
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4) && *v3 )
  {
    if ( v3[1] == v4 )
      v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)*v3 + 208))(*v3);
    else
      v5 = (int *)(*(int (__thiscall **)(_DWORD))(MEMORY[0] + 208))(0);
  }
  else
  {
    v5 = 0;
  }
  result = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v13);
  if ( *result )
  {
    if ( !v5 )
      return (_DWORD *)sub_1025FAC0(this);
  }
  else if ( !v5 )
  {
    return result;
  }
  sub_100EBE30((int)v5, 16);
  if ( (v5[64] & 0x20000000) != 0 )
    sub_100FB020(this, 0);
  v7 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 800);
  if ( v7 < *(float *)(this + 804) )
  {
    v10 = *(float *)(this + 800) + *(float *)(this + 804);
    return (_DWORD *)sub_100EC4A0((int *)this, v10, 0);
  }
  if ( *(float *)(this + 824) + *(float *)(this + 820) <= v7 )
  {
    v8 = sub_1025FB50(1);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 96))(dword_106B3CDC);
    sub_10248110(v8, v8, 10000.0, v9 | 0x400000, 0);
    sub_100D9E70(v5, v8, v12);
    if ( v5 != (int *)v8 )
      sub_1025FAC0(v5);
    return (_DWORD *)sub_1025FAC0(this);
  }
  v11 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 12);
  return (_DWORD *)sub_100EC4A0((int *)this, v11, 0);
}
