void __thiscall sub_1013E860(void *this)
{
  int v1; // eax
  int v2; // ecx
  int v3; // ebx
  unsigned int v4; // eax
  const char *v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  float v11; // edi
  double v12; // st7
  double v13; // st6
  float *v14; // esi
  long double v15; // rt0
  long double v16; // rt1
  long double v17; // st6
  long double v18; // st7
  long double v19; // st5
  long double v20; // st4
  double v21; // st3
  double v22; // st2
  long double v23; // st2
  long double v26; // st5
  long double v29; // st5
  double v30; // st5
  double v31; // st4
  double v32; // st4
  long double v33; // rt2
  double v34; // st4
  long double v35; // rtt
  long double v36; // st4
  long double v37; // st5
  long double v38; // st7
  long double v39; // st5
  long double v40; // st4
  long double v41; // rt0
  long double v42; // st4
  long double v43; // rt1
  long double v44; // rtt
  char *String2[3]; // [esp+0h] [ebp-14h]
  float v46; // [esp+Ch] [ebp-8h]
  int v47; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD *)(dword_1043B094 + 48);
  v47 = (int)this;
  if ( dword_103E7DC4 != v1 )
  {
    v2 = dword_1041315C;
    dword_103E7DC4 = v1;
    if ( !dword_1041315C )
    {
      dword_103E7DC4 = -1;
      goto LABEL_13;
    }
    if ( byte_103E7DC0 == 1 )
    {
      *(float *)&v3 = 0.0;
      byte_103E7DC0 = 0;
      String2[0] = "dod";
      String2[1] = "cstrike";
      String2[2] = "lostcoast";
      v46 = 0.0;
      while ( 1 )
      {
        v4 = strlen((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 140))(v2));
        v5 = String2[v3];
        if ( v4 >= strlen(v5) )
        {
          v6 = strlen((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 140))(dword_1041315C));
          v7 = strlen(v5);
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 140))(dword_1041315C);
          if ( !_stricmp((const char *)(v6 - v7 + v8), v5) )
          {
            sub_10229140(&unk_1043B090, 0);
            dword_103E7DC4 = *(_DWORD *)(dword_1043B094 + 48);
            break;
          }
          *(float *)&v3 = v46;
        }
        ++v3;
        v46 = *(float *)&v3;
        if ( v3 >= 3 )
          break;
        v2 = dword_1041315C;
      }
    }
LABEL_13:
    v9 = 31;
    if ( *(_DWORD *)(dword_1043B094 + 48) == 1 )
      v9 = 17;
    v10 = v47;
    v11 = 0.0;
    *(_DWORD *)(v47 + 1364) = 0;
    v46 = 0.0;
    v12 = 0.0;
    v13 = 0.01;
    v47 = v9 - 1;
    v14 = (float *)(v10 + 20);
    while ( 1 )
    {
      v16 = v13;
      v17 = v12;
      v18 = v16;
      *(v14 - 5) = 0.0;
      v14[2] = v17;
      v14[4] = 1.0;
      v14[5] = 1.0;
      v14[3] = v17;
      if ( LODWORD(v11) == v47 )
      {
        *v14 = v17;
        v29 = 100000.0;
      }
      else if ( *(_DWORD *)(dword_1043B094 + 48) )
      {
        v30 = (double)v47;
        v31 = (double)SLODWORD(v46);
        LODWORD(v46) = LODWORD(v11) + 1;
        v32 = v31 / v30;
        *v14 = v32;
        v33 = v32;
        v34 = (double)SLODWORD(v46) / v30;
        v46 = v34;
        v14[1] = v34;
        v35 = v34;
        v36 = v33;
        v37 = v35;
        if ( v33 <= v17 )
        {
          v41 = v36;
          v42 = v18;
          v38 = v41;
          v43 = v42;
          v40 = v37;
          v39 = v43;
        }
        else
        {
          v38 = pow(v36, 1.5);
          v17 = 0.0;
          v39 = 0.01;
          v40 = v46;
        }
        *v14 = v38;
        v44 = v39;
        v29 = v40;
        v18 = v44;
        if ( v40 > v17 )
        {
          v17 = 0.0;
          v29 = pow(v40, 1.5);
          v18 = 0.01;
        }
      }
      else
      {
        v19 = __FYL2X__(v18, 0.6931471805599453094);
        v20 = __FYL2X__(1.01, 0.6931471805599453094) - v19;
        v21 = (double)v47;
        v22 = (double)SLODWORD(v46);
        LODWORD(v46) = LODWORD(v11) + 1;
        v23 = (v22 * v20 / v21 + v19) * 1.442695040888963407;
        _ST1 = v23;
        __asm { frndint }
        *v14 = __FSCALE__(__F2XM1__(v23 - _ST1) + 1.0, _ST1) - v18;
        v26 = (v19 + v20 * (double)SLODWORD(v46) / v21) * 1.442695040888963407;
        _ST4 = v26;
        __asm { frndint }
        v29 = __FSCALE__(__F2XM1__(v26 - _ST4) + 1.0, _ST4) - v18;
      }
      ++LODWORD(v11);
      v14[1] = v29;
      v14 += 11;
      v46 = v11;
      if ( SLODWORD(v11) >= v9 )
        break;
      v15 = v17;
      v13 = v18;
      v12 = v15;
    }
  }
}
