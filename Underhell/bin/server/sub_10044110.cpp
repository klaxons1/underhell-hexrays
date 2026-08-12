char __thiscall sub_10044110(_DWORD *this, _DWORD *a2, float *a3, float a4, float *a5)
{
  _DWORD *v5; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  float *v10; // eax
  double v11; // st7
  unsigned __int8 (__thiscall *v12)(_DWORD *, int *, float *); // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float v17; // [esp+4h] [ebp-54h]
  float v18[3]; // [esp+30h] [ebp-28h] BYREF
  int v19[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  int v20; // [esp+48h] [ebp-10h] BYREF
  float v21; // [esp+4Ch] [ebp-Ch]
  float v22; // [esp+50h] [ebp-8h]
  int v23; // [esp+54h] [ebp-4h]
  int v24; // [esp+60h] [ebp+8h]

  v5 = a2;
  if ( !a2 )
    v5 = this;
  v21 = flt_10689734;
  v7 = v5[63];
  *(float *)&v20 = flt_10689730;
  v8 = this[704];
  v22 = flt_10689738;
  v23 = v8;
  if ( (v7 & 0x800) != 0 )
    sub_100DAE60(v5);
  v9 = (int)(v5 + 145);
  (*(void (__thiscall **)(_DWORD *, int *))(*v5 + 504))(v5, v19);
  if ( (!this[699] || (_DWORD *)sub_100B1560(0, 1) == this)
    && (v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 532))(this),
        v18[0] = *v10 + *a3,
        v18[1] = v10[1] + a3[1],
        v11 = v10[2] + a3[2],
        v12 = *(unsigned __int8 (__thiscall **)(_DWORD *, int *, float *))(*this + 1944),
        v18[2] = v11,
        v12(this, v19, v18))
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, float *, _DWORD))(*this + 1932))(this, a3, 0) )
  {
    v13 = *a3;
    v14 = a3[1];
    v15 = a3[2];
  }
  else
  {
    *(float *)&v24 = a4 * 0.5;
    if ( !(unsigned __int8)sub_100B3F30((int)a3, v9, (int)v19, 0.0, *(float *)&v24, (int)&v20)
      && !(unsigned __int8)sub_100B2A60((int)a3, (int)v19, 0.0, *(float *)&v24, 3, (int)&v20) )
    {
      v17 = *(float *)&v24 - 0.1;
      if ( !(unsigned __int8)sub_100B3F30((int)a3, v9, (int)v19, v17, a4, (int)&v20) )
        sub_100B2A60((int)a3, (int)v19, 0.0, a4, 5, (int)&v20);
    }
    v14 = v21;
    v15 = v22;
    v13 = *(float *)&v20;
  }
  if ( v13 == flt_10689730 && v14 == flt_10689734 && v15 == flt_10689738 )
    return 0;
  *a5 = v13;
  a5[1] = v14;
  a5[2] = v15;
  return 1;
}
