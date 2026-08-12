bool __thiscall sub_10398E20(float *this, float *a2, float *a3)
{
  int v4; // edx
  int v5; // ebx
  int *v6; // ecx
  int v7; // esi
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  int (__thiscall *v12)(float *, float *, float *); // edx
  char v13; // al
  int v14; // eax
  float *v15; // eax
  float *v16; // esi
  double v17; // st4
  double v18; // st6
  double v19; // st4
  double v20; // st5
  double v21; // st6
  int v23; // eax
  float *v24; // ebx
  int v25; // ecx
  double v26; // st6
  double v27; // st5
  float v28; // [esp+Ch] [ebp-1Ch] BYREF
  float v29; // [esp+10h] [ebp-18h]
  float v30; // [esp+14h] [ebp-14h]
  float v31; // [esp+18h] [ebp-10h]
  float v32; // [esp+1Ch] [ebp-Ch]
  float v33; // [esp+20h] [ebp-8h]
  int i; // [esp+24h] [ebp-4h]
  int savedregs; // [esp+28h] [ebp+0h] BYREF
  int v36; // [esp+30h] [ebp+8h]

  if ( !byte_106EA248 )
    goto LABEL_18;
  v4 = 0;
  for ( i = 0; v4 < dword_106EA38C; i = ++v4 )
  {
    v5 = *(_DWORD *)(dword_106EA380 + 4 * v4);
    if ( *(_DWORD *)v5 != -1 )
    {
      v6 = &off_1061BE18[4 * (*(_DWORD *)v5 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)v5 & 0xFFF) + 2] == *(_DWORD *)v5 >> 12 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          if ( v7 != (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
            && !sub_103960A0(v7)
            && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 220))(v7) != 20
            && i >= 2 )
          {
            break;
          }
          v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 532))(v7);
          v9 = *v8 + *(float *)(v5 + 4);
          v10 = v8[1] + *(float *)(v5 + 8);
          v11 = v8[2] + *(float *)(v5 + 12);
          byte_106EA248 = 0;
          v12 = *(int (__thiscall **)(float *, float *, float *))(*(_DWORD *)this + 1944);
          v28 = v9;
          v29 = v10;
          v30 = v11;
          v13 = v12(this, &v28, a3);
          byte_106EA248 = 1;
          if ( !v13 )
            return 0;
          v4 = i;
        }
      }
    }
  }
  if ( dword_106EA24C != 2 && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    v14 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v15 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v14 + 504))(v14, &v28);
    v16 = a2;
    v17 = a2[1] - v15[1];
    v18 = v17 * v17;
    v19 = *a2 - *v15;
    v20 = v18;
    v21 = a2[2] - v15[2];
    if ( v19 * v19 + v20 + v21 * v21 < 1.0 )
      return 1;
  }
  else
  {
LABEL_18:
    v16 = a2;
  }
  if ( dword_106EA24C == 1 && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    v23 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v24 = a3;
    if ( sub_10395EB0(a3, v23) )
      return 1;
  }
  else
  {
    v24 = a3;
  }
  if ( dword_106EA24C == 2 )
  {
    v36 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1460))(this, 8);
    if ( v36 )
    {
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v25 = *((_DWORD *)this + 63) >> 11;
      v28 = *v16 - this[145];
      v29 = v16[1] - this[146];
      v30 = v16[2] - this[147];
      if ( (v25 & 1) != 0 )
        sub_100DAE60((int)this);
      v31 = *v24 - this[145];
      v32 = v24[1] - this[146];
      v33 = v24[2] - this[147];
      off_10689714();
      off_10689714();
      if ( v32 * v29 + v31 * v28 > 0.0 )
        return 0;
      v26 = v24[1] - v16[1];
      v27 = *v24 - *v16;
      if ( (double)(*(_DWORD *)(v36 + 8) * *(_DWORD *)(v36 + 8)) < v27 * v27 + v26 * v26 )
        return 1;
    }
  }
  return sub_10034610(this, (int)&savedregs, (int)this, (int)v16, v16, v24);
}
