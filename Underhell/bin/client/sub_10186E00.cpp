int __thiscall sub_10186E00(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  unsigned int v4; // ecx
  float v5; // edx
  double v6; // st7
  void (__thiscall *v7)(_DWORD *, float *); // edx
  float v8[24]; // [esp+4h] [ebp-6Ch] BYREF
  float v9; // [esp+64h] [ebp-Ch]
  int v10; // [esp+68h] [ebp-8h]
  int v11; // [esp+6Ch] [ebp-4h]

  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, this[1575]);
  v10 = 0;
  if ( (int)this[1444] > 0 )
  {
    v11 = 0;
    do
    {
      v3 = v11 + this[1441];
      v9 = 0.0;
      v4 = v3 + 16 + strlen((const char *)(v3 + 16)) + 1;
      LODWORD(v5) = v3 + 16;
      if ( (int)(v4 - (v3 + 17)) <= 0 )
        v5 = v9;
      v6 = *(float *)(v3 + 64);
      if ( (*(_BYTE *)(v3 + 88) & 1) != 0 )
      {
        if ( *((_BYTE *)this + 6332) )
          v6 = 90.0;
      }
      qmemcpy(v8, (const void *)v3, sizeof(v8));
      v8[16] = v6;
      v8[23] = v5;
      v7 = *(void (__thiscall **)(_DWORD *, float *))(*this + 220);
      v8[21] = *(float *)(v3 + 12);
      v7(this, v8);
      v11 += 96;
      result = v10 + 1;
      v10 = result;
    }
    while ( result < this[1444] );
  }
  return result;
}
