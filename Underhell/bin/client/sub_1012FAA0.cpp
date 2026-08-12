int __thiscall sub_1012FAA0(int this, int a2, int a3, int a4, int a5, float a6, float a7)
{
  int v8; // ebx
  double v10; // st5
  double v11; // st2
  double v12; // st7
  long double v13; // st3
  long double v14; // rt2
  long double v15; // st2
  long double v16; // st1
  long double v17; // st0
  double v18; // st5
  float v19; // [esp+30h] [ebp-58h] BYREF
  float v20; // [esp+34h] [ebp-54h]
  float v21; // [esp+38h] [ebp-50h]
  float v22; // [esp+3Ch] [ebp-4Ch]
  float v23; // [esp+40h] [ebp-48h]
  float v24; // [esp+44h] [ebp-44h]
  float v25; // [esp+48h] [ebp-40h]
  float v26; // [esp+4Ch] [ebp-3Ch]
  float v27; // [esp+50h] [ebp-38h]
  float v28; // [esp+54h] [ebp-34h]
  float v29; // [esp+58h] [ebp-30h]
  float v30; // [esp+5Ch] [ebp-2Ch]
  float v31; // [esp+60h] [ebp-28h]
  float v32; // [esp+64h] [ebp-24h]
  float v33; // [esp+68h] [ebp-20h]
  float v34; // [esp+6Ch] [ebp-1Ch]
  float v35; // [esp+78h] [ebp-10h]
  float v36; // [esp+84h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(this + 24));
  v8 = *(_DWORD *)dword_1047CA6C;
  LODWORD(v36) = *(unsigned __int8 *)(this + 31);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(v8 + 44))(
    dword_1047CA6C,
    *(unsigned __int8 *)(this + 28),
    *(unsigned __int8 *)(this + 29),
    *(unsigned __int8 *)(this + 30),
    (int)((double)SLODWORD(v36) * a7));
  if ( 0.0 == a6 )
  {
    if ( *(_BYTE *)(this + 52) )
      return (*(int (__thiscall **)(int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C
                                                                                            + 392))(
               dword_1047CA6C,
               a2,
               a3,
               a2 + a4,
               a3 + a5,
               *(float *)(this + 56),
               *(float *)(this + 60),
               *(float *)(this + 64),
               *(float *)(this + 68));
    else
      return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
               dword_1047CA6C,
               a2,
               a3,
               a2 + a4,
               a3 + a5);
  }
  else
  {
    v10 = (double)a4;
    v11 = (double)a5;
    v36 = 0.5 * v11 + (double)a3;
    v12 = v11;
    v13 = -a6 * 3.141592653589793 * 0.005555555555555556;
    v14 = cos(v13);
    v15 = sin(v13);
    v35 = -v15;
    v21 = 0.0;
    v22 = 0.0;
    v20 = v10 * -0.5 * v15 + v36;
    v16 = v10 * 0.5 + (double)a2 + v10 * -0.5 * v14 + v35 * (v12 * -0.5);
    v19 = v16;
    v20 = v12 * -0.5 * v14 + v20;
    v25 = 1.0;
    v26 = 0.0;
    v17 = v10 * v14 + v16;
    v23 = v17;
    v24 = v15 * v10 + v20;
    v29 = 1.0;
    v30 = 1.0;
    v18 = v12 * v35;
    v27 = v17 + v18;
    v28 = v24 + v14 * v12;
    v33 = 0.0;
    v34 = 1.0;
    v31 = v16 + v18;
    v32 = v14 * v12 + v20;
    return (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA6C + 396))(dword_1047CA6C, 4, &v19);
  }
}
