// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_102ACDA0@<al>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4, int a5)
{
  float *v5; // esi
  int v6; // edi
  float *v7; // eax
  char *v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  float *v13; // edi
  float *v14; // eax
  double v15; // st7
  char *v16; // eax
  int v17; // eax
  char result; // al
  double v19; // st6
  double v20; // st7
  char *v21; // eax
  int v23; // [esp+24h] [ebp-154h] BYREF
  float v24[13]; // [esp+30h] [ebp-148h] BYREF
  __int16 v25; // [esp+64h] [ebp-114h]
  float v26[13]; // [esp+7Ch] [ebp-FCh] BYREF
  char v27; // [esp+B2h] [ebp-C6h]
  char v28; // [esp+B3h] [ebp-C5h]
  _DWORD v29[4]; // [esp+E4h] [ebp-94h] BYREF
  _BYTE v30[12]; // [esp+F4h] [ebp-84h] BYREF
  float v31; // [esp+100h] [ebp-78h] BYREF
  float v32; // [esp+104h] [ebp-74h]
  float v33; // [esp+108h] [ebp-70h]
  float v34; // [esp+120h] [ebp-58h]
  char v35; // [esp+124h] [ebp-54h]
  __int16 v36; // [esp+134h] [ebp-44h]
  char *v37; // [esp+150h] [ebp-28h] BYREF
  int v38; // [esp+154h] [ebp-24h] BYREF
  int v39; // [esp+158h] [ebp-20h]
  float v40; // [esp+15Ch] [ebp-1Ch]
  int v41; // [esp+160h] [ebp-18h] BYREF
  int v42; // [esp+164h] [ebp-14h]
  float v43; // [esp+168h] [ebp-10h]
  _DWORD v44[3]; // [esp+16Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+178h] [ebp+0h]

  v44[0] = a1;
  v44[1] = retaddr;
  v5 = (float *)a4;
  v41 = *(int *)a4;
  v42 = *(int *)(a4 + 4);
  v43 = *(float *)(a4 + 8) - 1024.0;
  sub_1001F180(v26, (float *)a4, (float *)&v41);
  sub_10265570(&v38, 0, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v26,
    16481,
    &v38,
    v30,
    a2,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v30, (int)&v31, 255, 0, 0, 1, 5.0);
  if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
    sub_1011BC50((float *)a4, &v31, 0, 255, 0, 0, 5.0);
  if ( 1.0 != v34 && (v35 & 0x20) == 0 )
  {
    v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v36);
    if ( !v6 )
      goto LABEL_36;
    if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
    {
      sub_10429A00((char *)&v37, 0x10u, "Material %c", *(_WORD *)(v6 + 72));
      sub_1011CF30((float *)a4, (int)&v37, 1, 5.0);
    }
    if ( *(_WORD *)(v6 + 72) == 78 )
    {
LABEL_36:
      if ( (unsigned __int8)sub_102FF260(v31, v32, v33) )
      {
        *(float *)&v41 = 0.0;
        *(float *)&v42 = v32;
        v40 = 0.0;
        v39 = 33701899;
        v43 = v33 + 5.0;
        v38 = (int)sub_10073730(5);
        v7 = (float *)sub_10073710(5);
        sub_100231A0((int)v44, a4, &v31, (float *)&v41, v7, (float *)v38, v39, SLODWORD(v40), v41, v42);
        if ( v26[11] >= 1.0 && !v27 && !v28 )
        {
          if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
          {
            v43 = v33 + 5.0;
            *(float *)&v42 = 5.0;
            v41 = 128;
            v40 = 0.0;
            v39 = 255;
            v38 = 0;
            v37 = sub_10073730(5);
            v8 = sub_10073710(5);
            sub_1011BB20((int)&v41, (int)v8, (int)v37, v38, v39, SLODWORD(v40), v41, *(float *)&v42);
          }
          if ( a5 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a5 + 320))(a5) )
          {
            v9 = 0;
            v10 = __RTDynamicCast(
                    a5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CBasePlayer `RTTI Type Descriptor',
                    0);
            v11 = (_DWORD *)v10;
            if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1092))(v10) )
            {
              v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 1092))(a5);
              v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 32))(v12);
            }
            sub_10265720(v29, (int)v11, v9, 0);
            v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*v11 + 532))(v11);
            v14 = (float *)sub_10019640(v11);
            v15 = *v14 + *v13;
            v42 = 5;
            *(float *)&v41 = v15;
            *(float *)&v42 = v14[1] + v13[1];
            v43 = v14[2] + v13[2];
            v16 = sub_10073730(v42);
            v40 = *((float *)v16 + 2) + v33;
            sub_10023120(COERCE_FLOAT(v44), (int)v11, (float *)&v41, (float *)&v38, 16481, SLODWORD(v40), (int)&v23);
            if ( 1.0 != v24[8] )
            {
              v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v25);
              if ( v17 )
              {
                if ( *(_WORD *)(v17 + 72) == 68 )
                {
                  if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
                  {
                    sub_1011BC50((float *)&v41, v24, 255, 0, 0, 0, 5.0);
                    return 0;
                  }
                  return 0;
                }
              }
            }
            if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
              sub_1011BC50((float *)&v41, v24, 0, 255, 0, 0, 5.0);
            v5 = (float *)a4;
          }
          result = 1;
          v19 = v26[4];
          v20 = v26[5] + 5.0;
          *v5 = v26[3];
          v5[1] = v19;
          v5[2] = v20;
          return result;
        }
        if ( *(_DWORD *)(dword_106DBB3C + 48) == 1 )
        {
          *(float *)&v42 = 5.0;
          v41 = 128;
          v40 = 0.0;
          v39 = 0;
          v38 = 255;
          v37 = sub_10073730(5);
          v21 = sub_10073710(5);
          sub_1011BB20((int)&v38, (int)v21, (int)v37, v38, v39, SLODWORD(v40), v41, *(float *)&v42);
        }
      }
    }
  }
  return 0;
}
