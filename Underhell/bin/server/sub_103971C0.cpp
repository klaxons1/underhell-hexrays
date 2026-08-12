int __thiscall sub_103971C0(_DWORD *this, _DWORD *a2)
{
  int v4; // edi
  float *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st4
  double v11; // st7
  double v12; // st4
  double v13; // st5
  const char *v14; // [esp-8h] [ebp-14h]
  const char *v15; // [esp-8h] [ebp-14h]
  int v16; // [esp+8h] [ebp-4h]
  float v17; // [esp+14h] [ebp+8h]

  if ( !a2 )
    return 4;
  v4 = sub_100C9AD0(this, (int)a2);
  v16 = v4;
  if ( v4 != 3 )
  {
    if ( sub_103945D0((int)a2) )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) )
      {
        if ( !*(_DWORD *)(dword_10698344 + 48) )
        {
          v5 = (float *)sub_10019640(this);
          if ( sub_10395EB0(v5, (int)a2) )
            return 4;
        }
        return 2;
      }
    }
    else if ( v4 == 1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2) )
      {
        if ( sub_100CF460(a2) )
        {
          v14 = (const char *)dword_106EA238;
          v6 = (_DWORD *)sub_100CF460(a2);
          if ( sub_1001F3E0(v6, v14) )
          {
            if ( !sub_100CF460(this)
              || (v15 = (const char *)dword_106EA238, v7 = (_DWORD *)sub_100CF460(this), !sub_1001F3E0(v7, v15)) )
            {
              v8 = (float *)sub_10019640(this);
              v9 = (float *)sub_10019640(a2);
              v10 = *v9 - *v8;
              v11 = v10 * v10;
              v12 = v9[1] - v8[1];
              v13 = v9[2] - v8[2];
              if ( v13 * v13 + v12 * v12 + v11 < 90000.0 )
              {
                v17 = *((float *)sub_10019640(a2) + 2);
                if ( fabs(v17 - *((float *)sub_10019640(this) + 2)) < 100.0 )
                  return 2;
              }
              return v16;
            }
          }
        }
      }
    }
  }
  return v4;
}
