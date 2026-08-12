char __thiscall sub_100F1F30(int this, int a2, int a3, Concurrency::details::SchedulingRing *a4)
{
  int v6; // ecx
  char v7; // bl
  char result; // al
  double v9; // st7
  char v10; // bl
  int v11; // eax
  const char *v12; // eax
  double v13; // st7
  double v14; // st6
  _DWORD *v15; // eax
  double v16; // st7
  double v17; // st7
  int v18; // eax
  float v19; // [esp+0h] [ebp-14h]
  float v20; // [esp+0h] [ebp-14h]
  int v21; // [esp+0h] [ebp-14h]
  float v22; // [esp+0h] [ebp-14h]
  float v23; // [esp+10h] [ebp-4h]
  float v24; // [esp+10h] [ebp-4h]
  int v25; // [esp+1Ch] [ebp+8h]
  float v26; // [esp+24h] [ebp+10h]

  if ( a2 )
  {
    if ( a4 )
    {
      v6 = a3;
      if ( a3 )
      {
        v7 = 0;
        if ( *(_DWORD *)(a2 + 16) == -2 )
        {
          result = sub_100F1460((volatile signed __int32 *)this, a2, a3, a4, *(void **)(a2 + 8));
          if ( !result )
            return result;
          v6 = a3;
          v7 = 1;
        }
        if ( *(int *)(a2 + 16) < 0 )
          return 1;
        v9 = sub_1041CA40(v6);
        v19 = v9;
        sub_1041A260((int)a4, v19);
        v23 = v9;
        if ( v7 )
          v23 = 0.0;
        v25 = sub_100D7680(this);
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 296))(this);
        if ( !v25 || sub_100697A0((_DWORD *)v25, 62, 1) || (v11 = *(_DWORD *)(v25 + 2372), v11 == 76) || v11 == 1 )
        {
          if ( !v10 )
          {
            v13 = *(float *)(a2 + 32) + 0.2;
            v14 = 1.0;
            if ( v13 < 1.0 )
            {
LABEL_23:
              *(float *)(a2 + 32) = v13;
              v20 = (*(float *)(a2 + 32) * 3.0 * *(float *)(a2 + 32)
                   - (*(float *)(a2 + 32) + *(float *)(a2 + 32)) * *(float *)(a2 + 32) * *(float *)(a2 + 32))
                  * v23;
              sub_100C6460((_DWORD *)this, *(_DWORD *)(a2 + 16), v20);
              v21 = *(_DWORD *)(a2 + 24);
              v15 = sub_10001430((_DWORD *)this);
              if ( (sub_100BA270((int)v15, v21) & 1) == 0 )
              {
                v24 = sub_1041CA40(a3);
                v16 = v24 - sub_10418510(a4);
                v26 = v16;
                sub_10019B30((_DWORD *)this, *(_DWORD *)(a2 + 24));
                v17 = v26 / v16;
                if ( v17 <= 1.0 )
                {
                  if ( v17 < 0.0 )
                    v17 = 0.0;
                }
                else
                {
                  v17 = 1.0;
                }
                v22 = v17;
                sub_100C6260((_DWORD *)this, *(_DWORD *)(a2 + 16), v22);
              }
              if ( v25 )
                sub_100EC8C0((float *)v25, 0.2);
              if ( *(_BYTE *)(this + 1612) )
              {
                v18 = sub_100ED810((_DWORD *)this, a3);
                sub_100C60B0((_DWORD *)this, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20) + v18);
              }
              return 1;
            }
LABEL_22:
            v13 = v14;
            goto LABEL_23;
          }
        }
        else if ( 1.0 == *(float *)(a2 + 32) )
        {
          v12 = *(const char **)(this + 260);
          if ( !v12 )
            v12 = String;
          Warning("%s playing CChoreoEvent::SEQUENCE but AI has forced them to do something different\n", v12);
        }
        v13 = *(float *)(a2 + 32) - 0.2;
        v14 = 0.0;
        if ( v13 > 0.0 )
          goto LABEL_23;
        goto LABEL_22;
      }
    }
  }
  return 0;
}
