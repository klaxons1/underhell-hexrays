int __thiscall sub_101A8E80(float *this, float a2, float a3)
{
  int result; // eax
  int v5; // eax
  float *v6; // edi
  unsigned int v7; // esi
  int v8; // ecx
  float v9[3]; // [esp+4h] [ebp-20h] BYREF
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch]
  float v13; // [esp+1Ch] [ebp-8h] BYREF
  float v14; // [esp+20h] [ebp-4h] BYREF

  if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(**((_DWORD **)this + 907) + 220))(*((_DWORD *)this + 907)) > *(float *)(dword_106B31C8 + 12) )
    return 0;
  (*(void (__thiscall **)(_DWORD *, float *, float *))(**((_DWORD **)this + 907) + 212))(
    *((_DWORD **)this + 907),
    &v14,
    &v13);
  if ( a3 < (double)v14 )
    return 38;
  if ( a3 > (double)v13 )
    return 39;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v6 = (float *)v5;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v10 = v6[145] - this[145];
  v11 = v6[146] - this[146];
  v12 = v6[147] - this[147];
  off_10689714();
  v7 = *((_DWORD *)this + 908);
  if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v8 + 528))(v8, v9, 0, 0);
  if ( v10 * v9[0] + v9[1] * v11 + v9[2] * v12 >= 0.0 )
    return 21;
  result = 40;
  if ( fabs(a2) >= 0.5 )
    return 21;
  return result;
}
