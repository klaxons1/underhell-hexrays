int __thiscall sub_1015C1E0(_DWORD *this)
{
  int v2; // ecx
  double v3; // st7
  char v4; // bl
  _DWORD *v5; // eax
  float *v6; // ecx
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // eax
  float *v10; // eax
  int v11; // ecx
  double v12; // st7
  float *v13; // ecx
  bool v14; // c0
  bool v15; // c3
  double v16; // st7
  int v17; // ecx
  int result; // eax
  int v19; // esi
  float *v20; // esi
  float v21; // [esp+0h] [ebp-14h]
  int v22; // [esp+10h] [ebp-4h] BYREF

  if ( sub_101C5260(this[1]) )
  {
    v2 = this[1];
    if ( *(int *)(v2 + 220) > 0 && *(float *)(v2 + 2292) >= 303.0 )
    {
      v3 = 0.5;
      v4 = 1;
      if ( !*(_BYTE *)(v2 + 447) )
      {
        v5 = (_DWORD *)sub_101C5260(v2);
        if ( sub_100D72C0(v5) )
        {
          v6 = (float *)(this[1] + 2292);
          v22 = 173;
          sub_1015B180(v6, &v22);
        }
        v7 = sub_101C5260(this[1]);
        v8 = v7;
        if ( (*(_DWORD *)(v7 + 252) & 0x1000) != 0 )
          sub_100DAFD0(v7);
        if ( *(float *)(v8 + 484) < 0.0 )
        {
          v9 = (_DWORD *)sub_101C5260(this[1]);
          v10 = (float *)sub_10019660(v9);
          sub_1015B1B0((float *)(this[1] + 2292), v10 + 2);
          v11 = this[1];
          v12 = *(float *)(v11 + 2292);
          v13 = (float *)(v11 + 2292);
          v14 = v12 > 0.1;
          v15 = 0.1 == v12;
          v16 = 0.1;
          if ( v14 || v15 )
            v16 = *v13;
          *(float *)&v22 = v16;
          sub_1015B1E0(v13, (float *)&v22);
        }
        v17 = this[1];
        if ( *(float *)(v17 + 2292) <= 526.5 )
        {
          if ( *(float *)(v17 + 2292) <= 263.25 )
          {
            if ( *(float *)(v17 + 2292) >= 173.0 )
              v3 = (float)0.5;
            else
              v3 = 0.0;
          }
          else
          {
            v3 = 0.85000002;
          }
        }
        else
        {
          v3 = 1.0;
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B6E60 + 32))(dword_106B6E60);
        }
      }
      v21 = v3;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 160))(this, LODWORD(v21));
      if ( v4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B6E60 + 36))(dword_106B6E60, 1);
    }
  }
  result = sub_101C5260(this[1]);
  if ( result )
  {
    v19 = this[1];
    result = *(_DWORD *)(v19 + 2292);
    v20 = (float *)(v19 + 2292);
    if ( result != COERCE_INT(0.0) )
    {
      result = (**((int (__thiscall ***)(int, float *))v20 - 25))((int)(v20 - 25), v20);
      *v20 = 0.0;
    }
  }
  return result;
}
