// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_103B5570@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        int a7)
{
  unsigned int v7; // edx
  int *v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st7
  float v14; // ecx
  double v15; // st7
  double v17; // st7
  double v18; // st7
  float v19[8]; // [esp+24h] [ebp-10Ch] BYREF
  int v20; // [esp+44h] [ebp-ECh] BYREF
  _BYTE v21[12]; // [esp+7Ch] [ebp-B4h] BYREF
  float v22[8]; // [esp+88h] [ebp-A8h] BYREF
  float v23; // [esp+A8h] [ebp-88h]
  int v24; // [esp+C8h] [ebp-68h]
  float v25[5]; // [esp+D4h] [ebp-5Ch] BYREF
  float v26; // [esp+E8h] [ebp-48h]
  float v27[3]; // [esp+ECh] [ebp-44h] BYREF
  float v28; // [esp+F8h] [ebp-38h] BYREF
  float v29; // [esp+FCh] [ebp-34h]
  float v30; // [esp+100h] [ebp-30h]
  float v31[3]; // [esp+104h] [ebp-2Ch] BYREF
  int v32; // [esp+110h] [ebp-20h]
  _DWORD *v33; // [esp+114h] [ebp-1Ch]
  float v34; // [esp+118h] [ebp-18h] BYREF
  float v35; // [esp+11Ch] [ebp-14h]
  float v36; // [esp+120h] [ebp-10h]
  _DWORD v37[3]; // [esp+124h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+130h] [ebp+0h]

  v37[0] = a2;
  v37[1] = retaddr;
  v7 = a1[950];
  v33 = a1;
  if ( v7 != -1 && (v8 = &off_1061BE18[4 * (v7 & 0xFFF) + 1], v9 = v7 >> 12, v8[1] == v9) && *v8 )
  {
    if ( v8[1] == v9 )
      v10 = *v8;
    else
      v10 = 0;
    v11 = flt_106EAD4C;
    v26 = flt_106EAD4C;
    v28 = flt_106EB728;
    v29 = flt_106EB72C;
    v12 = flt_106EB730;
  }
  else
  {
    v10 = (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 368))(a1, a3, a4);
    v11 = flt_106EAD48;
    v26 = flt_106EAD48;
    v28 = flt_106EB734;
    v29 = flt_106EB738;
    v12 = flt_106EB73C;
  }
  v30 = v12;
  v34 = *a5;
  v35 = a5[1];
  v13 = v11 + a5[2];
  v32 = v10;
  v36 = v13;
  sub_1001F180(v19, &v34, a6);
  sub_10265570(v27, (int)v33, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v19,
    1174421507,
    v27,
    v21);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v21, (int)v22, 255, 0, 0, 1, 5.0);
  if ( (!v32 || v24 != v32) && 1.0 != v23 && !sub_103B35A0(v33, (int)v21, a6) )
  {
    if ( *(_DWORD *)(dword_106EB00C + 48) )
    {
      v15 = *a5;
      v35 = v14;
      v34 = v15;
      v35 = a5[1];
      v36 = a5[2] + v26;
      sub_1011BC50(&v34, v22, 255, 0, 0, 0, 0.1);
      return 0;
    }
    return 0;
  }
  v34 = *a6 - *a5;
  v35 = a6[1] - a5[1];
  v36 = 0.0;
  if ( off_10689714() < 0.001 )
    return 0;
  v17 = -v35;
  v35 = COERCE_FLOAT(v31);
  v25[0] = v17;
  v18 = v34;
  v34 = COERCE_FLOAT(v25);
  v25[1] = v18;
  v25[2] = 0.0;
  ((void (__cdecl *)(_DWORD, float *, float *))sub_10424F20)(1.0, a5, &v34);
  sub_10421B40(&v28, &v20, v27);
  sub_1002A5F0((int)v37, (int)a5, v27, a6, 1174421507, (int)v33, 0, (int)v21);
  if ( (!v32 || v24 != v32) && 1.0 != v23 && !sub_103B35A0(v33, (int)v21, a6) )
  {
    if ( *(_DWORD *)(dword_106EB00C + 48) )
    {
      sub_1011BC50(v31, a6, 255, 0, 255, 0, 0.1);
      sub_1011BC50(v27, v22, 128, 0, 0, 0, 0.1);
    }
    return 0;
  }
  if ( *(_DWORD *)(dword_106EB00C + 48) )
  {
    sub_1011BC50(v31, a6, 255, 0, 255, 0, 0.1);
    sub_1011BC50(v27, a6, 128, 0, 128, 0, 0.1);
  }
  return 1;
}
