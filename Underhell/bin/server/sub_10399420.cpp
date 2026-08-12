void __thiscall sub_10399420(char *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  unsigned __int8 *v13; // eax
  unsigned int v14; // ecx
  int *v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  int *v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  _DWORD *v26; // ecx
  double v27; // st7
  unsigned int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  float v34; // [esp+18h] [ebp-Ch] BYREF
  float v35; // [esp+1Ch] [ebp-8h]
  float v36; // [esp+20h] [ebp-4h]

  v2 = a2;
  v3 = *a2;
  if ( *a2 == dword_106EA258 )
  {
    v5 = sub_101811E0("prop_physics", -1);
    if ( v5 )
      *((_DWORD *)this + 1409) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    else
      *((_DWORD *)this + 1409) = -1;
    v6 = *((_DWORD *)this + 1409);
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 104))(v9, "models/props_junk/flare.mdl");
          v10 = *((_DWORD *)this + 1409);
          if ( v10 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] != v10 >> 12 )
            v11 = 0;
          else
            v11 = off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1];
          (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)v11 + 140))(v11, this, -1);
          v12 = *((_DWORD *)this + 1409);
          if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = (unsigned __int8 *)off_1061BE18[4 * (v12 & 0xFFF) + 1];
          sub_100E2700(v13, "SetParentAttachment", (char *)v2[1], 0);
        }
      }
    }
  }
  else if ( v3 == dword_106EA254 )
  {
    v14 = *((_DWORD *)this + 1409);
    if ( v14 != -1 )
    {
      v15 = &off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1];
      v16 = v14 >> 12;
      if ( off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] == v16 )
      {
        if ( *v15 )
        {
          if ( off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] == v16 )
            v17 = *v15;
          else
            v17 = 0;
          sub_1020F790(v17, 300.0);
        }
      }
    }
  }
  else if ( v3 == dword_106EA250 )
  {
    v18 = *((_DWORD *)this + 1409);
    if ( v18 == -1
      || (v19 = &off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1],
          off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] != v18 >> 12) )
    {
      v20 = 0;
    }
    else
    {
      v20 = *v19;
    }
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v20 + 140))(v20, 0, -1);
    v21 = *((_DWORD *)this + 1409);
    if ( v21 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1];
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 96))(v22);
    v23 = *((_DWORD *)this + 1409);
    if ( v23 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] != v23 >> 12 )
      v24 = 0;
    else
      v24 = off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1];
    *(_DWORD *)(v24 + 1272) &= ~0x800u;
    v25 = *((_DWORD *)this + 1409);
    if ( v25 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 2] != v25 >> 12 )
      v26 = 0;
    else
      v26 = (_DWORD *)off_1061BE18[4 * (*((_DWORD *)this + 1409) & 0xFFF) + 1];
    sub_101DAAC0(this, v26);
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_10422220(this + 704, &v34);
    off_10689714();
    v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            64.0,
            72.0);
    v28 = *((_DWORD *)this + 1409);
    v34 = v34 * v27;
    v35 = v35 * v27;
    v36 = v27 * v36 + 64.0;
    if ( v28 == -1 || off_1061BE18[4 * (v28 & 0xFFF) + 2] != v28 >> 12 )
      v29 = 0;
    else
      v29 = off_1061BE18[4 * (v28 & 0xFFF) + 1];
    (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v29 + 424) + 236))(*(_DWORD *)(v29 + 424), &v34);
    *((_DWORD *)this + 1409) = -1;
  }
  else if ( v3 == 3015 )
  {
    if ( sub_100CF460(this) )
    {
      v31 = sub_100CF460(this);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v31 + 1132))(v31, 8, 0.0);
      v32 = sub_100CF460(this);
      a2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 1216))(v32);
      v33 = sub_100CF460(this);
      sub_10031800((_DWORD *)(v33 + 1200), &a2);
      sub_10023E00(this, 3);
      sub_10023E00(this, 4);
      sub_10023E00(this, 5);
    }
  }
  else
  {
    v30 = *((_DWORD *)this + 906);
    if ( v30 )
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v30 + 248))(v30, a2);
    else
      sub_1003AD70((int)this, (int)a2);
  }
}
