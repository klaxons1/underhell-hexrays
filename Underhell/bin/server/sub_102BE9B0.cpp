float *__thiscall sub_102BE9B0(char *this, float a2, float *a3, float *a4, float *a5, float *a6, float a7)
{
  float v7; // edx
  float v9; // ecx
  double v10; // st7
  float *result; // eax
  _BYTE *v12; // edi
  float *v13; // edi
  double v14; // st7
  double v15; // st6
  float *v16; // edi
  int v17; // ecx
  float *v18; // esi
  float v19; // [esp+14h] [ebp-28h]
  float v20; // [esp+24h] [ebp-18h]
  float v21; // [esp+28h] [ebp-14h]
  float v22; // [esp+2Ch] [ebp-10h]
  float v23; // [esp+30h] [ebp-Ch] BYREF
  float v24; // [esp+34h] [ebp-8h]
  float v25; // [esp+38h] [ebp-4h]
  float v26; // [esp+44h] [ebp+8h]
  int v27; // [esp+44h] [ebp+8h]
  float v28; // [esp+58h] [ebp+1Ch]
  float v29; // [esp+58h] [ebp+1Ch]
  float v30; // [esp+58h] [ebp+1Ch]
  float v31; // [esp+58h] [ebp+1Ch]
  float v32; // [esp+58h] [ebp+1Ch]

  v7 = a3[1];
  v23 = *a3;
  v9 = a3[2];
  v24 = v7;
  v25 = v9;
  if ( !LOBYTE(a7) )
  {
    v20 = *a3 - *a6;
    v21 = a3[1] - a6[1];
    v22 = a3[2] - a6[2];
    off_10689714();
    v10 = *((float *)this + 13) * *((float *)this + 14);
    v23 = v20 * v10 + *a6;
    v24 = v21 * v10 + a6[1];
    v25 = v10 * v22 + a6[2];
  }
  if ( *((_DWORD *)this + 15) != LODWORD(a2) )
  {
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 60));
    *((float *)this + 15) = a2;
  }
  sub_102BE2D0((float *)this + 1, &v23);
  sub_102BE330((float *)this + 4, &v23);
  sub_102BE390((float *)this + 7, a5);
  result = sub_102BE3F0((float *)this + 10, a4);
  if ( *((_DWORD *)this + 23) != COERCE_INT(0.0) )
  {
    result = (float *)(**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 92));
    *((float *)this + 23) = 0.0;
  }
  if ( this[112] )
  {
    result = (float *)(**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 112));
    this[112] = 0;
  }
  v12 = this + 76;
  if ( LOBYTE(a7) != this[76] )
  {
    result = (float *)(**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 76));
    *v12 = LOBYTE(a7);
  }
  if ( *v12 )
  {
    if ( *((_DWORD *)this + 27) != COERCE_INT(1.0) )
    {
      (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 108));
      *((float *)this + 27) = 1.0;
    }
    sub_102BE450((float *)this + 24, &flt_106F1CA8);
    v19 = *((float *)this + 8) * *((float *)this + 8) + *((float *)this + 7) * *((float *)this + 7);
    v28 = off_10689708(v19);
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 80));
    *((float *)this + 20) = *a6 - *a3;
    *((float *)this + 21) = a6[1] - a3[1];
    *((float *)this + 22) = a6[2] - a3[2];
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 80));
    *((float *)this + 22) = 0.0;
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 80));
    v26 = off_10689714();
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 28));
    *((float *)this + 7) = *((float *)this + 20) * v28;
    (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 28));
    v13 = (float *)(this + 72);
    *((float *)this + 8) = *((float *)this + 21) * v28;
    v29 = v26 / *((float *)this + 13);
    if ( *((_DWORD *)this + 18) != LODWORD(v29) )
    {
      (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 72));
      *v13 = v29;
    }
    if ( *((_DWORD *)this + 23) != COERCE_INT(0.0) )
    {
      (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 92));
      *((float *)this + 23) = 0.0;
    }
    v14 = *((float *)this + 9) * *v13;
    *(float *)&v27 = v14;
    v30 = sqrt(*v13 * *v13 + v14 * v14);
    if ( *((_DWORD *)this + 14) != LODWORD(v30) )
    {
      (**(void (__thiscall ***)(void *, int))this)(this, (int)(this + 56));
      *((float *)this + 14) = v30;
      v14 = *(float *)&v27;
    }
    v15 = a6[2] - a3[2];
    result = (float *)*((_DWORD *)this + 16);
    v16 = (float *)(this + 64);
    v31 = (v15 + v15 - *((float *)this + 13) * v14) / *((float *)this + 13);
    if ( result != (float *)LODWORD(v31) )
    {
      result = (float *)(**(int (__thiscall ***)(void *, int))this)(this, (int)(this + 64));
      *v16 = v31;
      v14 = *(float *)&v27;
    }
    v17 = *((_DWORD *)this + 17);
    v18 = (float *)(this + 68);
    v32 = (v14 - *v16) / *(v18 - 4);
    if ( v17 != LODWORD(v32) )
    {
      result = (float *)(**((int (__thiscall ***)(int, float *))v18 - 17))((int)(v18 - 17), v18);
      *v18 = v32;
    }
  }
  return result;
}
