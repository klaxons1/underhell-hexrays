int __thiscall sub_102A40F0(int this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  float v15; // [esp+Ch] [ebp-10h]
  float v16; // [esp+14h] [ebp-8h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100005);
  if ( sub_10023D10(*(_DWORD **)(this + 4), v3) )
    return 100013;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100000);
  if ( sub_10023D10(*(_DWORD **)(this + 4), v6) )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 1.5, 3.0);
    if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 212) )
      v7 = *(float *)(this + 212) + 1.5;
    else
      v7 = *(float *)(dword_106B31C8 + 12) + 1.5;
    *(float *)(this + 212) = v7;
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           2.5,
           4.0);
    result = 100014;
    *(float *)(this + 136) = v8 + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v10 = sub_1007DB30((_DWORD *)(v9 + 52), 100011);
    if ( sub_10023D10(*(_DWORD **)(this + 4), v10) )
    {
      return 100012;
    }
    else if ( !sub_10023D10(*(_DWORD **)(this + 4), 50) || (unsigned __int8)sub_1004B510((void *)this, 100016, 1) )
    {
      if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
        goto LABEL_30;
      if ( sub_1004C220((_DWORD **)this, 26) && *(int *)(this + 160) > 1 )
      {
        v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4));
        v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1868))(*(_DWORD *)(this + 4));
        v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                0.5,
                1.0);
        sub_10077890(v12, v11, v15);
      }
      v13 = *(_DWORD *)(this + 4);
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 368))(v13);
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 1808))(v13, v14, 1.0, 2.0, 0.0);
      if ( sub_1004C220((_DWORD **)this, 21) && !sub_100B8D10((float *)(*(_DWORD *)(this + 4) + 2760)) )
      {
        return 100010;
      }
      else
      {
LABEL_30:
        if ( !sub_10023D10(*(_DWORD **)(this + 4), 3) || sub_1004C220((_DWORD **)this, 10) )
        {
          if ( sub_1004C220((_DWORD **)this, 100012) )
          {
            sub_102A01C0((int *)this, (int)"TLK_PASSENGER_REQUEST_UPRIGHT", 0, 0, 0, 0);
            *(float *)(this + 140) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                            + 4))(
                                       dword_106B31E4,
                                       5.0,
                                       10.0)
                                   + *(float *)(dword_106B31C8 + 12);
            sub_1004C260((char **)this, 100012);
          }
          if ( sub_1004C220((_DWORD **)this, 100015) )
          {
            v16 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    6.0,
                    12.0);
            sub_102A2440((float *)this, v16);
            return 100017;
          }
          else
          {
            return 0;
          }
        }
        else
        {
          return 100011;
        }
      }
    }
    else
    {
      sub_102A01C0((int *)this, (int)"TLK_DANGER", 0, 0, 0, 0);
      return 100016;
    }
  }
  return result;
}
