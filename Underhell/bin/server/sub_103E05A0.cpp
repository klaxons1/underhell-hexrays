int __thiscall sub_103E05A0(unsigned __int8 *this, int *a2, float a3)
{
  int v4; // ebx
  int v5; // edi
  double v6; // st7
  int v7; // ebx
  int v8; // ebx
  double v9; // st7
  int result; // eax
  float v11; // [esp+44h] [ebp-24h]
  float v12; // [esp+48h] [ebp-20h]
  float v13; // [esp+48h] [ebp-20h]
  float v14; // [esp+48h] [ebp-20h]
  float v15; // [esp+48h] [ebp-20h]
  float v16; // [esp+48h] [ebp-20h]
  float v17[2]; // [esp+58h] [ebp-10h] BYREF
  float v18; // [esp+60h] [ebp-8h]
  int v19; // [esp+64h] [ebp-4h]

  v4 = this[447];
  v19 = v4;
  if ( v4 )
  {
    if ( !*((_DWORD *)this + 468) )
    {
      (*(void (__thiscall **)(unsigned __int8 *, float *, _DWORD))(*(_DWORD *)this + 540))(this, v17, 0);
      if ( fabs(v17[0]) > 400.0 || fabs(v17[1]) > 400.0 || fabs(v18) > 400.0 )
      {
        sub_1023C380(this, (int)"Airboat_impact_splash", 0.0, 0);
        if ( fabs(v18) > 200.0 )
          sub_1023C380(this, (int)"Airboat_impact_hard", 0.0, 0);
      }
    }
    v5 = (int)a2;
    if ( a3 > 0.1 )
    {
      if ( 0.0 != ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*a2 + 60))(a2, *((_DWORD *)this + 463)) )
        (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a2 + 48))(a2, *((_DWORD *)this + 463), 0.0, 1.0);
    }
    else if ( 0.0 == ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(*a2 + 60))(a2, *((_DWORD *)this + 463)) )
    {
      (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a2 + 48))(a2, *((_DWORD *)this + 463), 1.0, 2.0);
      *((float *)this + 469) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                 dword_106B31E4,
                                 1.0,
                                 3.0)
                             + *(float *)(dword_106B31C8 + 12);
    }
    else if ( *((float *)this + 469) < (double)*(float *)(dword_106B31C8 + 12) )
    {
      v7 = *a2;
      v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.0,
              3.0);
      v14 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.2,
              1.0,
              LODWORD(v13));
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v7 + 48))(a2, *((_DWORD *)this + 463), LODWORD(v14));
      v8 = *a2;
      v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.0,
              3.0);
      v16 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              90.0,
              110.0,
              LODWORD(v15));
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v8 + 44))(a2, *((_DWORD *)this + 463), LODWORD(v16));
      v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             2.0,
             4.0);
      v4 = v19;
      *((float *)this + 469) = v9 + *(float *)(dword_106B31C8 + 12);
    }
    v12 = 0.0;
    v6 = a3;
  }
  else
  {
    v5 = (int)a2;
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a2 + 48))(a2, *((_DWORD *)this + 463), 0.0, 0.0);
    v6 = 0.0;
    v12 = 0.0;
  }
  v11 = v6;
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD, float))(*(_DWORD *)v5 + 48))(
             v5,
             *((_DWORD *)this + 462),
             LODWORD(v11),
             COERCE_FLOAT(LODWORD(v12)));
  *((_DWORD *)this + 468) = v4;
  return result;
}
