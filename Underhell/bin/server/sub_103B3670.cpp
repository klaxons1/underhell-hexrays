void __thiscall sub_103B3670(char *this, float *a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edi
  int *v9; // ebx
  _DWORD *v10; // edx
  int *v11; // ecx
  float v12; // edx
  float v13; // eax
  int v14; // edx
  float *v15; // eax
  double v16; // st4
  double v17; // st7
  double v18; // st4
  double v19; // st5
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // ecx
  int v23; // [esp-4h] [ebp-BCh]
  int v24[20]; // [esp+Ch] [ebp-ACh] BYREF
  int v25[11]; // [esp+5Ch] [ebp-5Ch] BYREF
  unsigned int v26; // [esp+88h] [ebp-30h]
  float v27; // [esp+90h] [ebp-28h]
  char v28; // [esp+9Ch] [ebp-1Ch]
  float v29; // [esp+ACh] [ebp-Ch]
  float v30; // [esp+B0h] [ebp-8h]
  float v31; // [esp+B4h] [ebp-4h]

  sub_1001E4E0(v25, (int)a2);
  if ( v26 == -1 || off_1061BE18[4 * (v26 & 0xFFF) + 2] != v26 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v26 & 0xFFF) + 1];
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) && (this[2716] & 1) == 0 )
  {
    if ( v26 == -1 || off_1061BE18[4 * (v26 & 0xFFF) + 2] != v26 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (v26 & 0xFFF) + 1];
    v23 = v6;
    v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1868))(this);
    sub_100780E0(v7, v23);
    *((_DWORD *)this + 679) |= 1u;
    sub_10023CB0(this, 17);
  }
  v8 = 0;
  if ( *((int *)this + 1004) > 0 )
  {
    v9 = off_1061BE18;
    do
    {
      v10 = (_DWORD *)(*((_DWORD *)this + 1001) + 4 * v8);
      if ( *v10 != -1 && v9[4 * (*v10 & 0xFFF) + 2] == *v10 >> 12 && v9[4 * (*v10 & 0xFFF) + 1] )
      {
        if ( *v10 == -1 || v9[4 * (*v10 & 0xFFF) + 2] != *v10 >> 12 )
          v11 = 0;
        else
          v11 = (int *)v9[4 * (*v10 & 0xFFF) + 1];
        v12 = a2[5];
        v29 = a2[4];
        v13 = a2[6];
        v30 = v12;
        v14 = *v11;
        v31 = v13;
        v15 = (float *)(*(int (__thiscall **)(int *))(v14 + 576))(v11);
        v16 = *v15 - v29;
        v17 = v16 * v16;
        v18 = v15[1] - v30;
        v19 = v15[2] - v31;
        if ( v19 * v19 + v18 * v18 + v17 < 2500.0 )
        {
          sub_1001E4E0(v24, (int)a2);
          v20 = *((_DWORD *)this + 1001);
          *(float *)&v24[13] = 100.0;
          v21 = *(_DWORD *)(v20 + 4 * v8);
          if ( v21 == -1 || (v22 = &off_1061BE18[4 * (*(_DWORD *)(v20 + 4 * v8) & 0xFFF) + 1], v22[1] != v21 >> 12) )
            sub_100D9E70(0, (int)this, v24);
          else
            sub_100D9E70((int *)*v22, (int)this, v24);
          return;
        }
        v9 = off_1061BE18;
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)this + 1004) );
  }
  if ( (v28 & 2) != 0 )
  {
    ((void (__thiscall *)(int (__stdcall ***)(char), int, int))(*off_1061B7A0)[8])(off_1061B7A0, a4 + 12, a4 + 24);
    if ( *(_DWORD *)(a4 + 68) != 1 )
      v27 = 0.0099999998;
  }
  sub_100360A0(this, (int)v25, a3, a4);
}
