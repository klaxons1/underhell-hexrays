int __thiscall sub_104024B0(int this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  char v6; // al
  double v7; // st7
  int v8; // eax
  char v9; // al
  float *v10; // eax
  double v11; // st4
  double v12; // st6
  double v13; // st4
  double v14; // st5
  double v15; // st6
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // esi
  void (__thiscall *v21)(int, int, _DWORD); // eax
  int v22; // esi
  float *v23; // eax
  double v24; // st7
  double v25; // st7
  double v26; // st7
  _DWORD v27[3]; // [esp+20h] [ebp-80h] BYREF
  float v28[8]; // [esp+2Ch] [ebp-74h] BYREF
  float v29; // [esp+4Ch] [ebp-54h]
  _DWORD *v30; // [esp+6Ch] [ebp-34h]
  int v31[3]; // [esp+74h] [ebp-2Ch] BYREF
  float v32; // [esp+80h] [ebp-20h]
  int v33; // [esp+84h] [ebp-1Ch] BYREF
  int v34; // [esp+88h] [ebp-18h]
  int v35; // [esp+8Ch] [ebp-14h]
  float v36; // [esp+90h] [ebp-10h] BYREF
  float v37; // [esp+94h] [ebp-Ch]
  float v38; // [esp+98h] [ebp-8h]
  char v39; // [esp+9Eh] [ebp-2h]
  char v40; // [esp+9Fh] [ebp-1h]

  v2 = (_DWORD *)sub_100D1940((_DWORD *)this);
  if ( !v2 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 320))(v2) )
    return 1;
  sub_103FBAC0(v2, v27);
  v3 = v30;
  if ( v30 )
  {
    v4 = sub_100E99F0(v30);
    v3 = v30;
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  v40 = 0;
  v39 = 0;
  if ( 1.0 != v29 && v3 && (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3[6]) )
  {
    if ( v29 > 0.25 )
      v39 = 1;
    else
      v40 = 1;
  }
  sub_100F5A30(v2, (int)v31, 0, 0);
  (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 968))(v2, &v33);
  v6 = *(_BYTE *)(dword_106B3CDC + 12);
  if ( v6 == 1 )
    v7 = *(float *)(dword_106EFE6C + 44);
  else
    v7 = *(float *)(dword_106EFE24 + 44);
  v32 = v7 * 4.0;
  if ( v6 == 1 )
  {
    v9 = v40 || v39;
    v8 = sub_103FBD20(
           (_DWORD *)this,
           (float *)&v33,
           (float *)v31,
           *(float *)(dword_106EFF8C + 44),
           *(float *)(dword_106EFFD4 + 44),
           v9);
LABEL_24:
    if ( v8 )
    {
      v5 = (_DWORD *)v8;
      v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
      v11 = v10[1] - *(float *)&v34;
      v12 = v11 * v11;
      v13 = *v10 - *(float *)&v33;
      v14 = v12;
      v15 = v10[2] - *(float *)&v35;
      if ( v32 * v32 < v13 * v13 + v14 + v15 * v15 )
        v39 = 1;
      else
        v40 = 1;
    }
    goto LABEL_28;
  }
  if ( !v40 && !v39 )
  {
    v8 = sub_103FBF60((_DWORD *)this, (float *)&v33, (float *)v31, *(float *)(dword_106EFF8C + 44));
    goto LABEL_24;
  }
LABEL_28:
  if ( !sub_103FB260((_DWORD *)this, v5) )
  {
    v16 = (_DWORD *)sub_101FB1D0((int)v5, v33, v34, v35);
    v17 = v16;
    if ( !v16 || !sub_103FB260((_DWORD *)this, v16) )
    {
      if ( !*(_BYTE *)(this + 1404) )
      {
        v21 = *(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132);
        *(_BYTE *)(this + 1404) = 1;
        v21(this, 14, 0.0);
        return 1;
      }
      return 1;
    }
    v5 = v17;
  }
  v18 = sub_100D1940((_DWORD *)this);
  v19 = v18;
  if ( !v18 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 320))(v18) )
    v19 = 0;
  if ( !(unsigned __int8)sub_101FB190((int)v5, v19, 0) )
    return 2;
  if ( v40 )
    return !sub_10402000(this, (int)v5, v28);
  if ( v39 )
  {
    v22 = v5[106];
    if ( v22 )
    {
      v23 = (float *)(*(int (__thiscall **)(_DWORD *))(*v5 + 576))(v5);
      v36 = *(float *)&v33 - *v23;
      v37 = *(float *)&v34 - v23[1];
      v38 = *(float *)&v35 - v23[2];
      off_10689714();
      if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
        v24 = *(float *)(dword_106EFF44 + 44);
      else
        v24 = *(float *)(dword_106EFEFC + 44);
      v36 = v36 * v24;
      v37 = v37 * v24;
      v38 = v24 * v38;
      v25 = sub_101B4DE0((int)v5);
      if ( v25 < 50.0 )
      {
        v26 = (v25 + 0.5) * 0.02;
        v36 = v36 * v26;
        v37 = v37 * v26;
        v38 = v26 * v38;
      }
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v22 + 236))(v22, &v36);
    }
  }
  return 1;
}
