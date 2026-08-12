void __userpurge sub_101BAE00(int *a1@<ecx>, int a2@<esi>, int a3, int a4)
{
  int *v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  double v10; // st7
  double (__thiscall *v11)(int, float *); // edx
  double v12; // st5
  double v13; // rt1
  double v14; // st5
  double v15; // rt2
  double v16; // st5
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st7
  float v24; // [esp+14h] [ebp-38h]
  float v25; // [esp+18h] [ebp-34h]
  float v26; // [esp+1Ch] [ebp-30h]
  float v27; // [esp+20h] [ebp-2Ch] BYREF
  float v28; // [esp+24h] [ebp-28h]
  float v29; // [esp+28h] [ebp-24h]
  float v30; // [esp+2Ch] [ebp-20h] BYREF
  float v31; // [esp+30h] [ebp-1Ch]
  float v32; // [esp+34h] [ebp-18h]
  float v33; // [esp+38h] [ebp-14h] BYREF
  float v34; // [esp+3Ch] [ebp-10h]
  float v35; // [esp+40h] [ebp-Ch]
  _BYTE v36[4]; // [esp+44h] [ebp-8h] BYREF
  float v37; // [esp+48h] [ebp-4h]
  int v38; // [esp+54h] [ebp+8h]
  float v39; // [esp+54h] [ebp+8h]
  float v40; // [esp+54h] [ebp+8h]

  ++a1[87];
  if ( a3 && a4 )
  {
    v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
    v7 = (int)v6;
    if ( v6 )
    {
      v8 = *v6;
      *(_DWORD *)(v7 + 252) |= 0x80000u;
      v38 = v8;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 24))(a4);
      (*(void (__thiscall **)(int, _DWORD, int))(v38 + 352))(v7, 0, v9);
      if ( sub_101BA000(a1, v7) >= 0.5 )
      {
        (*(void (__thiscall **)(int, float *, _BYTE *, int))(*(_DWORD *)a4 + 12))(a4, &v27, v36, a2);
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a3 + 204))(a3, &v30, &v33);
        v24 = v30;
        v25 = v31;
        v26 = v32;
        off_10689714();
        v39 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a4 + 16))(a4);
        v10 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106BAFF4 + 144))(dword_106BAFF4);
        v11 = *(double (__thiscall **)(int, float *))(*(_DWORD *)a3 + 256);
        v40 = v10 * v39;
        v12 = -v27;
        v27 = v12;
        v13 = v12;
        v14 = -v28;
        v28 = v14;
        v15 = v14;
        v16 = -v29;
        v29 = v16;
        v37 = v15 * v25 + v13 * v24 + v16 * v26;
        v17 = v11(a3, &v27);
        v18 = v17 * (v37 * 0.5) * v40;
        if ( v18 <= 1.0 )
        {
          if ( v18 < 0.0 )
            v18 = 0.0;
        }
        else
        {
          v18 = 1.0;
        }
        v19 = -v18;
        v30 = v30 * v19;
        v31 = v31 * v19;
        v32 = v19 * v32;
        off_10689714();
        v20 = ((double (__thiscall *)(int, float *))*(_DWORD *)(*(_DWORD *)a3 + 260))(a3, &v33) * 0.25 * v40;
        v21 = 1.0;
        if ( v20 > 1.0 || (v21 = 0.0, v20 < 0.0) )
          v20 = v21;
        v22 = -v20;
        v33 = v33 * v22;
        v34 = v34 * v22;
        v35 = v22 * v35;
        sub_101BF8D0(a4, a3, v7);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)a3 + 208))(a3, &v30);
      }
    }
    --a1[87];
  }
  else
  {
    --a1[87];
  }
}
