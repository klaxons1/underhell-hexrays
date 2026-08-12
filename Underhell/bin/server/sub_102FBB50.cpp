int __thiscall sub_102FBB50(void *this, float *a2)
{
  _DWORD *v4; // esi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  int v8; // ecx
  int result; // eax
  _DWORD v10[514]; // [esp+38h] [ebp-848h] BYREF
  _BYTE v11[12]; // [esp+840h] [ebp-40h] BYREF
  float v12[3]; // [esp+84Ch] [ebp-34h] BYREF
  float v13[3]; // [esp+858h] [ebp-28h] BYREF
  float v14[3]; // [esp+864h] [ebp-1Ch] BYREF
  float v15; // [esp+870h] [ebp-10h]
  float v16; // [esp+874h] [ebp-Ch]
  float v17; // [esp+878h] [ebp-8h]
  char v18; // [esp+87Fh] [ebp-1h]
  float v19; // [esp+888h] [ebp+8h]

  v18 = 0;
  sub_10261520(v10, (int)a2, 128.0, 0);
  v4 = (_DWORD *)sub_1025EEE0(v10);
  if ( !v4 )
    return sub_10261B70(a2, 1.0, 80.0, 1.0, 256.0, 0, 0);
  do
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v4 + 220))(v4) == 1 )
    {
      v18 = 1;
    }
    else if ( *((_BYTE *)v4 + 225) && (*(int (__thiscall **)(_DWORD *))(*v4 + 220))(v4) != 1 && v4[106] )
    {
      v5 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *, float *, int))(*v4 + 520))(v4, v11, a2, 1);
      v6 = v5[1] - a2[1];
      v7 = v5[2] - a2[2] + 16.0;
      v15 = *v5 - *a2;
      v16 = v6;
      v17 = v7;
      v19 = off_10689714();
      v13[0] = 1.0;
      v13[1] = 1.0;
      v13[2] = 1.0;
      sub_10111860((int)this + 320, &flt_106F1CA8, v13, v12);
      if ( v19 <= 128.0 )
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v4[106] + 96))(v4[106]);
        v8 = v4[106];
        v14[0] = v15 * 250.0;
        v14[1] = v16 * 250.0;
        v14[2] = 250.0 * v17;
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v8 + 240))(v8, v14, v12);
      }
    }
    ++v10[0];
    result = sub_1025EEE0(v10);
    v4 = (_DWORD *)result;
  }
  while ( result );
  if ( !v18 )
    return sub_10261B70(a2, 1.0, 80.0, 1.0, 256.0, 0, 0);
  return result;
}
