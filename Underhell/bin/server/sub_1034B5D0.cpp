void __thiscall sub_1034B5D0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  float v5; // ecx
  float v6; // edx
  unsigned int v7; // eax
  int v8; // ecx
  int *v9; // edx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int *v13; // ecx
  unsigned int v14; // eax
  int v15; // ebx
  unsigned int v16; // eax
  int v17; // edi
  unsigned int v18; // eax
  int *v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // edi
  void (__noreturn ***v23)(); // eax
  int v24; // eax
  bool v25; // zf
  float v26; // [esp+10h] [ebp-94h]
  __int64 v27; // [esp+1Ch] [ebp-88h]
  float v28; // [esp+1Ch] [ebp-88h]
  _DWORD v29[20]; // [esp+2Ch] [ebp-78h] BYREF
  float v30[3]; // [esp+7Ch] [ebp-28h] BYREF
  float v31[3]; // [esp+88h] [ebp-1Ch] BYREF
  float v32[2]; // [esp+94h] [ebp-10h] BYREF
  float v33; // [esp+9Ch] [ebp-8h]
  int v34; // [esp+A0h] [ebp-4h]

  v2 = *(_DWORD *)(this + 4016);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 140))(v4, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v5 = *(float *)(this + 476);
  v6 = *(float *)(this + 480);
  v33 = *(float *)(this + 484);
  v32[0] = v5;
  v32[1] = v6;
  if ( v33 > 0.0 )
    v33 = 0.0;
  v7 = *(_DWORD *)(this + 4016);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
  sub_100DD660(v8, v32);
  v10 = *(_DWORD *)(this + 4016);
  if ( v10 == -1 || (v9 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v10 >> 12) )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
  sub_100E0970(v11, (int)v9, 6, 0);
  v12 = *(_DWORD *)(this + 4120);
  if ( v12 != -1 )
  {
    v13 = &off_1061BE18[4 * (*(_DWORD *)(this + 4120) & 0xFFF) + 1];
    v14 = v12 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 4120) & 0xFFF) + 2] == v14 )
    {
      if ( *v13 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 4120) & 0xFFF) + 2] == v14 )
          v15 = *v13;
        else
          v15 = 0;
        v16 = *(_DWORD *)(this + 4016);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
        if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
          sub_100DAE60(v17);
        v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 448))(v15);
        v26 = (float)v34;
        sub_102487B0((int)v29, this, this, &flt_106F1CA8, (float *)(v17 + 580), v26, 0, 0, 0);
        v18 = *(_DWORD *)(this + 4120);
        if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4120) & 0xFFF) + 2] != v18 >> 12 )
          v19 = 0;
        else
          v19 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 4120) & 0xFFF) + 1];
        sub_100D9E70(v19, this, v29);
      }
    }
  }
  v20 = *(_DWORD *)(this + 4016);
  if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] != v20 >> 12 )
    v21 = 0;
  else
    v21 = off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
  v22 = *(_DWORD *)(v21 + 424);
  if ( v22 )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v22 + 284))(*(_DWORD *)(v21 + 424));
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v22 + 196))(v22, v32, &flt_106F1CA8);
  }
  v31[0] = 40.0;
  v31[1] = 40.0;
  v31[2] = 40.0;
  v30[0] = -40.0;
  v30[1] = -40.0;
  v30[2] = 0.0;
  sub_1025F360((_DWORD *)this, (int)v30, (int)v31);
  *(_DWORD *)(this + 4016) = -1;
  if ( *(_DWORD *)(this + 3960) )
  {
    if ( *(_DWORD *)(this + 4160) )
    {
      v23 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v23)[12])(
        v23,
        *(_DWORD *)(this + 4160),
        0.0,
        0.0);
    }
    *(_DWORD *)(this + 3960) = 0;
  }
  *(_DWORD *)(this + 4032) = -1;
  if ( *(_BYTE *)(this + 3985) )
  {
    HIDWORD(v27) = this;
    LODWORD(v27) = this;
    sub_1010DD80((_DWORD *)(this + 4240), v27, 0.0);
  }
  else
  {
    v24 = *(_DWORD *)(this + 3952) - *(_DWORD *)(this + 4116);
    v25 = *(_DWORD *)(dword_106E673C + 48) == 0;
    v34 = v24;
    if ( !v25 )
      Msg("Dropship died, troops not unloaded: %d\n", v24);
    v28 = (float)v34;
    sub_10108AE0((int *)(this + 4216), SLOBYTE(v28), this, this);
  }
}
