bool __thiscall sub_101A2970(float *this)
{
  int v2; // eax
  char *v3; // eax
  int v4; // ebx
  char *v5; // eax
  int v6; // ecx
  int v8; // [esp+0h] [ebp-A4h]
  float v9; // [esp+0h] [ebp-A4h]
  char v10[44]; // [esp+1Ch] [ebp-88h] BYREF
  float v11; // [esp+48h] [ebp-5Ch]
  _DWORD v12[3]; // [esp+70h] [ebp-34h] BYREF
  float v13[3]; // [esp+7Ch] [ebp-28h] BYREF
  float v14[3]; // [esp+88h] [ebp-1Ch] BYREF
  float v15; // [esp+94h] [ebp-10h]
  float v16; // [esp+98h] [ebp-Ch]
  float v17; // [esp+9Ch] [ebp-8h]
  char *v18; // [esp+A0h] [ebp-4h]

  (*(void (__thiscall **)(float *, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v14, 0, 0);
  v2 = *((_DWORD *)this + 63) >> 11;
  v15 = v14[0] * 64.0;
  v16 = v14[1] * 64.0;
  v17 = 64.0 * v14[2];
  if ( (v2 & 1) != 0 )
    sub_100DAE60((int)this);
  v8 = *((_DWORD *)this + 419);
  v13[0] = this[145] + v15;
  v13[1] = this[146] + v16;
  v13[2] = this[147] + v17;
  v3 = sub_10073710(v8);
  v4 = *((_DWORD *)this + 106);
  v12[0] = *(_DWORD *)v3;
  v12[1] = *((_DWORD *)v3 + 1);
  v12[2] = *((_DWORD *)v3 + 2);
  v5 = sub_10073730(*((_DWORD *)this + 419));
  v6 = *((_DWORD *)this + 63) >> 11;
  v18 = v5;
  if ( (v6 & 1) != 0 )
    sub_100DAE60((int)this);
  v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4) * 0.5;
  sub_1030A4A0(this + 145, v13, v12, v18, 100679691, this, 0, v10, LODWORD(v9));
  return 1.0 != v11;
}
