unsigned int __thiscall sub_10203A50(int *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // edi
  long double v5; // st7
  bool v6; // zf
  float v7; // [esp+Ch] [ebp-2Ch]
  float v8[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v9; // [esp+28h] [ebp-10h]
  float v10; // [esp+2Ch] [ebp-Ch]
  float v11; // [esp+30h] [ebp-8h]
  float v12; // [esp+34h] [ebp-4h]

  result = this[201];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[201] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        if ( (this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        if ( this[201] == -1 || off_1061BE18[4 * (this[201] & 0xFFF) + 2] != (unsigned int)this[201] >> 12 )
          v4 = 0;
        else
          v4 = off_1061BE18[4 * (this[201] & 0xFFF) + 1];
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        v9 = *(float *)(v4 + 580) - *((float *)this + 145);
        v10 = *(float *)(v4 + 584) - *((float *)this + 146);
        v11 = *(float *)(v4 + 588) - *((float *)this + 147);
        v5 = off_10689714();
        v6 = (this[62] & 1) == 0;
        v12 = v5;
        if ( !v6 )
        {
          (*(void (__thiscall **)(int *, float *, _DWORD, _DWORD))(*this + 528))(this, v8, 0, 0);
          v5 = fabs(v9 * v8[0] + v8[1] * v10 + v8[2] * v11) * v12;
        }
        v7 = v5;
        sub_10108AE0(this + 202, SLOBYTE(v7), (int)this, (int)this);
        return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  return result;
}
