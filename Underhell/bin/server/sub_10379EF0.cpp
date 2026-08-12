// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_10379EF0@<al>(
        char *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        char a7)
{
  float *v8; // eax
  double v9; // st7
  int v11; // eax
  float v13[20]; // [esp+34h] [ebp-DCh] BYREF
  _BYTE v14[12]; // [esp+84h] [ebp-8Ch] BYREF
  _BYTE v15[32]; // [esp+90h] [ebp-80h] BYREF
  float v16; // [esp+B0h] [ebp-60h]
  int v17; // [esp+D0h] [ebp-40h]
  _DWORD v18[3]; // [esp+DCh] [ebp-34h] BYREF
  int v19; // [esp+E8h] [ebp-28h]
  float v20[2]; // [esp+ECh] [ebp-24h] BYREF
  float v21; // [esp+F4h] [ebp-1Ch]
  float v22; // [esp+F8h] [ebp-18h] BYREF
  float v23; // [esp+FCh] [ebp-14h]
  float v24; // [esp+100h] [ebp-10h]
  int v25; // [esp+104h] [ebp-Ch]
  void *v26; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v25 = a2;
  v26 = retaddr;
  v19 = (*(int (__thiscall **)(char *, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a4);
  v8 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 532))(a1);
  v9 = *a5 + *v8;
  v23 = *(float *)&a6;
  v22 = v9;
  v23 = v8[1] + a5[1];
  v24 = v8[2] + a5[2];
  sub_1001F180(v13, &v22, (float *)LODWORD(v23));
  sub_10265570(v20, (int)a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    1174421507,
    v20,
    v14);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)v15, 255, 0, 0, 1, 5.0);
  if ( (!v19 || v17 != v19) && 1.0 != v16 && !sub_103778E0(a1, (int)v14, a6) )
  {
    if ( a7 )
    {
      sub_10023CB0(a1, 45);
      sub_100207F0(a1, v17);
      return 0;
    }
    return 0;
  }
  v11 = dword_106E9630;
  if ( (dword_106E9630 & 1) == 0 )
  {
    v11 = dword_106E9630 | 1;
    flt_106E9624 = -2.0;
    dword_106E9630 |= 1u;
    flt_106E9628 = -2.0;
    flt_106E962C = -2.0;
  }
  if ( (v11 & 2) == 0 )
  {
    dword_106E9630 = v11 | 2;
    flt_106E9618 = -flt_106E9624;
    flt_106E961C = -flt_106E9628;
    flt_106E9620 = -flt_106E962C;
  }
  v20[0] = v22;
  v21 = v24 - 18.0;
  sub_1001F200(v13, v20, (float *)LODWORD(v21), &flt_106E9624, &flt_106E9618);
  sub_10265570(v18, (int)a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    1174421507,
    v18,
    v14);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)v15, 255, 255, 0, 1, -1.0);
  if ( (!v19 || v17 != v19) && 1.0 != v16 && !sub_103778E0(a1, (int)v14, a6) )
    return 0;
  if ( *(_DWORD *)(dword_106E8DE4 + 48) )
  {
    sub_1011BC50(&v22, a6, 255, 0, 255, 0, 0.1);
    sub_1011BC50(v20, a6, 0, 0, 255, 0, 0.1);
  }
  return 1;
}
