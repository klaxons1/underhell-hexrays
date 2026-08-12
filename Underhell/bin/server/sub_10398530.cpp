void __thiscall sub_10398530(float *this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  int (__thiscall *v5)(float *, int *); // edx
  int v6; // eax
  double v7; // st6
  double v8; // st7
  int v9; // ecx
  int v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // rt1
  int v14; // eax
  double v15; // st7
  double v16; // st6
  double v17; // rtt
  int v18; // eax
  double v19; // st7
  double v20; // st6
  double v21; // rt1
  int v22; // eax
  double v23; // st6
  double v24; // st5
  double v25; // st7
  int v26; // eax
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st4
  double v31; // st3
  float v32; // [esp+20h] [ebp-2Ch]
  float v33; // [esp+20h] [ebp-2Ch]
  int v34; // [esp+28h] [ebp-24h] BYREF
  float v35; // [esp+2Ch] [ebp-20h]
  float v36; // [esp+30h] [ebp-1Ch]
  float v37; // [esp+34h] [ebp-18h] BYREF
  float v38; // [esp+38h] [ebp-14h]
  float v39; // [esp+3Ch] [ebp-10h]
  int v40; // [esp+40h] [ebp-Ch] BYREF
  float v41; // [esp+44h] [ebp-8h]
  float v42; // [esp+48h] [ebp-4h]

  if ( this[1398] >= 0.0 )
  {
    if ( (sub_10023D10(this, 53) || sub_10023D10(this, 56))
      && this[1401] <= (double)*(float *)(dword_106B31C8 + 12)
      && this[1398] < 0.94999999 )
    {
      sub_103957D0(this, 0.94999999);
    }
    if ( (sub_10023D10(this, 50) || sub_10023D10(this, 10))
      && this[1401] <= (double)*(float *)(dword_106B31C8 + 12)
      && this[1398] < 1.0 )
    {
      sub_103957D0(this, 1.0);
    }
    if ( this[1398] > 0.0 && ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 2408))(this) > 0.0 )
    {
      v2 = 1.0 / ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 2408))(this) * 0.1 * this[1399];
      if ( this[1401] <= (double)*(float *)(dword_106B31C8 + 12) )
      {
        v3 = this[1398] - v2;
        if ( v3 <= 0.0 )
        {
          sub_103957D0(this, 0.0);
        }
        else
        {
          v32 = v3;
          sub_103957D0(this, v32);
        }
      }
    }
  }
  if ( *(_DWORD *)(dword_106EA27C + 48) && *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v4 = sub_1025FB50(1);
    (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v4 + 528))(v4, 0, &v37, 0);
    v5 = *(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 504);
    if ( this[1398] >= 0.0 )
    {
      v10 = v5(this, &v34);
      v11 = *(float *)v10;
      v12 = *(float *)(v10 + 4);
      v13 = *(float *)(v10 + 8) + 12.0;
      v40 = *(int *)v10;
      v41 = v12;
      v42 = v13;
      *(float *)&v34 = v11 + v37 * 4.0;
      v35 = v12 + v38 * 4.0;
      v36 = v13 + 4.0 * v39;
      sub_1011BC50((float *)&v40, (float *)&v34, 255, 255, 255, 0, 0.1);
      v14 = (*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 504))(this, &v34);
      v15 = *(float *)v14;
      v16 = *(float *)(v14 + 4);
      v17 = *(float *)(v14 + 8) + 12.0 + 1.2;
      v40 = *(int *)v14;
      v41 = v16;
      v42 = v17;
      *(float *)&v34 = v15 + v37 * 4.0;
      v35 = v16 + v38 * 4.0;
      v36 = v17 + 4.0 * v39;
      sub_1011BC50((float *)&v40, (float *)&v34, 0, 255, 0, 0, 0.1);
      v18 = (*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 504))(this, &v34);
      v19 = *(float *)v18;
      v20 = *(float *)(v18 + 4);
      v21 = *(float *)(v18 + 8) + 12.0 + 11.4;
      v40 = *(int *)v18;
      v41 = v20;
      v42 = v21;
      *(float *)&v34 = v19 + v37 * 4.0;
      v35 = v20 + v38 * 4.0;
      v36 = v21 + 4.0 * v39;
      sub_1011BC50((float *)&v40, (float *)&v34, 255, 255, 0, 0, 0.1);
      v22 = (*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 504))(this, &v34);
      v23 = *(float *)(v22 + 4);
      v24 = *(float *)v22;
      v25 = *(float *)(v22 + 8) + 12.0 + 12.0;
      v40 = *(int *)v22;
      v41 = v23;
      v42 = v25;
      *(float *)&v34 = v24 + v37 * 4.0;
      v35 = v23 + v38 * 4.0;
      v36 = v25 + 4.0 * v39;
      sub_1011BC50((float *)&v40, (float *)&v34, 255, 0, 0, 0, 0.1);
      v26 = (*(int (__thiscall **)(float *, int *))(*(_DWORD *)this + 504))(this, &v34);
      v27 = *(float *)v26;
      v28 = *(float *)(v26 + 4);
      v29 = *(float *)(v26 + 8);
      v40 = *(int *)v26;
      v41 = v28;
      v30 = v29 + 12.0;
      v42 = v30;
      v31 = this[1398];
      *(float *)&v34 = v27;
      v35 = v28;
      v36 = 12.0 * v31 + v30;
      sub_1011BC50((float *)&v40, (float *)&v34, 255, 255, 0, 0, 0.1);
    }
    else
    {
      v6 = v5(this, &v34);
      v7 = *(float *)(v6 + 4);
      v8 = *(float *)(v6 + 8) + 12.0;
      v40 = *(int *)v6;
      v41 = v7;
      v42 = v8;
      if ( sub_103942C0((int)this) == -1 )
      {
        sub_1011CF30((float *)&v40, (int)"Stealth", 1, 0.1);
      }
      else
      {
        v33 = 0.1;
        if ( sub_103942C0(v9) == -2 )
          sub_1011CF30((float *)&v40, (int)"Panic", 1, v33);
        else
          sub_1011CF30((float *)&v40, (int)"Unspecified", 1, v33);
      }
    }
  }
}
