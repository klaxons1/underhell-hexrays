int __usercall sub_10374830@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // edi
  long double v5; // st4
  long double v6; // st3
  long double v7; // rt2
  long double v8; // st3
  char *v9; // edi
  char *v10; // ebx
  char *v11; // edi
  char *v12; // ebx
  char *v13; // edi
  char *v14; // ebx
  char *v15; // edi
  char *v16; // ebx
  const char *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int (__thiscall *v22)(_DWORD *); // edx
  int v23; // eax
  int v25; // [esp+8h] [ebp-74h]
  int v26; // [esp+10h] [ebp-6Ch]
  int v27; // [esp+18h] [ebp-64h]
  float v28; // [esp+1Ch] [ebp-60h]
  int v29[3]; // [esp+20h] [ebp-5Ch] BYREF
  int v30; // [esp+2Ch] [ebp-50h] BYREF
  float v31; // [esp+30h] [ebp-4Ch]
  float v32; // [esp+34h] [ebp-48h]
  int v33; // [esp+38h] [ebp-44h] BYREF
  float v34; // [esp+3Ch] [ebp-40h]
  float v35; // [esp+40h] [ebp-3Ch]
  int v36[3]; // [esp+44h] [ebp-38h] BYREF
  int v37[3]; // [esp+50h] [ebp-2Ch] BYREF
  int v38; // [esp+5Ch] [ebp-20h] BYREF
  float v39; // [esp+60h] [ebp-1Ch]
  int v40; // [esp+64h] [ebp-18h]
  float *v41; // [esp+68h] [ebp-14h]
  float *v42; // [esp+6Ch] [ebp-10h]
  float v43; // [esp+70h] [ebp-Ch]
  float v44; // [esp+74h] [ebp-8h] BYREF
  float v45; // [esp+78h] [ebp-4h] BYREF

  if ( (a1[59] & 4) != 0 )
  {
    v43 = acos(0.8);
    (*(void (__thiscall **)(_DWORD *, int *, int, int))(*a1 + 920))(a1, &v38, a3, a2);
    v41 = &v44;
    v42 = &v45;
    v44 = cos(v43);
    v45 = sin(v43);
    v4 = a1[227];
    *(float *)v37 = *(float *)&v38 * v44 - v39 * v45;
    *(float *)&v37[1] = v44 * v39 + v45 * *(float *)&v38;
    v37[2] = v40;
    v5 = -v43;
    v6 = sin(v5);
    v45 = v6;
    v7 = v6;
    v8 = cos(v5);
    v44 = v8;
    *(float *)v36 = *(float *)&v38 * v8 - v39 * v7;
    *(float *)&v36[1] = v8 * v39 + v7 * *(float *)&v38;
    v36[2] = v40;
    if ( sub_100BF3D0((int)a1, v4) == dword_106E854C && sub_100BF440((int)a1, v4) == dword_106E854C )
    {
      v9 = sub_10073730(a1[419]);
      v10 = sub_10073710(a1[419]);
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      sub_1011BB20((int)(a1 + 145), (int)v10, (int)v9, 0, 255, 0, 128, 0.0);
    }
    else
    {
      if ( sub_100BF3D0((int)a1, v4) == dword_106E8548 && sub_100BF440((int)a1, v4) == dword_106E8548 )
      {
        v11 = sub_10073730(a1[419]);
        v12 = sub_10073710(a1[419]);
        if ( (a1[63] & 0x800) != 0 )
          sub_100DAE60((int)a1);
        *(float *)&v27 = 0.0;
        v26 = 255;
        v25 = 0;
      }
      else
      {
        if ( sub_100BF3D0((int)a1, v4) == dword_106E8548 && sub_100BF440((int)a1, v4) == dword_106E854C )
        {
          v13 = sub_10073730(a1[419]);
          v14 = sub_10073710(a1[419]);
          if ( (a1[63] & 0x800) != 0 )
            sub_100DAE60((int)a1);
          sub_1011BB20((int)(a1 + 145), (int)v14, (int)v13, 0, 255, 255, 128, 0.0);
          goto LABEL_26;
        }
        if ( sub_100BF3D0((int)a1, v4) == dword_106E854C && sub_100BF440((int)a1, v4) == dword_106E8548 )
        {
          v15 = sub_10073730(a1[419]);
          v16 = sub_10073710(a1[419]);
          if ( (a1[63] & 0x800) != 0 )
            sub_100DAE60((int)a1);
          sub_1011BB20((int)(a1 + 145), (int)v16, (int)v15, 255, 0, 255, 128, 0.0);
          goto LABEL_26;
        }
        v17 = sub_100BE1F0((int)a1, a1[227]);
        Msg("UNKNOWN: %s\n", v17);
        v11 = sub_10073730(a1[419]);
        v12 = sub_10073710(a1[419]);
        if ( (a1[63] & 0x800) != 0 )
          sub_100DAE60((int)a1);
        *(float *)&v27 = 0.0;
        v26 = 0;
        v25 = 255;
      }
      sub_1011BB20((int)(a1 + 145), (int)v12, (int)v11, v25, 0, v26, 128, *(float *)&v27);
    }
LABEL_26:
    *(float *)&v33 = 200.0;
    v34 = 0.0;
    v35 = 1.0;
    *(float *)&v30 = 0.0;
    v31 = 0.0;
    v32 = -1.0;
    v18 = (*(int (__thiscall **)(_DWORD *, int *, int *))(*a1 + 504))(a1, v29, &v30);
    sub_1011BB60(v18, (int)&v33, (int)v37, 255, 0, 0, 50, COERCE_INT(0.0), v28);
    *(float *)&v30 = 200.0;
    v31 = 0.0;
    v32 = 1.0;
    *(float *)&v33 = 0.0;
    v34 = 0.0;
    v35 = -1.0;
    v19 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
    sub_1011BB60(v19, (int)v29, (int)&v33, (int)&v30, (int)v36, 255, 0, 0, COERCE_FLOAT(50));
    *(float *)&v30 = 200.0;
    v31 = 0.0;
    v32 = 1.0;
    *(float *)&v33 = 0.0;
    v34 = 0.0;
    v35 = -1.0;
    v20 = (*(int (__thiscall **)(_DWORD *))(*a1 + 504))(a1);
    sub_1011BB60(v20, (int)v29, (int)&v33, (int)&v30, (int)&v38, 0, 255, 0, COERCE_FLOAT(50));
    v21 = *a1;
    *(float *)&v30 = 2.0;
    v22 = *(int (__thiscall **)(_DWORD *))(v21 + 504);
    v31 = 2.0;
    v32 = 2.0;
    *(float *)&v33 = -2.0;
    v34 = -2.0;
    v35 = -2.0;
    v23 = v22(a1);
    sub_1011BB20(v23, (int)v29, (int)&v33, (int)&v30, 0, 255, 0, COERCE_FLOAT(128));
    *(float *)&a2 = 0.0;
  }
  (*(void (__thiscall **)(_DWORD *))(a1[1073] + 280))(a1 + 1073);
  return sub_1002D900(a1, a2);
}
