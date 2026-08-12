float *__thiscall sub_100AD840(int this, float a2, float a3)
{
  unsigned int v4; // eax
  int v5; // ecx
  float *result; // eax
  int v7; // edi
  int v8; // eax
  float *v9; // edi
  unsigned int v10; // esi
  int v11; // ecx
  float v12; // [esp+24h] [ebp+8h]

  v12 = a2 + a3;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 4))(*(_DWORD *)(this + 4));
  if ( v12 > 0.0 )
  {
    *(float *)(this + 44) = *(float *)(dword_106B31C8 + 12) + v12;
  }
  else
  {
    *(float *)(this + 44) = *(float *)(dword_106B31C8 + 12) + 3.0;
    v12 = 0.0;
  }
  *(float *)(this + 48) = *(float *)(this + 44) - a3;
  v4 = *(_DWORD *)(this + 64);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
  sub_100ACB00(this, v5, (int)"NoteSpeaking( %f, %f ) (stop at %f)\n");
  result = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 8))(*(_DWORD *)(this + 4));
  if ( (_BYTE)result )
  {
    v7 = *(_DWORD *)(this + 64) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != *(_DWORD *)(this + 64) >> 12
       ? 0
       : off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
    result = (float *)sub_100D7680(v7);
    if ( result )
    {
      v8 = sub_100D7680(v7);
      v9 = &flt_1060B428;
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 1528))(v8, 0) )
        v9 = &flt_1060B430;
      v10 = *(_DWORD *)(this + 64);
      if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (v10 & 0xFFF) + 1];
      result = (float *)dword_106B31C8;
      *v9 = *(float *)(dword_106B31C8 + 12) + v12;
      if ( v11 )
      {
        result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
        v9[1] = *result;
      }
      else
      {
        v9[1] = NAN;
      }
    }
  }
  return result;
}
