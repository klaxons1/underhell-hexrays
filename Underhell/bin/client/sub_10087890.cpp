float *__thiscall sub_10087890(int this, unsigned __int16 a2)
{
  int v3; // eax
  int *v4; // ebx
  float *v6; // esi
  float *v7; // eax
  int v8; // eax
  int v9; // [esp+14h] [ebp+8h]
  int v10; // [esp+14h] [ebp+8h]

  v9 = 168 * a2;
  v3 = sub_1007A730(off_103DCD78, *(_DWORD *)(v9 + *(_DWORD *)(this + 36)));
  v4 = (int *)v3;
  if ( !*(_BYTE *)(this + 320) )
    return sub_10087110((_DWORD *)this, v3);
  v6 = (float *)sub_1000ED40();
  v7 = (float *)(*(_DWORD *)(this + 36) + v9 + 84);
  *v6 = *v7;
  v6[1] = v7[1];
  v6[2] = v7[2];
  v10 = *v4;
  v8 = sub_10085210(this, (int)v4);
  (*(void (__thiscall **)(int *, float *, int))(v10 + 100))(v4, v6, v8);
  return v6;
}
