int __userpurge sub_101E8350@<eax>(char *a1@<ecx>, int a2@<ebx>, int a3)
{
  int result; // eax
  int *v5; // edx
  int *v6; // ecx
  _BYTE *v7; // ebx
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  float *v12; // eax
  int v13; // edx
  double v14; // st7
  int (__thiscall *v15)(int); // eax
  float *v16; // eax
  double v17; // st6
  double v18; // st7
  unsigned int v19; // eax
  float *v20; // eax
  double v21; // st7
  double v22; // st7
  double v23; // st7
  int v24; // esi
  int v25; // eax
  int v26; // eax
  float v28; // [esp+50h] [ebp-18h] BYREF
  float v29; // [esp+54h] [ebp-14h]
  float v30; // [esp+58h] [ebp-10h]
  float v31; // [esp+5Ch] [ebp-Ch]
  float v32; // [esp+60h] [ebp-8h]
  float v33; // [esp+64h] [ebp-4h]
  float v34; // [esp+70h] [ebp+8h]

  *((_DWORD *)a1 + 866) |= *(_DWORD *)(a3 + 64);
  result = sub_100CB580(a1, a3);
  if ( result )
  {
    if ( *(_DWORD *)(a3 + 44) != -1
      && (v5 = off_1061BE18,
          v6 = &off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] == *(_DWORD *)(a3 + 44) >> 12)
      && (v7 = (_BYTE *)*v6) != 0 )
    {
      v32 = flt_106F1CAC;
      v8 = *(_DWORD *)(a3 + 40);
      v31 = flt_106F1CA8;
      v33 = flt_106F1CB0;
      if ( v8 != -1 )
      {
        v9 = &off_1061BE18[4 * (v8 & 0xFFF) + 1];
        v10 = v8 >> 12;
        if ( v9[1] == v10 )
        {
          if ( *v9 )
          {
            if ( v9[1] == v10 )
              v11 = *v9;
            else
              v11 = 0;
            v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
            v13 = *(_DWORD *)a1;
            v28 = *v12;
            v29 = v12[1];
            v14 = v12[2];
            v15 = *(int (__thiscall **)(int))(v13 + 576);
            v30 = v14 - 10.0;
            v16 = (float *)v15((int)a1);
            v17 = v29 - v16[1];
            v18 = v30 - v16[2];
            v31 = v28 - *v16;
            v32 = v17;
            v33 = v18;
            off_10689714();
            v5 = off_1061BE18;
          }
        }
      }
      v19 = *(_DWORD *)(a3 + 40);
      if ( v19 != -1
        && v5[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] == v19 >> 12
        && v5[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1]
        && a1[306] == 2
        && (v7[356] & 8) == 0 )
      {
        v34 = sub_101E3BE0((float *)a3);
        v20 = sub_10023450((float *)a1);
        v21 = 73728.0 / (v20[1] * *v20 * v20[2]) * v34 * 5.0;
        if ( v21 > 1000.0 )
          v21 = 1000.0;
        v22 = -v21;
        v28 = v31 * v22;
        v29 = v32 * v22;
        v23 = v22 * v33;
        v30 = v23;
        if ( v23 > 250.0 )
          v30 = 250.0;
        sub_100EA150((int)a1, &v28);
      }
      v24 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
              dword_106B31F8,
              "player_hurt",
              0);
      if ( v24 )
      {
        v25 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 60))(
                dword_106B31D0,
                *((_DWORD *)a1 + 6),
                a2);
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v24 + 40))(v24, "userid", v25);
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v24 + 40))(
          v24,
          "health",
          *((int *)a1 + 55) < 0 ? 0 : *((_DWORD *)a1 + 55));
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v24 + 40))(v24, "priority", 5);
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 320))(v7) )
        {
          v26 = sub_1001F4B0((int)v7);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(dword_106B31D0, *(_DWORD *)(v26 + 24));
        }
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v24 + 40))(v24, "attacker");
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v24, 0);
      }
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 284))(v7) )
      {
        if ( (*((_DWORD *)a1 + 63) & 0x800) != 0 )
          sub_100DAE60((int)a1);
        sub_1023D4B0(1, (int)(a1 + 580), 512, 0.5, (int)a1, 0, 0);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
