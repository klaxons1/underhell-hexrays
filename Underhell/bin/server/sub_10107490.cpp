int __usercall sub_10107490@<eax>(
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
  int result; // eax
  _DWORD *v13; // esi
  int v14; // ecx
  int v15[1023]; // [esp+24h] [ebp-1E6Ch] BYREF
  int v16; // [esp+1020h] [ebp-E70h] BYREF
  int v17; // [esp+1034h] [ebp-E5Ch] BYREF
  float v18[512]; // [esp+1084h] [ebp-E0Ch] BYREF
  float v19[384]; // [esp+1884h] [ebp-60Ch] BYREF
  _DWORD v20[3]; // [esp+1E84h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1E90h] [ebp+0h]

  v20[0] = a1;
  v20[1] = retaddr;
  v11 = alloca(7784);
  if ( a10 <= 1.0 )
  {
    if ( a10 < 0.0 )
      a10 = 0.0;
  }
  else
  {
    a10 = 1.0;
  }
  result = a6;
  if ( a6 >= 0 )
  {
    v13 = (_DWORD *)sub_10245550(a6);
    sub_10106F20((int)v15);
    if ( v13[41] )
    {
      sub_101073B0(v15, (int)a2, (int)&flt_106F1CB4, (int)&flt_106F1CA8, 0.0, 0, a9);
      sub_10105E20(v15, (int)v13, a4, (int)a5);
    }
    if ( (v13[3] & 0x200) != 0 )
      sub_101027A0((int)a2, (int)v19, v18, a9);
    if ( sub_101047E0(a2, (int)v19, v18, *(float *)&v13, a6, *(float *)&a7, a8, a9, a11) )
    {
      sub_100FF230((int)a2, (int)a3, (int)v19, (int)v18, v13, a6, *(float *)&a7, a8, a9, 1.0, a11);
      sub_10104460((int)v20, (int)a2, (int)v13, a2, a5, a4, (int)v13, a6, COERCE_FLOAT(v18), v19, a10, a9);
    }
    v14 = (int)a3;
    if ( a3 )
    {
      sub_10106F90(a3, (int)v13, a6, a7, a8, a10);
      v14 = (int)a3;
    }
    sub_100FF020((int)a2, v14, a4, (int)a5, (int)v13, a6, *(float *)&a7, a8, a9, a10, a11);
    if ( v13[41] )
      sub_10106370(v15, (int)v13, a4, (int)a5);
    sub_102375F0(&v17);
    return sub_101C8650(&v16);
  }
  return result;
}
