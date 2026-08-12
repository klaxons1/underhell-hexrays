void __userpurge sub_1027BD00(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  int v8; // esi
  _DWORD *v9; // esi
  float *v10; // eax
  int v11; // edi
  float *v12; // eax
  double v13; // st7
  unsigned int v14; // eax
  _DWORD *v15; // eax
  unsigned int v16; // eax
  int v17; // [esp+10h] [ebp-F0h]
  float v18[22]; // [esp+24h] [ebp-DCh] BYREF
  _DWORD v19[3]; // [esp+7Ch] [ebp-84h] BYREF
  _DWORD v20[3]; // [esp+88h] [ebp-78h] BYREF
  int v21; // [esp+94h] [ebp-6Ch] BYREF
  int v22; // [esp+C8h] [ebp-38h]
  _BYTE v23[12]; // [esp+D8h] [ebp-28h] BYREF
  _DWORD *v24; // [esp+E4h] [ebp-1Ch]
  float v25; // [esp+E8h] [ebp-18h] BYREF
  float v26; // [esp+ECh] [ebp-14h]
  float v27; // [esp+F0h] [ebp-10h]
  int v28; // [esp+F4h] [ebp-Ch]
  void *v29; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v28 = a2;
  v29 = retaddr;
  v8 = (int)a1;
  v24 = a1;
  if ( a3 == flt_106F1CA8 && a4 == flt_106F1CAC && a5 == flt_106F1CB0
    || a6 == flt_106F1CA8 && a7 == flt_106F1CAC && a8 == flt_106F1CB0 )
  {
    v9 = (_DWORD *)sub_100D1940(a1);
    if ( !v9 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 320))(v9) )
      return;
    v10 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v9 + 968))(v9, v23);
    a3 = *v10;
    a4 = v10[1];
    a5 = v10[2];
    v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "cam_ots_freeaim_enable");
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2
      || *(_DWORD *)(*(_DWORD *)(v11 + 28) + 48) )
    {
      v12 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*v9 + 1504))(v9, v23, 1.0);
      v25 = *v12;
      v26 = v12[1];
      v13 = v12[2];
    }
    else
    {
      sub_100F5A30(v9, (int)&v25, 0, 0);
      v13 = v27;
    }
    v8 = (int)v24;
    a6 = v25 * 56755.84 + a3;
    a7 = v26 * 56755.84 + a4;
    a8 = 56755.84 * v13 + a5;
  }
  sub_1001F180(v18, &a3, &a6);
  sub_10265570(&v25, v8, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v18,
    1174421505,
    &v25,
    v19);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v19, (int)v20, 255, 0, 0, 1, 5.0);
  v14 = *(_DWORD *)(v8 + 1412);
  if ( v14 != -1
    && off_1061BE18[4 * (*(_DWORD *)(v8 + 1412) & 0xFFF) + 2] == v14 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(v8 + 1412) & 0xFFF) + 1] )
  {
    v25 = *(float *)v20;
    v26 = *(float *)&v20[1];
    v27 = *(float *)&v20[2];
    sub_10403DF0(&v25, &v21);
    if ( sub_10163160(v19) && v22 && *(_BYTE *)(v22 + 225) )
    {
      v17 = v22;
      v15 = (_DWORD *)sub_1026A890((unsigned int *)(v8 + 1412));
      sub_1027BA50(v15, v17);
    }
    else
    {
      v16 = *(_DWORD *)(v8 + 1412);
      if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(v8 + 1412) & 0xFFF) + 2] != v16 >> 12 )
        MEMORY[0x37C] = -1;
      else
        *(_DWORD *)(off_1061BE18[4 * (*(_DWORD *)(v8 + 1412) & 0xFFF) + 1] + 892) = -1;
    }
  }
}
