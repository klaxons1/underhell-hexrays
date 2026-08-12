void __thiscall sub_101E2E70(float *this, float a2, float a3, float a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // rt0
  double v9; // st6
  double v10; // st7
  int v11; // ebp
  int v12; // edi
  double (__thiscall **v13)(_DWORD); // esi
  float *v14; // esi
  double v15; // st7
  float v16; // [esp+8h] [ebp+4h]
  float v17; // [esp+Ch] [ebp+8h]
  double (__thiscall *v18)(_DWORD); // [esp+10h] [ebp+Ch]

  if ( *((_BYTE *)this + 4) == 6 )
  {
    v5 = a2;
    v6 = a3;
    if ( a2 != this[18] || this[19] != v6 )
    {
      v7 = v6 - v5;
      v16 = 0.0;
      if ( this[18] == v5 )
      {
        v10 = v7;
      }
      else
      {
        v8 = v7;
        v9 = v5;
        v10 = v8;
        v16 = -(v9 - this[18]);
      }
      if ( LOBYTE(a4) )
      {
        v11 = *((_DWORD *)this + 60);
        if ( v11 > 0 )
        {
          v12 = 0;
          v17 = 1.0 / v10;
          do
          {
            v13 = (double (__thiscall **)(_DWORD))*((_DWORD *)this + 57);
            v18 = v13[v12 + 4];
            v14 = (float *)&v13[v12];
            v15 = (((double (__thiscall *)(float *))**(_DWORD **)this)(this) * *(float *)&v18 + v16) * v17;
            if ( v15 <= 1.0 )
            {
              if ( v15 < 0.0 )
                v15 = 0.0;
            }
            else
            {
              v15 = 1.0;
            }
            v12 += 7;
            v14[4] = v15;
            --v11;
          }
          while ( v11 );
        }
      }
    }
  }
}
