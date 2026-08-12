int __thiscall sub_10314B80(int this, float *a2, float *a3)
{
  float *v4; // edi
  float *v5; // eax
  int (__thiscall *v6)(int); // eax
  float *v7; // eax
  int v8; // eax
  int (__thiscall *v9)(int, _DWORD *); // edx
  float *v11; // [esp+8h] [ebp-78h]
  _DWORD v12[20]; // [esp+1Ch] [ebp-64h] BYREF
  char v13; // [esp+6Ch] [ebp-14h]
  __int16 v14; // [esp+70h] [ebp-10h]
  int v15[3]; // [esp+74h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 4120) == 4 )
  {
    v11 = a3;
LABEL_10:
    v4 = a2;
    sub_10313230((float *)this, a2, v11, (float *)v15);
    goto LABEL_11;
  }
  if ( *(_DWORD *)(this + 4184) >= *(_DWORD *)(this + 4188) && sub_103131E0((void *)this) )
  {
    v4 = a2;
    v5 = (float *)sub_103131E0((void *)this);
    sub_103149E0(v5, 10.0, 80.0, a2, (float *)v15);
  }
  else
  {
    if ( *(_DWORD *)(this + 4108) < *(_DWORD *)(this + 4112)
      || !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      ++*(_DWORD *)(this + 4184);
      v11 = a3;
      goto LABEL_10;
    }
    v4 = a2;
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
    *(_DWORD *)(this + 4184) += 6;
    v7 = (float *)v6(this);
    sub_103149E0(v7, 20.0, 50.0, a2, (float *)v15);
  }
LABEL_11:
  v8 = *(_DWORD *)(this + 4068);
  *(float *)&v12[1] = *v4;
  v9 = *(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 432);
  *(float *)&v12[2] = v4[1];
  v12[11] = v8;
  *(float *)&v12[3] = v4[2];
  v12[14] = 0;
  v12[15] = 0;
  v12[4] = v15[0];
  v12[18] = 0;
  v12[19] = 0;
  v12[5] = v15[1];
  v14 = 0;
  v12[6] = v15[2];
  *(float *)&v12[7] = flt_106F1CA8;
  v12[0] = 1;
  v13 = 1;
  *(float *)&v12[8] = flt_106F1CAC;
  v12[12] = 1;
  v12[16] = 8;
  *(float *)&v12[9] = flt_106F1CB0;
  *(float *)&v12[10] = 16384.0;
  *(float *)&v12[17] = 1.0;
  return v9(this, v12);
}
