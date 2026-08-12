char __thiscall sub_1032D740(float *this, int a2, int a3)
{
  double v5; // st7
  int (__thiscall *v6)(float *); // eax
  int v7; // eax
  float *v8; // edi
  float *v9; // eax
  long double v10; // st7
  int v11; // ebx
  float *v12; // edi
  float *v13; // eax
  double v14; // st7
  float v15; // [esp+0h] [ebp-20h]
  float v16; // [esp+0h] [ebp-20h]
  float v17; // [esp+4h] [ebp-1Ch]
  float v18; // [esp+4h] [ebp-1Ch]
  float v19[3]; // [esp+10h] [ebp-10h] BYREF
  float v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+28h] [ebp+8h]
  float v22; // [esp+2Ch] [ebp+Ch]

  if ( !sub_100BE950((int)this, *((_DWORD *)this + 227), *((_DWORD *)this + 547)) )
    return sub_101782E0(a2, a3);
  v5 = sub_10265030((float *)(a2 + 12));
  *(float *)&v21 = v5;
  v6 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
  v20 = (double)(unsigned __int16)(int)(v5 * 182.04445) * 0.0054931641;
  if ( v6(this)
    && (v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
        v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7),
        v9 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this),
        v10 = fabs(v9[1] - v8[1]) + fabs(*v9 - *v8),
        v22 = v10,
        v10 < 256.0) )
  {
    v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v12 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
    v19[0] = *v13 - *v12;
    v19[1] = v13[1] - v12[1];
    v19[2] = v13[2] - v12[2];
    v14 = sub_10265030(v19);
    if ( v22 >= 128.0 )
    {
      v15 = v14;
      sub_10424C10(v15, *(float *)&v21);
      v14 = v14 * (2.0 - v22 * 0.0078125) + *(float *)&v21;
    }
  }
  else
  {
    v14 = v20;
  }
  v16 = v14;
  sub_10078210(*((float **)this + 651), v16, -1.0);
  v17 = sub_100BE070((int)this, *((_DWORD *)this + 227)) + this[183];
  sub_10424C10(*(float *)&v21, v17);
  v18 = sub_100BE820((int)this, *((_DWORD *)this + 547)) + *(float *)&v21;
  sub_10019C10(this, *((_DWORD *)this + 547), v18);
  return 1;
}
