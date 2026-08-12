float *__thiscall sub_103C6F00(float *this, float *a2, int a3, float a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int (__thiscall *v9)(float *); // eax
  double v10; // st5
  float *v11; // eax
  int v12; // eax
  float *v13; // eax
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st2
  double v18; // st7
  float *result; // eax
  double v20; // st5
  double v21; // st6
  double v22; // st7
  double v23; // st3
  double v24; // st4
  float v25; // [esp+10h] [ebp-24h] BYREF
  float v26; // [esp+14h] [ebp-20h]
  float v27; // [esp+18h] [ebp-1Ch]
  float v28; // [esp+1Ch] [ebp-18h] BYREF
  float v29; // [esp+20h] [ebp-14h]
  float v30; // [esp+24h] [ebp-10h]
  float v31; // [esp+28h] [ebp-Ch]
  float v32; // [esp+2Ch] [ebp-8h]
  float v33; // [esp+30h] [ebp-4h]
  float v34; // [esp+44h] [ebp+10h]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
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
  v31 = *v11 - v25;
  v32 = v11[1] - v26;
  v33 = v11[2] - v27;
  v12 = sub_100BEAD0((int)this, "ValveBiped.neck1");
  if ( v12 < 0 )
  {
    v13 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v28 = *v13;
    v29 = v13[1];
    v30 = v13[2];
  }
  else
  {
    sub_100BEB30((int)this, v12, (int)&v28, (int)&v25);
  }
  v14 = v28 - v31;
  v25 = v14;
  v15 = v29 - v32;
  v16 = v32;
  v26 = v15;
  v17 = v30 - v33;
  v27 = v17;
  if ( LOBYTE(a4) )
  {
    v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            0.5);
    v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            0.5);
    result = a2;
    v20 = v25 * v18 + v25 * v34 + v31;
    v21 = v26 * v34 + v32 + v26 * v18;
    v22 = v18 * v27 + v27 * v34 + v33;
    *a2 = v20;
    a2[1] = v21;
    a2[2] = v22;
  }
  else
  {
    result = a2;
    v23 = v15 * 0.5;
    v24 = v33;
    *a2 = v31 + v14 * 0.5;
    a2[1] = v16 + v23;
    a2[2] = v17 * 0.5 + v24;
  }
  return result;
}
