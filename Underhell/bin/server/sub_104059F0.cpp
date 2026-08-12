void __userpurge sub_104059F0(
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
  unsigned int *v15; // edi
  int *v16; // ecx
  unsigned int v17; // eax
  float *v18; // esi
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // [esp+10h] [ebp-F0h]
  float v22[22]; // [esp+24h] [ebp-DCh] BYREF
  _DWORD v23[3]; // [esp+7Ch] [ebp-84h] BYREF
  _DWORD v24[16]; // [esp+88h] [ebp-78h] BYREF
  int v25; // [esp+C8h] [ebp-38h]
  _BYTE v26[12]; // [esp+D8h] [ebp-28h] BYREF
  _DWORD *v27; // [esp+E4h] [ebp-1Ch]
  float v28; // [esp+E8h] [ebp-18h] BYREF
  float v29; // [esp+ECh] [ebp-14h]
  float v30; // [esp+F0h] [ebp-10h]
  int v31; // [esp+F4h] [ebp-Ch]
  void *v32; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v31 = a2;
  v32 = retaddr;
  v8 = (int)a1;
  v27 = a1;
  if ( a3 == flt_106F1CA8 && a4 == flt_106F1CAC && a5 == flt_106F1CB0
    || a6 == flt_106F1CA8 && a7 == flt_106F1CAC && a8 == flt_106F1CB0 )
  {
    v9 = (_DWORD *)sub_100D1940(a1);
    if ( !v9 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 320))(v9) )
      return;
    v10 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v9 + 968))(v9, v26);
    a3 = *v10;
    a4 = v10[1];
    a5 = v10[2];
    v11 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "cam_ots_freeaim_enable");
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2
      || *(_DWORD *)(*(_DWORD *)(v11 + 28) + 48) )
    {
      v12 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *, _DWORD))(*v9 + 1504))(v9, v26, 1.0);
      v28 = *v12;
      v29 = v12[1];
      v13 = v12[2];
    }
    else
    {
      sub_100F5A30(v9, (int)&v28, 0, 0);
      v13 = v30;
    }
    v8 = (int)v27;
    a6 = v28 * 56755.84 + a3;
    a7 = v29 * 56755.84 + a4;
    a8 = 56755.84 * v13 + a5;
  }
  sub_1001F180(v22, &a3, &a6);
  sub_10265570(&v28, v8, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v22,
    1174421505,
    &v28,
    v23);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v23, (int)v24, 255, 0, 0, 1, 5.0);
  v14 = *(_DWORD *)(v8 + 1408);
  v15 = (unsigned int *)(v8 + 1408);
  if ( v14 != -1 )
  {
    v16 = &off_1061BE18[4 * (*(_DWORD *)(v8 + 1408) & 0xFFF) + 1];
    v17 = v14 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(v8 + 1408) & 0xFFF) + 2] == v17 )
    {
      if ( *v16 )
      {
        v28 = *(float *)v24;
        v29 = *(float *)&v24[1];
        v30 = *(float *)&v24[2];
        if ( v16[1] == v17 )
          v18 = (float *)*v16;
        else
          v18 = 0;
        sub_100E0D20((int)v18, &v28);
        v18[220] = *(float *)&v24[3];
        v18[221] = *(float *)&v24[4];
        v18[222] = *(float *)&v24[5];
        if ( sub_10163160(v23) && v25 && *(_BYTE *)(v25 + 225) )
        {
          v21 = v25;
          v19 = (_DWORD *)sub_1026A890(v15);
          sub_1027BA50(v19, v21);
        }
        else
        {
          if ( *v15 == -1 || off_1061BE18[4 * (*v15 & 0xFFF) + 2] != *v15 >> 12 )
            v20 = 0;
          else
            v20 = off_1061BE18[4 * (*v15 & 0xFFF) + 1];
          *(_DWORD *)(v20 + 892) = -1;
        }
      }
    }
  }
}
