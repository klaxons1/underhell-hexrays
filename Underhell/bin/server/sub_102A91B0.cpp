int __usercall sub_102A91B0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v2; // ecx
  _DWORD *v3; // eax
  bool v4; // zf
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // ebx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v11; // eax
  int *v12; // ecx
  int v13; // ecx
  int result; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  long double v22; // st7
  float v24; // [esp+4h] [ebp-Ch]

  v11 = *(_DWORD *)(a1 + 40);
  if ( v11 == -1 || (v12 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1], v12[1] != v11 >> 12) )
    v13 = 0;
  else
    v13 = *v12;
  if ( sub_102A9F50(v13) )
  {
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 24) && sub_10023D10(*(_DWORD **)(a1 + 4), 23) )
    {
      return 41;
    }
    else
    {
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
      v16 = sub_1007DB30((_DWORD *)(v15 + 52), 100001);
      if ( sub_10023D10(*(_DWORD **)(a1 + 4), v16) )
      {
        if ( *(_DWORD *)(a1 + 40) == -1
          || off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] != *(_DWORD *)(a1 + 40) >> 12 )
        {
          v2 = 0;
        }
        else
        {
          v2 = off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1];
        }
        v3 = (_DWORD *)sub_102A9F50(v2);
        v4 = *(_BYTE *)(a1 + 32) == 0;
        v5 = (int)v3;
        *(float *)(a1 + 24) = *(float *)(dword_106B31C8 + 12) + 4.0;
        if ( v4 )
        {
          v6 = *(_DWORD **)(a1 + 4);
          *(_BYTE *)(a1 + 32) = 1;
          sub_100285C0(v6, v3, 1);
          sub_1002B660(*(_DWORD *)(a1 + 4), 3);
          v7 = *(_DWORD *)(a1 + 4);
          if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
            sub_100DAE60(v5);
          (*(void (__thiscall **)(int, int, int, _DWORD, int))(*(_DWORD *)v7 + 1876))(v7, v5, v5 + 580, 0, a2);
          sub_102A87D0((int *)a1, 1);
          *(_DWORD *)(a1 + 28) = 4;
          return 12;
        }
        else
        {
          v8 = *(_DWORD *)(a1 + 40);
          if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 2] != v8 >> 12 )
            v9 = 0;
          else
            v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 40) & 0xFFF) + 1];
          if ( !(unsigned __int8)sub_102AA0E0(v9) || sub_102A8CB0((int *)a1) )
          {
            return 17;
          }
          else if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 20) )
          {
            return 12;
          }
          else
          {
            return 100001;
          }
        }
      }
      else
      {
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
        v18 = sub_1007DB30((_DWORD *)(v17 + 52), 100000);
        if ( !sub_10023D10(*(_DWORD **)(a1 + 4), v18) || (result = sub_102A8FB0(a1)) == 0 )
        {
          if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 24) )
          {
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) )
            {
              sub_100285C0(*(_DWORD **)(a1 + 4), 0, 1);
              sub_1002B660(*(_DWORD *)(a1 + 4), 2);
              v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 1868))(*(_DWORD *)(a1 + 4));
              sub_10077CB0(v19);
            }
            sub_102A87D0((int *)a1, 0);
            *(_BYTE *)(a1 + 32) = 0;
          }
          if ( sub_102A8CB0((int *)a1) )
          {
            return 100000;
          }
          else if ( sub_102A85C0((int *)a1) )
          {
            return 100005;
          }
          else
          {
            v20 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 40));
            v24 = *((float *)sub_1001F410(v20) + 1);
            v21 = sub_10060AC0((_DWORD *)a1);
            v22 = *(float *)(v21 + 4);
            sub_10019610(*(float *)(v21 + 4), v24);
            result = 100004;
            if ( fabs(v22) <= 15.0 )
              return 1;
          }
        }
      }
    }
  }
  else
  {
    DevMsg("ai_goal_police with NULL target entity!\n");
    *(_DWORD *)(a1 + 40) = -1;
    *(_BYTE *)(a1 + 16) = 0;
    return 0;
  }
  return result;
}
