void __thiscall sub_10255330(float *this, _DWORD *a2)
{
  float *v3; // eax
  double v4; // st7
  int v5; // ecx
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st7
  double v10; // st7
  float v11; // [esp+0h] [ebp-28h]
  int v12; // [esp+10h] [ebp-18h] BYREF
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+18h] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-Ch] BYREF
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]

  if ( a2 && a2[106] )
  {
    sub_10422220(this + 182, &v15);
    v11 = -this[280];
    v3 = sub_1001F010((float *)&v12, v11, this[280]);
    v4 = *v3 + v15;
    v5 = a2[106];
    v15 = v4;
    v6 = v3[1] + v16;
    v16 = v6;
    v7 = v3[2] + v17;
    v17 = v7;
    v8 = v4 * this[279];
    v9 = this[279];
    *(float *)&v12 = v8;
    v13 = v6 * v9;
    v14 = v9 * v7;
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 236))(v5, &v12);
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
  {
    if ( fabs(this[279]) > 0.0 )
    {
      sub_10422220(this + 182, &v15);
      v10 = -(this[281] * this[279]) * 0.1;
      *(float *)&v12 = v16 * v10;
      v13 = 0.0;
      v14 = v10 * v15;
      sub_100D8FC0(a2, (int)&v12);
    }
  }
}
