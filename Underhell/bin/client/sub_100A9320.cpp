int __thiscall sub_100A9320(_DWORD *this)
{
  int v2; // ecx
  double v3; // st7
  char v4; // bl
  int v5; // edi
  int v6; // edi
  double v7; // st7
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  int v11; // ecx
  int result; // eax
  float v13; // [esp+0h] [ebp-10h]

  if ( sub_100F7AF0(this[1]) )
  {
    v2 = this[1];
    if ( *(int *)(v2 + 136) > 0 && *(float *)(v2 + 3548) >= 350.0 )
    {
      v3 = 0.5;
      v4 = 1;
      if ( !*(_BYTE *)(v2 + 320) )
      {
        sub_100F7AF0(v2);
        if ( sub_1000B480() )
          *(float *)(this[1] + 3548) = *(float *)(this[1] + 3548) - 200.0;
        v5 = sub_100F7AF0(this[1]);
        sub_10038150(v5);
        if ( *(float *)(v5 + 252) < 0.0 )
        {
          v6 = sub_100F7AF0(this[1]);
          sub_10038150(v6);
          *(float *)(this[1] + 3548) = *(float *)(v6 + 252) + *(float *)(this[1] + 3548);
          v7 = *(float *)(this[1] + 3548);
          v8 = v7 > 0.1;
          v9 = 0.1 == v7;
          v10 = 0.1;
          if ( v8 || v9 )
            v10 = *(float *)(this[1] + 3548);
          *(float *)(this[1] + 3548) = v10;
        }
        v11 = this[1];
        if ( *(float *)(v11 + 3548) <= 580.0 )
        {
          if ( *(float *)(v11 + 3548) <= 290.0 )
          {
            if ( *(float *)(v11 + 3548) >= 200.0 )
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
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10434620 + 32))(dword_10434620);
        }
      }
      v13 = v3;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 160))(this, LODWORD(v13));
      if ( v4 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10434620 + 36))(dword_10434620, 1);
    }
  }
  result = sub_100F7AF0(this[1]);
  if ( result )
  {
    result = this[1];
    *(float *)(result + 3548) = 0.0;
  }
  return result;
}
