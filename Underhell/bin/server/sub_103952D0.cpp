bool __thiscall sub_103952D0(float *this, float *a2, int a3)
{
  float v4; // eax
  float v5; // ecx
  int (__thiscall *v6)(float *, int *); // edx
  int v7; // eax
  double v8; // st7
  double v9; // st5
  double v10; // st6
  int v12[3]; // [esp+10h] [ebp-18h] BYREF
  int v13; // [esp+1Ch] [ebp-Ch] BYREF
  float v14; // [esp+20h] [ebp-8h]
  float v15; // [esp+24h] [ebp-4h]

  if ( !sub_100CF460(this) || !*(_DWORD *)(dword_106EA354 + 48) )
    return 1;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v4 = this[146];
  v5 = this[147];
  v13 = *((int *)this + 145);
  v6 = *(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 504);
  v14 = v4;
  v15 = v5;
  v7 = v6(this, v12);
  v8 = *(float *)(v7 + 8);
  v15 = *(float *)(v7 + 8);
  v9 = 240.0 * a2[2];
  v10 = a2[1] * 240.0;
  *(float *)v12 = *a2 * 240.0 + *(float *)&v13;
  *(float *)&v12[1] = v10 + v14;
  *(float *)&v12[2] = v8 + v9;
  return !sub_1004B0B0(this, (float *)&v13, (float *)v12, 0.13053, 36.0);
}
