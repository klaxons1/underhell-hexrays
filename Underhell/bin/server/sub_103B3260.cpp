int __thiscall sub_103B3260(_DWORD *this, int a2, int a3)
{
  double v5; // st7
  int v6; // eax
  float *v7; // ebx
  float *v8; // esi
  float *v9; // eax
  float *v10; // eax
  float v11; // ecx
  int v12; // edx
  float v13; // eax
  _DWORD *v14; // eax
  float *v15; // eax
  float v16[3]; // [esp+4h] [ebp-30h] BYREF
  float v17[3]; // [esp+10h] [ebp-24h] BYREF
  float v18[3]; // [esp+1Ch] [ebp-18h] BYREF
  _DWORD v19[2]; // [esp+28h] [ebp-Ch] BYREF
  float v20; // [esp+30h] [ebp-4h]

  if ( *((_BYTE *)this + 3848) )
    return 0;
  if ( *((float *)this + 914) > (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  v5 = *((float *)this + 967);
  if ( v5 < 245.0 )
    return 0;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v7 = (float *)v6;
  if ( !v6 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) && (*((_BYTE *)this + 250) & 1) == 0 )
    return 0;
  if ( !sub_10023D10(this, 10) )
    return 0;
  sub_103B04D0(this, v7);
  if ( v5 > 260.0 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, _DWORD, float *, _DWORD))(*this + 528))(this, 0, v18, 0);
  v8 = (float *)sub_10019640(this);
  v9 = (float *)sub_10019640(v7);
  if ( (v9[2] - v8[2]) * v18[2] + (v9[1] - v8[1]) * v18[1] + (*v9 - *v8) * v18[0] > 72.0 )
    return 0;
  if ( sub_100BE820((int)this, dword_106EAD9C) < 345.0 )
    return 0;
  v10 = (float *)sub_10019640(this);
  v11 = *v10;
  v17[0] = 16.0;
  v12 = *((_DWORD *)v10 + 1);
  v17[1] = 16.0;
  v13 = v10[2];
  v17[2] = 16.0;
  *(float *)v19 = v11;
  v16[0] = -16.0;
  v19[1] = v12;
  v16[1] = -16.0;
  v16[2] = -16.0;
  v20 = v13;
  sub_103B1020((int)v19, (int)this, v16, v17);
  v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v15 = (float *)sub_10019640(v14);
  if ( fabs(v20 - v15[2]) <= 64.0 )
    return 23;
  else
    return 0;
}
