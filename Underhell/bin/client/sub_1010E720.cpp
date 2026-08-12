void __thiscall sub_1010E720(int this, char *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st7
  int v12; // eax
  int v13; // eax
  _BYTE v14[12]; // [esp+28h] [ebp-2Ch] BYREF
  _BYTE v15[12]; // [esp+34h] [ebp-20h] BYREF
  float v16[3]; // [esp+40h] [ebp-14h] BYREF
  int v17; // [esp+4Ch] [ebp-8h]
  float v18; // [esp+50h] [ebp-4h]
  float v19; // [esp+5Ch] [ebp+8h]

  if ( !a2 )
    return;
  v3 = *(_DWORD *)(this + 4);
  if ( !v3 || (*(_BYTE *)(v3 + 28) & 0xF) != 3 )
    return;
  v4 = (***(int (__thiscall ****)(_DWORD))(this + 4))(*(_DWORD *)(this + 4));
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
  v17 = v5;
  sub_100392A0(a2, (int)v15, 0, 0);
  (*(void (__thiscall **)(char *, _BYTE *))(*(_DWORD *)a2 + 532))(a2, v14);
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, _DWORD, float *, _DWORD))(*(_DWORD *)dword_1041315C + 264))(
    dword_1041315C,
    v14,
    v15,
    0,
    v16,
    0);
  v6 = (v16[1] * 0.58700001 + v16[0] * 0.29899999 + v16[2] * 0.114) * 0.5;
  v19 = v6;
  if ( v6 <= 1.0 )
  {
    if ( v6 < 0.0 )
      v19 = 0.0;
  }
  else
  {
    v19 = 1.0;
  }
  v7 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
  v18 = v7;
  if ( v7 >= v19 )
  {
    v11 = sub_1009E8A0((_DWORD *)(this + 28));
    v9 = v18 - v11 * *((float *)off_103DC81C + 4);
    v10 = v19;
    if ( v19 < v9 )
    {
      v19 = v9;
      goto LABEL_14;
    }
LABEL_13:
    v9 = v10;
    goto LABEL_14;
  }
  v8 = sub_1009E8A0((_DWORD *)(this + 16));
  v9 = v8 * *((float *)off_103DC81C + 4) + v18;
  v10 = v19;
  if ( v19 <= v9 )
    goto LABEL_13;
  v19 = v9;
LABEL_14:
  v12 = (int)(v9 * (double)v17);
  if ( v12 <= v5 - 1 )
    v13 = v12 < 0 ? 0 : v12;
  else
    v13 = v5 - 1;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 16))(*(_DWORD *)(this + 8), v13);
  (*(void (__stdcall **)(float))(**(_DWORD **)(this + 12) + 12))(COERCE_FLOAT(LODWORD(v19)));
}
