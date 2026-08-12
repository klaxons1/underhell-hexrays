void __thiscall sub_1007A1A0(_DWORD *this, float *a2, float *a3, int a4, int a5)
{
  float *v6; // eax
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  double v14; // st7
  float *v15; // [esp-4h] [ebp-6Ch]
  float v16; // [esp+4h] [ebp-64h]
  _BYTE v17[44]; // [esp+14h] [ebp-54h] BYREF
  float v18; // [esp+40h] [ebp-28h]
  int v19; // [esp+60h] [ebp-8h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF
  int v21; // [esp+74h] [ebp+Ch]

  v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
  sub_10079F00((int)this, (int)&savedregs, (int)a3, (int)this, a2, a3, v6, v15, 33701899, (int)v17);
  if ( v18 < 1.0 )
  {
    v8 = v19;
    v21 = v19;
    if ( v19 != a4 )
    {
      *(_DWORD *)(a5 + 28) = v19;
      *(float *)(a5 + 16) = flt_106F1CA8;
      *(float *)(a5 + 20) = flt_106F1CAC;
      *(float *)(a5 + 24) = flt_106F1CB0;
      if ( sub_100D7680(v8) )
        v9 = -3;
      else
        v9 = ((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                dword_106B31D0,
                *(_DWORD *)(v21 + 24)) != 0)
           - 2;
      *(_DWORD *)a5 = v9;
      v10 = *a3 - *a2;
      v11 = a3[1] - a2[1];
      v12 = a3[2] - a2[2];
      v16 = v12 * v12 + v11 * v11 + v10 * v10;
      v13 = off_10689708(v16);
      v14 = v13 * (1.0 - v18);
      if ( v14 <= 0.001 )
        v14 = 0.001;
      *(float *)(a5 + 36) = v14;
    }
  }
}
