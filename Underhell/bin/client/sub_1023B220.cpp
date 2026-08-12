_DWORD *__thiscall sub_1023B220(_DWORD *this, _DWORD *a2)
{
  const char *v3; // eax
  int v4; // ebp
  void (__thiscall **v5)(int, int); // ebx
  int v6; // eax
  int v7; // ebp
  int (__thiscall **v8)(int, int); // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // edx
  int (__thiscall **v13)(int, int); // ebx
  int v14; // eax
  __int16 v15; // ax
  int v16; // eax
  __int16 v17; // ax
  int v18; // eax
  _DWORD *v19; // ecx
  const char *v20; // eax
  int v21; // ebp
  void (__thiscall **v22)(int, int); // ebx
  int v23; // eax
  int v24; // ebp
  int (__thiscall **v25)(int, int); // ebx
  int v26; // eax
  int v27; // eax
  int v28; // ebp
  int v29; // edx
  int (__thiscall **v30)(int, int); // ebx
  int v31; // eax
  int v32; // ebp
  int (__thiscall **v33)(int, int); // ebx
  int v34; // eax
  int v35; // eax
  unsigned __int8 v36; // al
  unsigned __int8 v37; // al
  int v38; // eax
  _DWORD *result; // eax
  int v40; // ebp
  int v41; // ebx
  char *v42; // [esp+24h] [ebp-50h]
  char *v43; // [esp+24h] [ebp-50h]
  int v44; // [esp+28h] [ebp-4Ch]
  int v45; // [esp+28h] [ebp-4Ch]
  int v46; // [esp+3Ch] [ebp-38h] BYREF
  int v47; // [esp+40h] [ebp-34h] BYREF
  int v48; // [esp+44h] [ebp-30h] BYREF
  int v49; // [esp+48h] [ebp-2Ch] BYREF
  int v50; // [esp+4Ch] [ebp-28h] BYREF
  int v51; // [esp+50h] [ebp-24h] BYREF
  char Buffer[32]; // [esp+54h] [ebp-20h] BYREF

  v3 = (const char *)(*(int (__thiscall **)(_DWORD *))(*this + 76))(this);
  sub_1022ABA0(a2, "ControlName", v3);
  sub_1022ABA0(a2, "fieldName", (const char *)this[18]);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v49, &v51);
  v4 = dword_1047CA70;
  v5 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 12);
  v6 = (*(int (__thiscall **)(_DWORD *, int *, int *))*this)(this, &v46, &v47);
  (*v5)(v4, v6);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 84))(this) )
  {
    v7 = dword_1047CA7C;
    v8 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 56);
    v9 = (*(int (__thiscall **)(_DWORD *, int))(*this + 80))(this, v46);
    v10 = (*v8)(v7, v9);
    v11 = dword_1047CA7C;
    v12 = *this;
    v46 = v10;
    v13 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 56);
    v14 = (*(int (__thiscall **)(_DWORD *, int))(v12 + 80))(this, v47);
    v47 = (*v13)(v11, v14);
  }
  v15 = *((_WORD *)this + 74);
  if ( (v15 & 4) != 0 )
  {
    v16 = v49 - v46;
    v44 = v49 - v46;
    v42 = "r%d";
LABEL_7:
    v46 = v16;
    sub_10228370(Buffer, 0x20u, v42, v44);
    sub_1022ABA0(a2, "xpos", Buffer);
    goto LABEL_9;
  }
  if ( (v15 & 8) != 0 )
  {
    v16 = v49 / 2 + v46;
    v44 = v16;
    v42 = "c%d";
    goto LABEL_7;
  }
  sub_1022ACA0(a2, "xpos", v46);
LABEL_9:
  v17 = *((_WORD *)this + 74);
  if ( (v17 & 0x10) != 0 )
  {
    v18 = v51 - v47;
    v45 = v51 - v47;
    v43 = "r%d";
  }
  else
  {
    if ( (v17 & 0x20) == 0 )
    {
      sub_1022ACA0(a2, "ypos", v47);
      goto LABEL_15;
    }
    v18 = v51 / 2 + v47;
    v45 = v18;
    v43 = "c%d";
  }
  v47 = v18;
  sub_10228370(Buffer, 0x20u, v43, v45);
  sub_1022ABA0(a2, "ypos", Buffer);
LABEL_15:
  v19 = (_DWORD *)this[12];
  if ( v19 && strlen((const char *)sub_1009C2A0(v19)) )
  {
    v20 = (const char *)sub_1009C2A0((_DWORD *)this[12]);
    sub_1022ABA0(a2, "tooltiptext", v20);
  }
  v21 = dword_1047CA70;
  v22 = (void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 20);
  v23 = (*(int (__thiscall **)(_DWORD *, int *, int *))*this)(this, &v48, &v50);
  (*v22)(v21, v23);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 84))(this) )
  {
    v24 = dword_1047CA7C;
    v25 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 56);
    v26 = (*(int (__thiscall **)(_DWORD *, int))(*this + 80))(this, v48);
    v27 = (*v25)(v24, v26);
    v28 = dword_1047CA7C;
    v29 = *this;
    v48 = v27;
    v30 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 56);
    v31 = (*(int (__thiscall **)(_DWORD *, int))(v29 + 80))(this, v50);
    v50 = (*v30)(v28, v31);
  }
  v32 = dword_1047CA70;
  v33 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 36);
  v34 = (*(int (__thiscall **)(_DWORD *))*this)(this);
  v35 = (*v33)(v32, v34);
  if ( v35 )
    sub_1022ACA0(a2, "zpos", v35);
  if ( (this[37] & 0x40) != 0 )
  {
    v48 = v49 - v48;
    sub_10228370(Buffer, 0x20u, "f%d", v48);
    sub_1022ABA0(a2, "wide", Buffer);
  }
  else
  {
    sub_1022ACA0(a2, "wide", v48);
  }
  sub_1022ACA0(a2, "tall", v50);
  sub_1022ACA0(a2, "AutoResize", *((unsigned __int8 *)this + 150) >> 4);
  sub_1022ACA0(a2, "PinCorner", *((_BYTE *)this + 150) & 0xF);
  v36 = (*(int (__thiscall **)(_DWORD *))(*this + 128))(this);
  sub_1022ACA0(a2, "visible", v36);
  v37 = (*(int (__thiscall **)(_DWORD *))(*this + 204))(this);
  sub_1022ACA0(a2, "enabled", v37);
  v38 = (*(int (__thiscall **)(_DWORD *))(*this + 68))(this);
  result = sub_1022ACA0(a2, "tabPosition", v38);
  v40 = 0;
  if ( (int)this[29] > 0 )
  {
    v41 = 0;
    do
    {
      result = (_DWORD *)(v41 + this[26]);
      if ( *((_BYTE *)result + 12) )
        result = sub_1022AB60(a2, (char *)*result, result[2]);
      ++v40;
      v41 += 16;
    }
    while ( v40 < this[29] );
  }
  return result;
}
