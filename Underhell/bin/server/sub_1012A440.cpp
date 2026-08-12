_DWORD *__usercall sub_1012A440@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int *a4,
        const char *a5,
        float a6,
        int a7,
        _BYTE *a8)
{
  int *v8; // edi
  _DWORD *result; // eax
  _DWORD *v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  float v16; // [esp+Ch] [ebp-ACh]
  int v17; // [esp+Ch] [ebp-ACh]
  int v18; // [esp+10h] [ebp-A8h]
  int v21; // [esp+18h] [ebp-A0h] BYREF
  int v22; // [esp+1Ch] [ebp-9Ch]
  int v23; // [esp+20h] [ebp-98h]
  int v24; // [esp+24h] [ebp-94h]
  int v25; // [esp+28h] [ebp-90h]
  int v26; // [esp+2Ch] [ebp-8Ch]
  int v27; // [esp+30h] [ebp-88h]
  int v28; // [esp+34h] [ebp-84h]
  int v29; // [esp+38h] [ebp-80h]
  int v30; // [esp+3Ch] [ebp-7Ch]
  int v31; // [esp+40h] [ebp-78h]
  int v32; // [esp+44h] [ebp-74h]
  int v33; // [esp+48h] [ebp-70h]
  int v34; // [esp+4Ch] [ebp-6Ch]
  int v35; // [esp+50h] [ebp-68h]
  int v36; // [esp+54h] [ebp-64h]
  int v37; // [esp+58h] [ebp-60h]
  int v38; // [esp+5Ch] [ebp-5Ch]
  int v39; // [esp+60h] [ebp-58h]
  int v40; // [esp+64h] [ebp-54h]
  int v41; // [esp+68h] [ebp-50h] BYREF
  int v42; // [esp+6Ch] [ebp-4Ch]
  int v43; // [esp+70h] [ebp-48h]
  int v44; // [esp+74h] [ebp-44h]
  int v45; // [esp+78h] [ebp-40h]
  int v46; // [esp+7Ch] [ebp-3Ch]
  int v47; // [esp+80h] [ebp-38h]
  int v48; // [esp+84h] [ebp-34h]
  int v49; // [esp+88h] [ebp-30h]
  int v50; // [esp+8Ch] [ebp-2Ch]
  int v51; // [esp+90h] [ebp-28h]
  int v52; // [esp+94h] [ebp-24h]
  int v53; // [esp+98h] [ebp-20h]
  int v54; // [esp+9Ch] [ebp-1Ch]
  int v55; // [esp+A0h] [ebp-18h]
  int v56; // [esp+A4h] [ebp-14h]
  int v57; // [esp+A8h] [ebp-10h]
  int v58; // [esp+C0h] [ebp+8h]

  if ( a8 )
    *a8 = 0;
  if ( !a5 )
    a5 = "sprites/blueglow1.vmt";
  v8 = a4;
  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a4 + 320))(a4, a2) )
  {
    sub_101EC2A0(0);
    v16 = (float)a4[55];
    sub_10248110((int)a4, (int)a4, v16, 4196352, 0);
    sub_100D9E70(a4, a3, &v41);
    return 0;
  }
  else
  {
    result = (_DWORD *)sub_101811E0("env_entity_dissolver", -1);
    v10 = result;
    if ( result )
    {
      v18 = a1;
      sub_1012A210(result + 207, &a7);
      v11 = a7;
      if ( a7 == 1 || a7 == 2 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*a4 + 284))(a4, v18) )
        {
          v12 = sub_100D7680((int)a4);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 764))(v12) )
          {
            sub_10247EC0(&v41);
            v13 = sub_100D7680((int)a4);
            v58 = sub_101D0270(v13, 0, &v41, 1, 1);
            v17 = (*(int (__thiscall **)(int *))(v8[80] + 8))(v8 + 80);
            v14 = (*(int (__thiscall **)(int *))(v8[80] + 4))(v8 + 80);
            sub_100D5D10(v14, v17);
            if ( !*((_BYTE *)v8 + 224) )
            {
              v15 = sub_1025FB50(1);
              sub_10248110(v15, v15, 10000.0, 4196608, 0);
              sub_100D9E70(v8, (int)v10, &v21);
            }
            if ( a8 )
              *a8 = 1;
            sub_1025FAC0(v8);
            v8 = (int *)v58;
            v11 = a7;
          }
        }
      }
      v10[115] = *(_DWORD *)sub_10162BE0(&a5, a5);
      sub_100D8500(v10);
      (*(void (__thiscall **)(_DWORD *, int *, int, int, int))(*v10 + 140))(v10, v8, -1, v18, a3);
      sub_100E10C0((int)v10, &flt_106F1CA8);
      sub_100E11A0((int)v10, &flt_106F1CB4);
      sub_1012A3F0((int)v10, a6);
      (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10);
      v10[63] |= 0x80u;
      sub_100D8500(v10);
      if ( v11 == 1 || v11 == 2 )
        (*(void (__thiscall **)(int *, const char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*v8 + 216))(
          v8,
          "TLK_ELECTROCUTESCREAM",
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      else
        (*(void (__thiscall **)(int *, const char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(*v8 + 216))(
          v8,
          "TLK_DISSOLVESCREAM",
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      return v10;
    }
  }
  return result;
}
