int __thiscall sub_100C8D90(char *this, float a2, int a3, int a4, int a5, int a6, float a7, int a8)
{
  float v9; // edx
  float v10; // eax
  float *v11; // eax
  double v12; // st7
  double v13; // st7
  double v14; // st7
  int (__thiscall *v15)(char *, float *, float *, int, int, int, int, _DWORD, int); // edx
  float v17[3]; // [esp+Ch] [ebp-24h] BYREF
  float v18[3]; // [esp+18h] [ebp-18h] BYREF
  float v19; // [esp+24h] [ebp-Ch] BYREF
  float v20; // [esp+28h] [ebp-8h]
  float v21; // [esp+2Ch] [ebp-4h]

  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10422220(this + 704, v18);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60(this);
  v9 = *((float *)this + 146);
  v10 = *((float *)this + 147);
  v19 = *((float *)this + 145);
  v20 = v9;
  v21 = v10;
  v11 = (float *)sub_10022D70();
  *v11 = *((float *)this + 85) - *((float *)this + 82);
  v11[1] = *((float *)this + 86) - *((float *)this + 83);
  v12 = *((float *)this + 87) - *((float *)this + 84);
  v11[2] = v12;
  v13 = v12 * 0.5;
  if ( v13 < *(float *)(a4 + 8) )
    v13 = *(float *)(a4 + 8) + 1.0;
  v14 = v13 + v21;
  v15 = *(int (__thiscall **)(char *, float *, float *, int, int, int, int, _DWORD, int))(*(_DWORD *)this + 1068);
  v21 = v14;
  v17[0] = v18[0] * a2 + v19;
  v17[1] = v18[1] * a2 + v20;
  v17[2] = v14 + a2 * v18[2];
  return v15(this, &v19, v17, a3, a4, a5, a6, LODWORD(a7), a8);
}
