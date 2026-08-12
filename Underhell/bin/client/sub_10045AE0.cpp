int __thiscall sub_10045AE0(float *this, float *a2)
{
  int result; // eax
  double v4; // st6
  double v5; // st7
  int (__thiscall *v6)(float *); // eax
  float v7[3]; // [esp+4h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 500))(this);
  if ( (_BYTE)result )
  {
    sub_10043310(this, v7);
    v4 = a2[1] + v7[1];
    v5 = a2[2] + v7[2];
    this[1155] = *a2 + v7[0];
    this[1156] = v4;
    this[1157] = v5;
    v6 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 376);
    this[1158] = *((float *)off_103DC81C + 3);
    return v6(this);
  }
  return result;
}
