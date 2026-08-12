int __thiscall sub_103F4920(int *this, int a2, int a3)
{
  int v5; // eax
  float *v6; // eax
  float *v7; // eax
  int v8; // edx
  int v9; // eax
  void (__thiscall *v10)(int, _DWORD *); // edx
  int result; // eax
  int *v12; // esi
  int v13; // edi
  int *v14; // ecx
  _DWORD v15[11]; // [esp+1Ch] [ebp-7Ch] BYREF
  int v16; // [esp+48h] [ebp-50h]
  int v17; // [esp+4Ch] [ebp-4Ch]
  int v18; // [esp+50h] [ebp-48h]
  int v19; // [esp+54h] [ebp-44h]
  int v20; // [esp+58h] [ebp-40h]
  int v21; // [esp+5Ch] [ebp-3Ch]
  float v22; // [esp+60h] [ebp-38h]
  int v23; // [esp+64h] [ebp-34h]
  int v24; // [esp+68h] [ebp-30h]
  __int16 v25; // [esp+6Ch] [ebp-2Ch]
  char v26; // [esp+6Fh] [ebp-29h]
  __int16 v27; // [esp+70h] [ebp-28h]
  _BYTE v28[12]; // [esp+74h] [ebp-24h] BYREF
  float v29; // [esp+80h] [ebp-18h] BYREF
  float v30; // [esp+84h] [ebp-14h]
  float v31; // [esp+88h] [ebp-10h]
  float v32; // [esp+8Ch] [ebp-Ch] BYREF
  float v33; // [esp+90h] [ebp-8h]
  float v34; // [esp+94h] [ebp-4h]
  int v35; // [esp+A0h] [ebp+8h]

  v35 = sub_100D7680(a2);
  if ( (_BYTE)a3 )
  {
    v5 = sub_100BEF30((int)this, "muzzle");
    sub_100BCCA0(this, v5, (int)&v32, (int)v28);
    sub_10422220(v28, &v29);
  }
  else
  {
    v6 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 968))(a2, v28);
    v32 = *v6;
    v33 = v6[1];
    v34 = v6[2];
    v7 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v35 + 2104))(v35, v28, &v32);
    v29 = *v7;
    v30 = v7[1];
    v31 = v7[2];
  }
  (*(void (__thiscall **)(int *, int, _DWORD))(*this + 1132))(this, 3, 0.0);
  v22 = 1.0;
  v20 = 0;
  *(float *)&v15[1] = v32;
  v24 = 0;
  v18 = 0;
  *(float *)&v15[2] = v33;
  v27 = 0;
  v26 = 0;
  *(float *)&v15[3] = v34;
  v19 = 0;
  v23 = 0;
  *(float *)&v15[4] = v29;
  v21 = 0;
  *(float *)&v15[5] = v30;
  *(float *)&v15[6] = v31;
  *(float *)&v15[7] = flt_106F1CA8;
  *(float *)&v15[8] = flt_106F1CAC;
  *(float *)&v15[9] = flt_106F1CB0;
  *(float *)&v15[10] = 56755.84;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    v8 = this[298];
    v15[0] = 1;
    v17 = 1;
    v25 = 1;
    v9 = *(_DWORD *)a2;
    v16 = v8;
    (*(void (__thiscall **)(int, _DWORD *))(v9 + 432))(a2, v15);
  }
  else
  {
    v10 = *(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 432);
    v16 = this[298];
    v15[0] = 1;
    v17 = 2;
    v25 = 1;
    v10(a2, v15);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 1116))(a2);
  result = dword_10698344;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    result = this[300];
    if ( result > 1 )
    {
      a3 = result - 1;
      return (int)sub_10031800(this + 300, &a3);
    }
  }
  else
  {
    v12 = this + 300;
    v13 = this[300] - 1;
    if ( *v12 != v13 )
    {
      result = (int)(v12 - 300);
      if ( *((_BYTE *)v12 - 1116) )
      {
        *(_BYTE *)(result + 88) |= 1u;
        *v12 = v13;
      }
      else
      {
        v14 = *(int **)(result + 24);
        if ( v14 )
          result = sub_100194B0(v14, 1200);
        *v12 = v13;
      }
    }
  }
  return result;
}
