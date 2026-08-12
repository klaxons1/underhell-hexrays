int __thiscall sub_10143630(int this)
{
  double v2; // st7
  int result; // eax
  int v4; // ebx
  double v5; // st7
  int v6; // ecx
  char *v7; // esi
  int *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // ebx
  float v13; // [esp+8h] [ebp-20h]
  float v14[3]; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]

  sub_100EC3F0((_DWORD *)this, (int)sub_10142DE0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v13 = *(float *)(this + 588) + 1000.0;
  v2 = *(float *)(this + 588);
  result = sub_102604A0(this + 580, *(float *)(this + 588), v13);
  *(float *)(this + 820) = v2;
  v4 = 0;
  for ( i = 0; v4 < *(_DWORD *)(this + 808); i = v4 )
  {
    v5 = RandomFloat(0.0, 360.0);
    v6 = *(_DWORD *)(this + 252);
    v14[0] = 0.0;
    v14[2] = 0.0;
    v14[1] = v5;
    if ( (v6 & 0x800) != 0 )
      sub_100DAE60(this);
    v7 = sub_100E3960((int)"fish", (float *)(this + 580), v14, this);
    result = sub_10142070(v7, *(float *)&this, v4);
    if ( v7 )
    {
      v8 = (int *)(*(int (__thiscall **)(char *))(*(_DWORD *)v7 + 8))(v7);
      v9 = *(_DWORD *)(this + 840);
      v15 = *v8;
      v10 = *(_DWORD *)(this + 832);
      if ( v9 + 1 > v10 )
        sub_102ABFC0(v9 - v10 + 1);
      ++*(_DWORD *)(this + 840);
      v11 = *(_DWORD *)(this + 828);
      result = *(_DWORD *)(this + 840) - v9 - 1;
      *(_DWORD *)(this + 844) = v11;
      if ( result > 0 )
        result = (int)memcpy((void *)(v11 + 4 * v9 + 4), (const void *)(v11 + 4 * v9), 4 * result);
      v12 = (_DWORD *)(*(_DWORD *)(this + 828) + 4 * v9);
      if ( v12 )
        *v12 = v15;
    }
    v4 = i + 1;
  }
  return result;
}
