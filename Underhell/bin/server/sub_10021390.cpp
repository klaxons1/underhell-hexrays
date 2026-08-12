float *__thiscall sub_10021390(float *this, float *a2, int a3, float a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int (__thiscall *v9)(float *); // eax
  double v10; // st5
  float *v11; // eax
  void (__thiscall *v12)(float *, float *); // edx
  double v13; // st6
  double v14; // st4
  double v15; // st2
  double v16; // st7
  float *result; // eax
  double v18; // st5
  double v19; // st6
  double v20; // st7
  double v21; // st3
  double v22; // st4
  double v23; // rtt
  float v24[3]; // [esp+14h] [ebp-24h] BYREF
  float v25; // [esp+20h] [ebp-18h]
  float v26; // [esp+24h] [ebp-14h]
  float v27; // [esp+28h] [ebp-10h]
  float v28; // [esp+2Ch] [ebp-Ch]
  float v29; // [esp+30h] [ebp-8h]
  float v30; // [esp+34h] [ebp-4h]
  float v31; // [esp+48h] [ebp+10h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
  v6 = *v5 - this[145];
  v7 = v5[1] - this[146];
  v8 = v5[2];
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 576);
  v10 = v8 - this[147];
  v25 = v6 * 0.25;
  v26 = v7 * 0.25;
  v27 = 0.25 * v10;
  v11 = (float *)v9(this);
  v12 = *(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 504);
  v28 = *v11 - v25;
  v29 = v11[1] - v26;
  v30 = v11[2] - v27;
  v12(this, v24);
  v13 = v24[0] - v28;
  v25 = v13;
  v14 = v24[1] - v29;
  v26 = v14;
  v15 = v24[2] - v30;
  v27 = v15;
  if ( LOBYTE(a4) )
  {
    v31 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            0.5);
    v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            0.5);
    result = a2;
    v18 = v25 * v16 + v25 * v31 + v28;
    v19 = v26 * v31 + v29 + v26 * v16;
    v20 = v16 * v27 + v27 * v31 + v30;
    *a2 = v18;
    a2[1] = v19;
    a2[2] = v20;
  }
  else
  {
    result = a2;
    v21 = v14 * 0.5;
    v22 = v30;
    v23 = v29 + v21;
    *a2 = v28 + v13 * 0.5;
    a2[1] = v23;
    a2[2] = v15 * 0.5 + v22;
  }
  return result;
}
