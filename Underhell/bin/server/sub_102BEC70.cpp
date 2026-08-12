float *__thiscall sub_102BEC70(int this, float a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  int v9; // esi
  float *v10; // ebx
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float *result; // eax
  double v15; // st7
  double v16; // st7
  float *v17; // esi
  double v18; // st6
  int v19; // ecx
  double v20; // st7
  float *v21; // edi
  float v22; // [esp+14h] [ebp-1Ch]
  float v23; // [esp+2Ch] [ebp-4h]
  float v24; // [esp+2Ch] [ebp-4h]
  float v25; // [esp+2Ch] [ebp-4h]
  float v26; // [esp+38h] [ebp+8h]
  float v27; // [esp+38h] [ebp+8h]
  float v28; // [esp+3Ch] [ebp+Ch]
  float v29; // [esp+3Ch] [ebp+Ch]
  float v30; // [esp+3Ch] [ebp+Ch]
  int v31; // [esp+50h] [ebp+20h]

  v9 = this + 80;
  sub_102BE7C0((float *)(this + 80), *a5, a5[1], 0.0);
  (**(void (__thiscall ***)(int, int))(v9 - 80))(v9 - 80, v9);
  v10 = (float *)(this + 72);
  v23 = off_10689714() * *(float *)(this + 56);
  if ( *(_DWORD *)(this + 72) != LODWORD(v23) )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 72);
    *v10 = v23;
  }
  v24 = *(float *)(this + 52) * *v10;
  v11 = a3[1] - a6[1];
  v12 = *a3 - *a6;
  v22 = v12 * v12 + v11 * v11;
  v13 = v24 - off_10689708(v22);
  if ( v13 <= 0.0 )
    return sub_102BE9B0((char *)this, a2, a3, a4, a5, a6, 0.0);
  if ( *(_DWORD *)(this + 60) != LODWORD(a2) )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 60);
    *(float *)(this + 60) = a2;
    v25 = v13;
    v13 = v25;
  }
  v26 = v13 / *v10;
  if ( *(_DWORD *)(this + 92) != LODWORD(v26) )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 92);
    *(float *)(this + 92) = v26;
  }
  sub_102BE450((float *)(this + 96), a7);
  if ( *(_DWORD *)(this + 108) != LODWORD(a8) )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 108);
    *(float *)(this + 108) = a8;
  }
  sub_102BE330((float *)(this + 16), a3);
  sub_102BE390((float *)(this + 28), a5);
  sub_102BE3F0((float *)(this + 40), a4);
  if ( *(_BYTE *)(this + 112) != 1 )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 112);
    *(_BYTE *)(this + 112) = 1;
  }
  if ( *(_BYTE *)(this + 76) )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 76);
    *(_BYTE *)(this + 76) = 0;
  }
  v27 = *v10 / a8;
  if ( *(_DWORD *)v10 != LODWORD(v27) )
  {
    (**(void (__thiscall ***)(int, int))this)(this, this + 72);
    *v10 = v27;
  }
  (**(void (__thiscall ***)(int, int))this)(this, this + 4);
  v15 = 1.0 / *(float *)(this + 108);
  *(float *)(this + 4) = *a3 * v15 + *a7;
  *(float *)(this + 8) = a3[1] * v15 + a7[1];
  *(float *)(this + 12) = v15 * a3[2] + a7[2];
  (**(void (__thiscall ***)(int, int))this)(this, this + 4);
  v16 = -(*(float *)(this + 92) * *(float *)(this + 72));
  *(float *)(this + 4) = *(float *)(this + 80) * v16 + *(float *)(this + 4);
  *(float *)(this + 8) = *(float *)(this + 84) * v16 + *(float *)(this + 8);
  *(float *)(this + 12) = v16 * *(float *)(this + 88) + *(float *)(this + 12);
  v28 = *(float *)(this + 116) / a8;
  *(float *)&v31 = *(float *)(this + 36) * *(float *)(this + 56) / a8;
  result = (float *)(**(int (__thiscall ***)(int, int))this)(this, this + 4);
  *(float *)(this + 12) = *(float *)(this + 12) + v28;
  v17 = (float *)(this + 68);
  v18 = v28 + *(float *)(this + 92) * *(float *)&v31;
  v29 = (v18 + v18) / (*(float *)(this + 92) * *(float *)(this + 92));
  if ( *(_DWORD *)(this + 68) != LODWORD(v29) )
  {
    result = (float *)(**(int (__thiscall ***)(int, int))this)(this, this + 68);
    *v17 = v29;
  }
  v19 = *(_DWORD *)(this + 64);
  v20 = *(float *)(this + 92) * *v17;
  v21 = (float *)(this + 64);
  v30 = *(float *)&v31 - v20;
  if ( v19 != LODWORD(v30) )
  {
    result = (float *)(**((int (__thiscall ***)(int, float *))v21 - 16))((int)(v21 - 16), v21);
    *v21 = v30;
  }
  return result;
}
