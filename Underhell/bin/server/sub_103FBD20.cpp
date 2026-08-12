int __thiscall sub_103FBD20(_DWORD *this, float *a2, float *a3, float a4, float a5, char a6)
{
  bool v6; // zf
  double v7; // st7
  double v8; // st7
  double v10; // st6
  int v11; // edi
  int v12; // ecx
  char v13; // bl
  float *v14; // eax
  double v15; // st7
  double v16; // st6
  int v17; // edi
  float *v18; // eax
  int v20; // [esp-14h] [ebp-10ACh]
  _DWORD v21[1024]; // [esp+0h] [ebp-1098h] BYREF
  _BYTE v22[76]; // [esp+1000h] [ebp-98h] BYREF
  int v23; // [esp+104Ch] [ebp-4Ch]
  float v24[3]; // [esp+1054h] [ebp-44h] BYREF
  float v25[3]; // [esp+1060h] [ebp-38h] BYREF
  _DWORD *v26; // [esp+106Ch] [ebp-2Ch]
  float v27; // [esp+1070h] [ebp-28h]
  float v28; // [esp+1074h] [ebp-24h]
  int v29; // [esp+1078h] [ebp-20h]
  _DWORD v30[2]; // [esp+107Ch] [ebp-1Ch] BYREF
  float v31; // [esp+1084h] [ebp-14h]
  float v32; // [esp+1088h] [ebp-10h]
  float v33; // [esp+108Ch] [ebp-Ch]
  int v34; // [esp+1090h] [ebp-8h]
  float v35; // [esp+1094h] [ebp-4h]
  int savedregs; // [esp+1098h] [ebp+0h] BYREF
  int v37; // [esp+10A0h] [ebp+8h]
  bool v38; // [esp+10B3h] [ebp+1Bh]

  v6 = *(_BYTE *)(dword_106B3CDC + 12) == 1;
  v26 = this;
  if ( v6 )
    v7 = *(float *)(dword_106EFE6C + 44);
  else
    v7 = *(float *)(dword_106EFE24 + 44);
  v8 = v7 + 1.0;
  v28 = v8;
  v35 = v8;
  v38 = a6 != 0;
  v24[0] = *a2 - v8;
  v10 = a2[1];
  v34 = 0;
  v24[1] = v10 - v8;
  v24[2] = a2[2] - v8;
  v25[0] = *a2 + v8;
  v25[1] = a2[1] + v8;
  v25[2] = v8 + a2[2];
  sub_1025F990(v30, (int)v21, 1024, 0);
  v11 = 0;
  v29 = sub_1025F9C0((int)v24, (int)v25, (int)v30);
  v37 = 0;
  if ( v29 > 0 )
  {
    while ( 1 )
    {
      v12 = v21[v11];
      if ( *(_DWORD *)(v12 + 424) )
      {
        if ( *(char **)(v12 + 92) == "prop_combine_ball" )
        {
          v13 = 1;
        }
        else
        {
          v13 = sub_100D6240((_DWORD *)v12, "prop_combine_ball");
          if ( !v13 && v38 )
            goto LABEL_21;
        }
        v14 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v21[v11] + 576))(v21[v11]);
        v31 = *v14 - *a2;
        v32 = v14[1] - a2[1];
        v33 = v14[2] - a2[2];
        v15 = off_10689714();
        v27 = v15;
        if ( !v13 || v38 )
        {
          if ( v15 >= v35 || a3[1] * v32 + *a3 * v31 + a3[2] * v33 <= a4 )
            goto LABEL_21;
        }
        else
        {
          if ( v28 <= v15 )
            goto LABEL_21;
          v16 = a3[1] * v32 + *a3 * v31 + a3[2] * v33;
          if ( a4 >= v16 || v35 < v15 && v16 <= a5 )
            goto LABEL_21;
        }
        v17 = v21[v11];
        v20 = sub_100D1940(v26);
        v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 576))(v17);
        sub_103FB900((int)&savedregs, (int)a2, a2, v18, v20, (int)v22);
        v11 = v37;
        if ( v23 == v21[v37] )
        {
          v34 = v21[v37];
          v35 = v27;
          v38 = v13;
        }
      }
LABEL_21:
      v37 = ++v11;
      if ( v11 >= v29 )
        return v34;
    }
  }
  return 0;
}
