void __thiscall sub_101CE3A0(int this, int a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  BOOL v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  float *v11; // eax
  double v12; // st4
  double v13; // st6
  float *v14; // eax
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st7
  int v21; // eax
  _BYTE v22[4]; // [esp+3Ch] [ebp-80h] BYREF
  int v23; // [esp+88h] [ebp-34h]
  float v24[3]; // [esp+90h] [ebp-2Ch] BYREF
  int v25; // [esp+9Ch] [ebp-20h] BYREF
  float v26; // [esp+A0h] [ebp-1Ch]
  float v27; // [esp+A4h] [ebp-18h]
  int v28; // [esp+A8h] [ebp-14h] BYREF
  float v29; // [esp+ACh] [ebp-10h]
  float v30; // [esp+B0h] [ebp-Ch]
  int v31; // [esp+B4h] [ebp-8h]
  float v32; // [esp+B8h] [ebp-4h]
  int savedregs; // [esp+BCh] [ebp+0h] BYREF

  if ( *(_BYTE *)(this + 1867) )
  {
    sub_101CB850(this);
    return;
  }
  v4 = a2;
  v5 = a3;
  sub_100DA500((_BYTE *)this, a2, a3);
  v6 = v4 == 0;
  v7 = *(_DWORD *)(v5 + 4 * v6 + 104);
  a3 = v6;
  if ( v7 != this )
  {
    v8 = *(_DWORD *)(this + 424);
    if ( v8 && ((*(int (__thiscall **)(int))(*(_DWORD *)v8 + 76))(v8) & 4) != 0 )
    {
      if ( !v7 )
      {
LABEL_10:
        v9 = a2;
        if ( *(_BYTE *)(this + 5029) )
          sub_101CCF20((int *)this, a2, (float *)v5);
        if ( *(_BYTE *)(this + 225) )
        {
          a2 = 0;
          sub_101C08A0(v9, v5, 1.0, 1, &a2, 0, 0);
          v32 = 1.0;
          if ( 1.0 > 0.0 )
          {
            if ( *(_BYTE *)(this + 5029) )
              v32 = 1.0 * 10.0;
            v31 = *(_DWORD *)(v5 + 4 * a3 + 104);
            if ( !v31 )
            {
              v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
              v31 = sub_10038080(v10);
            }
            (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v5 + 28) + 4))(*(_DWORD *)(v5 + 28), &v25);
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 628))(this) )
            {
              v11 = (float *)sub_10019640((_DWORD *)this);
              v12 = (v26 - v11[1]) * 128.0;
              v13 = (v27 - v11[2]) * 128.0;
              v24[0] = *(float *)&v25 + (*(float *)&v25 - *v11) * 128.0;
              v24[1] = v26 + v12;
              v24[2] = v27 + v13;
              v14 = (float *)sub_10019640((_DWORD *)this);
              sub_1002A5F0((int)&savedregs, this, v14, v24, 1174421507, this, 0, (int)v22);
              if ( v23 )
                (*(void (__thiscall **)(int, _BYTE *, const char *))(*(_DWORD *)this + 304))(this, v22, "Blood");
            }
            v15 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v5 + 4 * v9) + 116))(*(_DWORD *)(v5 + 4 * v9));
            *(float *)&v28 = *(float *)(v5 + 12 * v9 + 56) * v15;
            v29 = *(float *)(v5 + 12 * v9 + 60) * v15;
            v30 = v15 * *(float *)(v5 + 12 * v9 + 64);
            if ( sub_10018CD0((float *)&v28, &flt_106F1CA8) )
            {
              v16 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v5 + 4 * a3) + 116))(*(_DWORD *)(v5 + 4 * a3));
              v17 = *(float *)(v5 + 12 * a3 + 56) * v16;
              v18 = *(float *)(v5 + 12 * a3 + 60) * v16;
              v19 = v16 * *(float *)(v5 + 12 * a3 + 64);
              *(float *)&v28 = v17;
              v29 = v18;
              v30 = v19;
            }
            v20 = v32;
            v21 = sub_102487B0(v31, v31, (int)&v28, (int)&v25, v32, a2, 0, 0);
            sub_101BB4B0(v20, this, v21, v5, v9);
          }
        }
        if ( *(_BYTE *)(this + 5029) )
        {
          sub_100EC3F0((_DWORD *)this, (int)sub_101CB660, 0.0, 0);
          sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
        }
        return;
      }
      if ( v7 == (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 3.4028235e38) )
        return;
    }
    if ( v7 && (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 0.5) == v7 )
      return;
    goto LABEL_10;
  }
}
