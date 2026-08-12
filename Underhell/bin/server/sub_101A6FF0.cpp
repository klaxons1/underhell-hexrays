int __thiscall sub_101A6FF0(int this)
{
  int v1; // esi
  char *v3; // edi
  bool v4; // zf
  int v5; // ecx
  char *v6; // ecx
  int v7; // ecx
  char *v8; // ecx
  int v9; // ecx
  char *v10; // ecx
  int v11; // ecx
  char *v12; // ecx
  int v13; // ecx
  char *v14; // ecx
  int v15; // ecx
  char *v16; // ecx
  int v17; // ecx
  char *v18; // ecx
  int v19; // ecx
  void (__thiscall *v20)(int); // eax
  int *v21; // esi
  int v22; // edi
  int v23; // esi
  void *Src; // [esp+1Ch] [ebp-18h] BYREF
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+28h] [ebp-Ch]
  void *v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+30h] [ebp-4h]

  v1 = 0;
  v3 = 0;
  v4 = *(_BYTE *)(this + 3900) == 0;
  Src = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( !v4 )
  {
    sub_102ABFC0(1);
    v3 = (char *)Src;
    v1 = ++v28;
    v29 = Src;
  }
  if ( *(_BYTE *)(this + 3901) )
  {
    v5 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v5 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v5 - 1 > 0 )
    {
      memcpy(&v3[4 * v5 + 4], &v3[4 * v5], 4 * (v1 - v5 - 1));
      v5 = v30;
    }
    v6 = &v3[4 * v5];
    if ( v6 )
      *(_DWORD *)v6 = 6;
  }
  if ( *(_BYTE *)(this + 3902) )
  {
    v7 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v7 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v7 - 1 > 0 )
    {
      memcpy(&v3[4 * v7 + 4], &v3[4 * v7], 4 * (v1 - v7 - 1));
      v7 = v30;
    }
    v8 = &v3[4 * v7];
    if ( v8 )
      *(_DWORD *)v8 = 0;
  }
  if ( *(_BYTE *)(this + 3903) )
  {
    v9 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v9 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v9 - 1 > 0 )
    {
      memcpy(&v3[4 * v9 + 4], &v3[4 * v9], 4 * (v1 - v9 - 1));
      v9 = v30;
    }
    v10 = &v3[4 * v9];
    if ( v10 )
      *(_DWORD *)v10 = 5;
  }
  if ( *(_BYTE *)(this + 3904) )
  {
    v11 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v11 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v11 - 1 > 0 )
    {
      memcpy(&v3[4 * v11 + 4], &v3[4 * v11], 4 * (v1 - v11 - 1));
      v11 = v30;
    }
    v12 = &v3[4 * v11];
    if ( v12 )
      *(_DWORD *)v12 = 3;
  }
  if ( *(_BYTE *)(this + 3905) )
  {
    v13 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v13 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v13 - 1 > 0 )
    {
      memcpy(&v3[4 * v13 + 4], &v3[4 * v13], 4 * (v1 - v13 - 1));
      v13 = v30;
    }
    v14 = &v3[4 * v13];
    if ( v14 )
      *(_DWORD *)v14 = 4;
  }
  if ( *(_BYTE *)(this + 3906) )
  {
    v15 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v15 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v15 - 1 > 0 )
    {
      memcpy(&v3[4 * v15 + 4], &v3[4 * v15], 4 * (v1 - v15 - 1));
      v15 = v30;
    }
    v16 = &v3[4 * v15];
    if ( v16 )
      *(_DWORD *)v16 = 1;
  }
  if ( *(_BYTE *)(this + 3907) )
  {
    v17 = v1;
    v30 = v1;
    if ( v1 + 1 > v26 )
    {
      sub_102ABFC0(v1 - v26 + 1);
      v1 = v28;
      v3 = (char *)Src;
      v17 = v30;
    }
    v28 = ++v1;
    v29 = v3;
    if ( v1 - v17 - 1 > 0 )
    {
      memcpy(&v3[4 * v17 + 4], &v3[4 * v17], 4 * (v1 - v17 - 1));
      v17 = v30;
    }
    v18 = &v3[4 * v17];
    if ( v18 )
      *(_DWORD *)v18 = 7;
  }
  v19 = *(_DWORD *)&v3[4 * (sub_10219A30() % v1)];
  v20 = *(void (__thiscall **)(int))(*(_DWORD *)this + 100);
  *(_DWORD *)(this + 3892) = v19;
  v20(this);
  *(_WORD *)(this + 3776) = 0;
  *(_BYTE *)(this + 1668) = 1;
  sub_100CF450((_DWORD *)this, 0);
  v21 = (int *)(this + 220);
  v22 = (int)*(float *)(dword_106B912C + 44);
  if ( *(_DWORD *)(this + 220) != v22 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v21 = v22;
  }
  v23 = *v21;
  if ( *(_DWORD *)(this + 216) != v23 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = v23;
  }
  *(float *)(this + 1684) = 0.2;
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 2097162);
  sub_1032CE00(this);
  *(float *)(this + 3868) = 0.0;
  *(float *)(this + 3872) = 0.0;
  *(float *)(this + 3800) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              1.0,
                              4.0)
                          + *(float *)(dword_106B31C8 + 12);
  sub_10023CB0((char *)this, 77);
  return sub_102375F0(&Src);
}
