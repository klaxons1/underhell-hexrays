void __thiscall sub_10316550(_BYTE *this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // ebx
  int v8; // eax
  bool v9; // c3
  double v10; // st7
  float *v11; // eax
  double v12; // st7
  float v13; // [esp+0h] [ebp-90h]
  float v14; // [esp+Ch] [ebp-84h]
  float v15; // [esp+24h] [ebp-6Ch] BYREF
  float v16; // [esp+28h] [ebp-68h]
  float v17; // [esp+2Ch] [ebp-64h]
  float v18; // [esp+30h] [ebp-60h]
  float v19; // [esp+34h] [ebp-5Ch]
  float v20; // [esp+38h] [ebp-58h]
  float v21; // [esp+3Ch] [ebp-54h]
  float v22; // [esp+40h] [ebp-50h]
  float v23; // [esp+44h] [ebp-4Ch]
  float v24; // [esp+48h] [ebp-48h]
  float v25; // [esp+4Ch] [ebp-44h]
  float v26; // [esp+50h] [ebp-40h]
  int v27; // [esp+54h] [ebp-3Ch]
  int v28; // [esp+58h] [ebp-38h]
  float v29; // [esp+5Ch] [ebp-34h]
  float v30; // [esp+60h] [ebp-30h]
  float v31; // [esp+64h] [ebp-2Ch]
  int v32; // [esp+68h] [ebp-28h]
  __int16 v33; // [esp+6Ch] [ebp-24h]
  int v34; // [esp+70h] [ebp-20h]
  int v35; // [esp+74h] [ebp-1Ch]
  int v36; // [esp+78h] [ebp-18h]
  char v37; // [esp+7Ch] [ebp-14h]
  float v38; // [esp+84h] [ebp-Ch]
  float v39; // [esp+88h] [ebp-8h]
  float v40; // [esp+8Ch] [ebp-4h]

  v4 = *((_DWORD *)this + 103);
  if ( v4 != -1 && (v5 = &off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 1], v6 = v4 >> 12, v5[1] == v6) && *v5 )
  {
    if ( v5[1] == v6 )
      v7 = (_BYTE *)*v5;
    else
      v7 = 0;
  }
  else
  {
    v7 = this;
  }
  v8 = *((_DWORD *)this + 63);
  v40 = *(float *)(dword_106E365C + 44);
  v39 = *(float *)(dword_106E3614 + 44);
  v38 = *(float *)(dword_106E35CC + 44);
  if ( (v8 & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1013D350((float *)this + 145, (float *)this + 176, (int)v7, (int)v38, (int)v39, 1588, v40, (int)this, -1, 0, 0);
  v9 = 0.0 == ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)this + 1164))(this);
  v10 = 0.0;
  if ( !v9 )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v14 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)this + 1168))(this);
    v13 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(*(_DWORD *)this + 1164))(this);
    sub_10261B70((float *)this + 145, v13, 150.0, 1.0, v14, 0, 0);
    v10 = 0.0;
  }
  v15 = v10;
  v16 = v10;
  v27 = 0;
  v17 = v10;
  v28 = 0;
  v18 = v10;
  v32 = 0;
  v19 = v10;
  v33 = 0;
  v20 = v10;
  v34 = 0;
  v21 = v10;
  v35 = 0;
  v22 = v10;
  v36 = 0;
  v23 = v10;
  v37 = 0;
  v24 = v10;
  v25 = v10;
  v26 = v10;
  v29 = 1.0;
  v30 = v10;
  v31 = v10;
  if ( this[447] && (sub_100E87E0(this) & 0x20) != 0 )
  {
    v11 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 576))(this);
    v15 = *v11;
    v16 = v11[1];
    v12 = v11[2];
    v27 = 0;
    v17 = v12;
    v30 = 128.0;
    v29 = 128.0;
    sub_1028E890((int)"WaterSurfaceExplosion", (int)&v15);
  }
  else
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    v15 = *((float *)this + 145);
    v16 = *((float *)this + 146);
    v17 = *((float *)this + 147);
    sub_1028E890((int)"HelicopterMegaBomb", (int)&v15);
  }
  sub_1025FAC0((int)this);
}
