void __thiscall sub_103444C0(float *this, _DWORD *a2)
{
  int v3; // eax
  bool v4; // zf
  double (__cdecl *v5)(_DWORD, _DWORD); // eax
  double v6; // st7
  int v7; // eax
  int (__thiscall *v8)(float *); // eax
  int v9; // eax
  float *v10; // eax
  double v11; // st7
  int (__thiscall *v12)(float *); // eax
  int v13; // eax
  float v14; // [esp+8h] [ebp-30h]
  _BYTE v15[12]; // [esp+14h] [ebp-24h] BYREF
  float v16[3]; // [esp+20h] [ebp-18h] BYREF
  float v17; // [esp+2Ch] [ebp-Ch] BYREF
  float v18; // [esp+30h] [ebp-8h]
  float v19; // [esp+34h] [ebp-4h]
  float v20; // [esp+40h] [ebp+8h]

  if ( *a2 == 74 )
  {
    v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.25,
            0.5);
    v12 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
    this[906] = v11 + *(float *)(dword_106B31C8 + 12);
    v13 = v12(this);
    if ( v13 )
      this[916] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
    else
      this[916] = NAN;
  }
  else if ( *a2 == 150 )
  {
    v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v4 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) == 0;
    v5 = *(double (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    if ( v4 )
    {
      v6 = v5(0.0, 1.0) + 1.0;
      this[910] = v6;
      v14 = v6;
      sub_10022750(this, v14, 0.0);
    }
    else
    {
      v5(0.0, 0.30000001);
      if ( *(float *)(dword_106B31C8 + 12) - this[921] >= 1.0 )
      {
        v20 = 0.0 + 1.0;
        sub_10022750(this, v20, 0.0);
        this[910] = v20;
      }
      else
      {
        sub_10022750(this, 0.40000001, 0.0);
        this[910] = 0.40000001;
      }
    }
    v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    sub_10422220(v7 + 728, &v17);
    v8 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 368);
    v17 = v17 * 300.0;
    v18 = v18 * 300.0;
    v19 = 300.0 * v19;
    v9 = v8(this);
    v10 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 504))(v9, v15);
    v17 = *v10 + v17;
    v18 = v10[1] + v18;
    v19 = v10[2] + v19;
    v16[0] = 16.0;
    v16[1] = 16.0;
    v16[2] = 16.0;
    sub_10344100((int)this, &v17, v16);
  }
  else if ( *a2 != 152 )
  {
    sub_10046510((int)this, (int)a2);
  }
}
