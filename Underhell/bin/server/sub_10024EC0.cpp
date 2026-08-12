int __thiscall sub_10024EC0(float *this, float a2)
{
  int v3; // eax
  float v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  float v13; // edi
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int (__thiscall *v25)(float *, char *); // edx
  float *v26; // eax
  double v27; // st6
  double v28; // st7
  double i; // st7
  double v30; // st6
  double v31; // st5
  double v32; // st4
  double v33; // st3
  double v34; // st6
  double v35; // rtt
  char v36[12]; // [esp+18h] [ebp-24h] BYREF
  float v37[3]; // [esp+24h] [ebp-18h] BYREF
  float v38; // [esp+30h] [ebp-Ch]
  float v39; // [esp+34h] [ebp-8h]
  float v40; // [esp+38h] [ebp-4h]

  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
    && (v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
        v4 = *this,
        v5 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v3 + 504))(v3, v37),
        (*(unsigned __int8 (__thiscall **)(float *, int))(LODWORD(v4) + 1820))(this, v5)) )
  {
    v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v7 = *(_DWORD *)this;
    v8 = (*(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v6 + 504))(v6, v37, LODWORD(a2));
    (*(void (__thiscall **)(float *, int))(v7 + 1812))(this, v8);
    v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v10 = *(_DWORD *)this;
    v11 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v9 + 504))(v9, v37);
    return (*(int (__thiscall **)(float *, int))(v10 + 836))(this, v11);
  }
  else if ( (unsigned __int8)sub_1007E040(*((_DWORD *)this + 647))
         && (v13 = *this,
             v14 = sub_1007DFE0(*((_DWORD *)this + 647)),
             (*(unsigned __int8 (__thiscall **)(float *, int))(LODWORD(v13) + 1820))(this, v14)) )
  {
    v15 = *(_DWORD *)this;
    v16 = sub_1007DFE0(*((_DWORD *)this + 647));
    (*(void (__thiscall **)(float *, int, _DWORD))(v15 + 1812))(this, v16, LODWORD(a2));
    v17 = *(_DWORD *)this;
    v18 = sub_1007DFE0(*((_DWORD *)this + 647));
    return (*(int (__thiscall **)(float *, int))(v17 + 836))(this, v18);
  }
  else
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this);
    v19 = sub_1007DB30(53);
    if ( (v19 != -1
       && (v20 = v19 - 1000000000, v20 != -1)
       && ((1 << (v20 & 0x1F)) & LODWORD(this[(v20 >> 5) + 548])) != 0
       || ((*(void (__thiscall **)(float *))(*(_DWORD *)this + 2160))(this), v21 = sub_1007DB30(50), v21 != -1)
       && (v22 = v21 - 1000000000, v22 != -1)
       && ((1 << (v22 & 0x1F)) & LODWORD(this[(v22 >> 5) + 548])) != 0)
      && (v23 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1460))(this, 1048351)) != 0
      && (*(_BYTE *)(v23 + 16) & 9) != 0
      && (v24 = v23 + 36, (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 1820))(this, v23 + 36)) )
    {
      (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 1812))(this, v24, LODWORD(a2));
      return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 836))(this, v24);
    }
    else
    {
      if ( *(float *)(dword_106B31C8 + 12) < (double)this[658]
        && !(*(unsigned __int8 (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 1820))(this, (_DWORD *)this + 660) )
      {
        this[658] = 0.0;
      }
      if ( *(float *)(dword_106B31C8 + 12) > (double)this[658] )
      {
        (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 904))(this, v37);
        v25 = *(int (__thiscall **)(float *, char *))(*(_DWORD *)this + 504);
        v38 = v37[0] * 500.0;
        v39 = v37[1] * 500.0;
        v40 = 500.0 * v37[2];
        v26 = (float *)v25(this, v36);
        v27 = v26[1] + v39;
        v28 = v26[2] + v40;
        this[660] = *v26 + v38;
        this[661] = v27;
        this[662] = v28;
        this[658] = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
      (*(void (__thiscall **)(float *, _DWORD *, _DWORD))(*(_DWORD *)this + 1812))(
        this,
        (_DWORD *)this + 660,
        LODWORD(a2));
      for ( i = a2; i > 0.0; i = i - 0.1 )
      {
        v30 = this[659];
        v31 = this[660] * v30;
        v32 = this[661] * v30;
        v33 = 1.0 - v30;
        v34 = v30 * this[662] + (1.0 - v30) * this[665];
        v35 = v32 + this[664] * v33;
        this[663] = v31 + this[663] * v33;
        this[664] = v35;
        this[665] = v34;
      }
      return (*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 836))(this, (_DWORD *)this + 663);
    }
  }
}
