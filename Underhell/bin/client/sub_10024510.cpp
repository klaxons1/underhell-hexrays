// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10024510(
        int a1@<ebp>,
        int *a2,
        float *a3,
        int a4,
        float *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11)
{
  void *v11; // esp
  double v12; // st7
  _DWORD *v13; // esi
  int v14; // ecx
  float v15; // [esp+34h] [ebp-1E84h]
  int v16[1023]; // [esp+4Ch] [ebp-1E6Ch] BYREF
  int v17; // [esp+1048h] [ebp-E70h] BYREF
  int v18; // [esp+105Ch] [ebp-E5Ch] BYREF
  float v19[512]; // [esp+10ACh] [ebp-E0Ch] BYREF
  float v20[378]; // [esp+18ACh] [ebp-60Ch] BYREF
  _DWORD v21[3]; // [esp+1EACh] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1EB8h] [ebp+0h]

  v21[0] = a1;
  v21[1] = retaddr;
  v11 = alloca(7784);
  v12 = 1.0;
  if ( a10 <= 1.0 )
  {
    v12 = 0.0;
    if ( a10 >= 0.0 )
      v12 = a10;
    else
      a10 = 0.0;
  }
  else
  {
    a10 = 1.0;
  }
  if ( a6 >= 0 )
  {
    v15 = v12;
    ((void (__cdecl *)(int *, float *, int, float *, int, int, int, int, _DWORD, _DWORD))(*off_103E22C0)[1])(
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      LODWORD(v15),
      LODWORD(a11));
    v13 = (_DWORD *)sub_10127960(a6);
    sub_10023FA0((int)v16);
    if ( v13[41] )
    {
      sub_10024430(v16, (int)a2, (int)&flt_1045924C, (int)&flt_10459240, 0.0, 0, a9);
      sub_10022FA0(v16, (int)v13, a4, (int)a5);
    }
    if ( (v13[3] & 0x200) != 0 )
      sub_1001F9A0((int)a2, (int)v20, v19, a9);
    if ( sub_10021960(a2, (int)v20, v19, *(float *)&v13, a6, *(float *)&a7, a8, a9, a11) )
    {
      sub_1001BDE0((int)a2, (int)a3, (int)v20, (int)v19, v13, a6, *(float *)&a7, a8, a9, 1.0, a11);
      sub_100215E0((int)v21, (int)a2, (int)v13, a2, a5, a4, (int)v13, a6, COERCE_FLOAT(v19), v20, a10, a9);
    }
    v14 = (int)a3;
    if ( a3 )
    {
      sub_10024010(a3, (int)v13, a6, a7, a8, a10);
      v14 = (int)a3;
    }
    sub_1001BBD0((int)a2, v14, a4, (int)a5, (int)v13, a6, *(float *)&a7, a8, a9, a10, a11);
    if ( v13[41] )
      sub_100234F0(v16, (int)v13, a4, (int)a5);
    sub_1011A810(&v18);
    sub_100F9DC0(&v17);
  }
}
