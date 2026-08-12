char __usercall sub_1040A120@<al>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int (__thiscall **v7)(_DWORD); // edx
  int v8; // ecx
  int v9; // eax
  bool v10; // cc
  int v11; // eax
  int v12; // eax
  unsigned __int8 (__thiscall *v13)(int); // eax
  double v15; // [esp+10h] [ebp-8h] BYREF

  v3 = sub_100D1940((_DWORD *)a1);
  v4 = v3;
  if ( v3 )
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
    if ( (_BYTE)v3 )
    {
      if ( *(_BYTE *)(a1 + 1127) || *(_BYTE *)(a1 + 1126) )
        goto LABEL_61;
      if ( !*(_BYTE *)(a1 + 1144) )
      {
        sub_100C1600(a1, 1, 1);
        goto LABEL_18;
      }
      v5 = *(_DWORD *)(v4 + 3292);
      if ( (v5 & 1) != 0 && *(int *)(a1 + 1200) >= 1 )
      {
        *(_BYTE *)(a1 + 1144) = 0;
        *(_WORD *)(a1 + 1392) = 256;
LABEL_18:
        if ( *(_BYTE *)(a1 + 1392) )
        {
          a2 = *(float *)(dword_106B31C8 + 12);
          if ( a2 >= *(float *)(a1 + 1132) )
          {
            LOBYTE(v3) = sub_1027F4E0(a1);
            return v3;
          }
        }
        if ( (*(_BYTE *)(a1 + 1394) || (*(_DWORD *)(v4 + 3292) & 0x800) != 0)
          && (a2 = *(float *)(dword_106B31C8 + 12), a2 >= *(float *)(a1 + 1132)) )
        {
          *(_BYTE *)(a1 + 1394) = 0;
          if ( *(int *)(a1 + 1200) > 1 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1) )
          {
            if ( *(_BYTE *)(sub_100D1940((_DWORD *)a1) + 447) == 3 && !*(_BYTE *)(a1 + 1208) )
            {
              (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 0, 0.0);
              v15 = *(float *)(dword_106B31C8 + 12) + 0.2;
              LOBYTE(v3) = (unsigned __int8)sub_100D2DA0((float *)(a1 + 1132), &v15);
              return v3;
            }
            if ( (*(_BYTE *)(v4 + 3296) & 1) != 0 )
              sub_100D2D00((float *)(a1 + 1132), (float *)(dword_106B31C8 + 12));
            (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1072))(a1);
            goto LABEL_52;
          }
          if ( *(_DWORD *)(a1 + 1200) == 1 )
            goto LABEL_51;
        }
        else
        {
          if ( !*(_BYTE *)(a1 + 1393) && (*(_BYTE *)(v4 + 3292) & 1) == 0 )
            goto LABEL_52;
          a2 = *(float *)(dword_106B31C8 + 12);
          if ( a2 < *(float *)(a1 + 1132) )
            goto LABEL_52;
          v10 = *(_DWORD *)(a1 + 1200) <= 0;
          *(_BYTE *)(a1 + 1393) = 0;
          if ( (!v10 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1))
            && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1)
             || sub_100CF5D0((_DWORD *)v4, *(_DWORD *)(a1 + 1192))) )
          {
            if ( *(_BYTE *)(v4 + 447) == 3 && !*(_BYTE *)(a1 + 1208) )
            {
              (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 0, 0.0);
              v15 = *(float *)(dword_106B31C8 + 12) + 0.2;
              LOBYTE(v3) = (unsigned __int8)sub_100D2DA0((float *)(a1 + 1132), &v15);
              return v3;
            }
            v11 = sub_100D1940((_DWORD *)a1);
            v12 = sub_1001F4B0(v11);
            if ( v12 && (*(_BYTE *)(v12 + 3296) & 1) != 0 )
              sub_100D2D00((float *)(a1 + 1132), (float *)(dword_106B31C8 + 12));
LABEL_51:
            (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1068))(a1);
LABEL_52:
            if ( (*(_DWORD *)(v4 + 3292) & 0x2000) != 0
              && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1272))(a1)
              && !*(_BYTE *)(a1 + 1144) )
            {
              LOBYTE(v3) = sub_10409A70(a1, a2);
              return v3;
            }
            v13 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 968);
            *(_BYTE *)(a1 + 1146) = 0;
            if ( !v13(a1)
              && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 1132)
              && ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1244))(a1) & 4) == 0
              && sub_100CF400((void *)v4, a1) )
            {
              v15 = *(float *)(dword_106B31C8 + 12) + 0.3;
              LOBYTE(v3) = (unsigned __int8)sub_100D2DA0((float *)(a1 + 1132), &v15);
              return v3;
            }
LABEL_61:
            LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1036))(a1);
            return v3;
          }
        }
        if ( sub_100CF5D0((_DWORD *)v4, *(_DWORD *)(a1 + 1192)) )
          sub_10409A70(a1, a2);
        else
          sub_102765E0((void *)a1);
        goto LABEL_52;
      }
      if ( (v5 & 0x800) != 0 && *(int *)(a1 + 1200) >= 2 )
      {
        *(_BYTE *)(a1 + 1144) = 0;
        *(_BYTE *)(a1 + 1392) = 0;
        *(_BYTE *)(a1 + 1394) = 1;
        goto LABEL_18;
      }
      a2 = *(float *)(dword_106B31C8 + 12);
      if ( a2 < *(float *)(a1 + 1132) )
        goto LABEL_18;
      v6 = sub_100CF5D0((_DWORD *)v4, *(_DWORD *)(a1 + 1192));
      v7 = *(int (__thiscall ***)(_DWORD))a1;
      v8 = a1;
      if ( v6 <= 0 || (v9 = v7[304](a1), v7 = *(int (__thiscall ***)(_DWORD))a1, v8 = a1, *(_DWORD *)(a1 + 1200) >= v9) )
        LOBYTE(v3) = v7[264](v8);
      else
        LOBYTE(v3) = v7[266](a1);
    }
  }
  return v3;
}
