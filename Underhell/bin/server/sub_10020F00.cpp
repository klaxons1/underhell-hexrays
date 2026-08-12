int __thiscall sub_10020F00(char *this)
{
  int v1; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // esi
  _DWORD *v6; // eax
  int v7; // ebx
  float *v8; // esi
  const char *v9; // eax
  const char *v10; // ecx
  float *v11; // eax
  float *v12; // ecx
  float *v14; // [esp+Ch] [ebp-4h] BYREF

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v3 && *v3 )
    v4 = *((_DWORD *)this + 275);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  if ( !v4 )
  {
    v8 = (float *)(this + 2620);
    *((float *)this + 655) = flt_106F1CA8;
    *((float *)this + 656) = flt_106F1CAC;
    *((float *)this + 657) = flt_106F1CB0;
    return sub_100DC4E0(v8);
  }
  v5 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
    sub_100BD750(this);
  v6 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v6 && *v6 )
    v7 = *((_DWORD *)this + 275);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  v8 = (float *)(this + 2620);
  sub_100BA7D0(v7, this + 2620);
  if ( *((float *)this + 655) != flt_106F1CA8
    || *((float *)this + 656) != flt_106F1CAC
    || *((float *)this + 657) != flt_106F1CB0 )
  {
    return sub_100DC4E0(v8);
  }
  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 220))(this) )
  {
    v9 = *(const char **)(*(int (__thiscall **)(char *, float **))(*(_DWORD *)this + 28))(this, &v14);
    if ( !v9 )
      v9 = String;
    v10 = (const char *)*((_DWORD *)this + 23);
    if ( !v10 )
      v10 = String;
    DevMsg("WARNING: %s(%s) has no eye offset in .qc!\n", v10, v9);
  }
  v14 = (float *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 80) + 8))(this + 320);
  v11 = (float *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 80) + 4))(this + 320);
  v12 = v14;
  *v8 = *v14 + *v11;
  *((float *)this + 656) = v11[1] + v12[1];
  *((float *)this + 657) = v11[2] + v12[2];
  *v8 = *v8 * 0.75;
  *((float *)this + 656) = *((float *)this + 656) * 0.75;
  *((float *)this + 657) = 0.75 * *((float *)this + 657);
  return sub_100DC4E0(this + 2620);
}
