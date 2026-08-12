int __usercall sub_10301570@<eax>(int a1@<ecx>, char a2@<dil>, double a3@<st0>)
{
  int result; // eax
  bool v5; // zf
  float v6; // ecx
  float v7; // edx
  int v8; // ebx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float *v13; // eax
  int (__thiscall *v14)(int); // edx
  float *v15; // eax
  double v16; // st6
  int v17; // eax
  double v18; // st7
  int *v19; // ebx
  int v20; // edi
  _DWORD *v21; // eax
  float *v22; // eax
  BOOL v23; // eax
  float v24; // [esp+1Ch] [ebp-8Ch]
  float v25; // [esp+1Ch] [ebp-8Ch]
  float v26; // [esp+1Ch] [ebp-8Ch]
  float v27; // [esp+1Ch] [ebp-8Ch]
  float v28; // [esp+1Ch] [ebp-8Ch]
  _DWORD v29[20]; // [esp+2Ch] [ebp-7Ch] BYREF
  _BYTE v30[12]; // [esp+7Ch] [ebp-2Ch] BYREF
  int v31; // [esp+88h] [ebp-20h] BYREF
  float v32; // [esp+8Ch] [ebp-1Ch]
  float v33; // [esp+90h] [ebp-18h]
  float v34; // [esp+94h] [ebp-14h] BYREF
  float v35; // [esp+98h] [ebp-10h]
  float v36; // [esp+9Ch] [ebp-Ch]
  _DWORD *v37; // [esp+A0h] [ebp-8h]
  int v38; // [esp+A4h] [ebp-4h]

  *(_BYTE *)(a1 + 4124) = 0;
  sub_10023E00((char *)a1, 77);
  if ( *(_BYTE *)(a1 + 3652) )
    return 94;
  if ( sub_10023D10((_DWORD *)a1, 67) )
    return 68;
  if ( sub_10023D10((_DWORD *)a1, 73) )
  {
    sub_10023E00((char *)a1, 73);
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 4144) )
      return 99;
    sub_100EC3F0((_DWORD *)a1, (int)sub_102FB610, *(float *)(dword_106B31C8 + 12), (int)"ZapThink");
    return 112;
  }
  if ( sub_10023D10((_DWORD *)a1, 78) )
    return 108;
  if ( (*(_DWORD *)(a1 + 248) & 0x10000) != 0 && (sub_10023D10((_DWORD *)a1, 31) || sub_10023D10((_DWORD *)a1, 27)) )
    return 104;
  if ( sub_10023D10((_DWORD *)a1, 51) && sub_1001FCB0((void *)a1, 256) )
  {
    sub_10247EC0(v29);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 1624))(a1, v29);
    sub_10023E00((char *)a1, 51);
    return 97;
  }
  if ( sub_10023D10((_DWORD *)a1, 57) )
  {
    sub_10247EC0(v29);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 1624))(a1, v29);
    return 105;
  }
  if ( sub_10023D10((_DWORD *)a1, 74) )
    return 100;
  if ( sub_10023D10((_DWORD *)a1, 79) )
  {
    sub_10023E00((char *)a1, 79);
    return 89;
  }
  if ( sub_10023D10((_DWORD *)a1, 52) && !*(_BYTE *)(a1 + 4095) )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 4068) )
    {
      sub_1023C380((_DWORD *)a1, (int)"NPC_Antlion.Distracted", 0.0, 0);
      *(float *)(a1 + 4068) = *(float *)(dword_106B31C8 + 12) + 1.0;
    }
    v5 = *(_BYTE *)(a1 + 4092) == 0;
    a3 = *(float *)(dword_106B31C8 + 12) + 4.0;
    *(float *)(a1 + 3660) = a3;
    if ( !v5 )
    {
      v6 = *(float *)(a1 + 4084);
      v7 = *(float *)(a1 + 4088);
      v31 = *(int *)(a1 + 4080);
      v32 = v6;
      v33 = v7;
      v38 = *(_DWORD *)(dword_106DE754 + 48);
      v24 = (float)v38;
      v37 = 0;
      v8 = sub_1012BFF0(&dword_1069E3E0, 0, (float *)&v31, v24);
      if ( v8 )
      {
        do
        {
          v9 = (_DWORD *)sub_100D7680(v8);
          if ( v9 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v9 + 1488))(v9, a1) )
            {
              if ( (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 1080))(a1, v9) == 1
                && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 320))(v9) )
              {
                (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)a1 + 1120))(a1, v9, 1, 99);
                if ( !v37
                  || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
                {
                  v37 = v9;
                }
              }
            }
          }
          v38 = *(_DWORD *)(dword_106DE754 + 48);
          v25 = (float)v38;
          v8 = sub_1012BFF0(&dword_1069E3E0, v8, (float *)&v31, v25);
        }
        while ( v8 );
        if ( v37 )
          sub_100285C0((_DWORD *)a1, v37, 1);
      }
      sub_10023E00((char *)a1, 52);
      return 98;
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(a1 + 3936) + 24))(a1 + 3936) )
  {
    sub_10164AB0((_DWORD *)a1, a1 + 3936);
    return sub_10092C60(a1, a3);
  }
  if ( *(_DWORD *)(a1 + 2324) != 3 )
  {
    result = sub_10300540(a1, a3);
    if ( result )
      return result;
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
      && (sub_10023D10((_DWORD *)a1, 17) || sub_10023D10((_DWORD *)a1, 18)) )
    {
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1868))(a1, 800);
      v5 = sub_100773C0(v10, 0, a2) == 0;
      v11 = *(_DWORD *)a1;
      if ( v5 )
      {
        v14 = *(int (__thiscall **)(int))(v11 + 576);
        *(float *)&v31 = flt_106B4F40 * 128.0;
        v32 = flt_106B4F44 * 128.0;
        v33 = 128.0 * flt_106B4F48;
        v15 = (float *)v14(a1);
        v16 = v15[1] + v32;
        a3 = v15[2] + v33;
        v34 = *v15 + *(float *)&v31;
        v35 = v16;
      }
      else
      {
        v12 = (*(int (__thiscall **)(int))(v11 + 1868))(a1);
        v13 = (float *)sub_10077560(v12, 800);
        v34 = *v13;
        v35 = v13[1];
        a3 = v13[2];
      }
      v17 = *(_DWORD *)a1;
      v36 = a3;
      if ( (*(unsigned __int8 (__thiscall **)(int, float *))(v17 + 872))(a1, &v34) )
      {
        *(float *)(a1 + 2864) = v34;
        result = 114;
        *(float *)(a1 + 2868) = v35;
        *(float *)(a1 + 2872) = v36;
        return result;
      }
    }
    return sub_10092C60(a1, a3);
  }
  if ( !*(_DWORD *)(dword_10698344 + 48) || (*(_DWORD *)(a1 + 248) & 0x40000) == 0 )
  {
    if ( !sub_10023D10((_DWORD *)a1, 24) )
    {
      if ( sub_10023D10((_DWORD *)a1, 75) )
        return 89;
      return sub_10092C60(a1, a3);
    }
    v18 = *(float *)(dword_106B31C8 + 12);
LABEL_78:
    v23 = *(_BYTE *)(a1 + 4112) == 1;
    *(float *)(a1 + 3676) = v18 + 1.5;
    return v23 + 106;
  }
  if ( sub_10023D10((_DWORD *)a1, 23) )
    return 41;
  if ( sub_10023D10((_DWORD *)a1, 24) )
  {
    v18 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_78;
  }
  if ( sub_10023D10((_DWORD *)a1, 80) )
  {
    v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            2.0,
            4.0)
        + *(float *)(dword_106B31C8 + 12);
    sub_10031BA0(a1, v26);
    sub_10023E00((char *)a1, 80);
    return 111;
  }
  else if ( sub_10023D10((_DWORD *)a1, 18) )
  {
    v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            2.0,
            4.0)
        + *(float *)(dword_106B31C8 + 12);
    sub_10031BA0(a1, v27);
    return 111;
  }
  else if ( sub_10023D10((_DWORD *)a1, 21) && sub_1004AFF0((_DWORD *)a1, 9) )
  {
    sub_1023C380((_DWORD *)a1, (int)"NPC_Antlion.PoisonBurstScream", 0.0, 0);
    v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.5,
            2.5)
        + *(float *)(dword_106B31C8 + 12);
    sub_10031BA0(a1, v28);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      v19 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
      v20 = *v19;
      v21 = sub_10019640((_DWORD *)a1);
      v22 = (float *)(*(int (__thiscall **)(int *, _BYTE *, _DWORD *, int))(v20 + 520))(v19, v30, v21, 1);
      *(float *)(a1 + 2864) = *v22;
      *(float *)(a1 + 2868) = v22[1];
      *(float *)(a1 + 2872) = v22[2];
    }
    return 109;
  }
  else if ( sub_10023D10((_DWORD *)a1, 38) || sub_10023D10((_DWORD *)a1, 13) )
  {
    return 35;
  }
  else if ( sub_10023D10((_DWORD *)a1, 45) )
  {
    return 39;
  }
  else
  {
    return sub_10023D10((_DWORD *)a1, 29) ? 12 : 113;
  }
}
