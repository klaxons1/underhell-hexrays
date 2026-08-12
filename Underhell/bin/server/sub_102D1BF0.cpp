void __thiscall sub_102D1BF0(char *this, int a2, float *a3, float *a4, int a5, int a6)
{
  float *v6; // ebx
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  bool v16; // zf
  void (__thiscall *v17)(char *, _DWORD *); // edx
  _DWORD v18[7]; // [esp+4h] [ebp-58h] BYREF
  float v19; // [esp+20h] [ebp-3Ch]
  float v20; // [esp+24h] [ebp-38h]
  float v21; // [esp+28h] [ebp-34h]
  float v22; // [esp+2Ch] [ebp-30h]
  int v23; // [esp+30h] [ebp-2Ch]
  int v24; // [esp+34h] [ebp-28h]
  int v25; // [esp+38h] [ebp-24h]
  int v26; // [esp+3Ch] [ebp-20h]
  int v27; // [esp+40h] [ebp-1Ch]
  int v28; // [esp+44h] [ebp-18h]
  float v29; // [esp+48h] [ebp-14h]
  int v30; // [esp+4Ch] [ebp-10h]
  int v31; // [esp+50h] [ebp-Ch]
  __int16 v32; // [esp+54h] [ebp-8h]
  char v33; // [esp+57h] [ebp-5h]
  __int16 v34; // [esp+58h] [ebp-4h]
  int v35; // [esp+6Ch] [ebp+10h]

  v6 = a4;
  v29 = 1.0;
  *(float *)&v18[1] = *a3;
  *(float *)&v18[2] = a3[1];
  v28 = 0;
  v8 = a3[2];
  v31 = 0;
  *(float *)&v18[3] = v8;
  v32 = 1;
  v9 = *a4;
  v25 = 0;
  *(float *)&v18[4] = v9;
  v34 = 0;
  v10 = a4[1];
  v33 = 0;
  *(float *)&v18[5] = v10;
  v18[0] = 1;
  *(float *)&v18[6] = a4[2];
  if ( (_BYTE)a6 )
  {
    v19 = flt_10662E40[0];
    v20 = flt_10662E44;
    v11 = flt_10662E48;
  }
  else
  {
    v12 = &flt_10662E40[3 * *((_DWORD *)this + 208)];
    v19 = *v12;
    v20 = v12[1];
    v11 = v12[2];
  }
  v13 = *((_DWORD *)this + 204);
  v21 = v11;
  v26 = v13;
  v22 = 56755.84;
  v30 = a5;
  v14 = *((_DWORD *)this + 75);
  v24 = 1;
  v27 = *((_DWORD *)this + 205);
  if ( v14 == -1 || (v6 = a4, off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12) )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
  v16 = *((_DWORD *)this + 207) == -1;
  v31 = v15;
  if ( !v16 && a2 > 0 )
  {
    v35 = a2;
    do
    {
      v17 = *(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)this + 432);
      v23 = *((_DWORD *)this + 207);
      v17(this, v18);
      --v35;
    }
    while ( v35 );
  }
  sub_102D19C0(this, a2, a3, v6, a5, a6);
}
