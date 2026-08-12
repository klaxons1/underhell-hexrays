void __usercall sub_103CC930(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  double v7; // st7
  bool v8; // cc
  char *v9; // ecx
  float v10; // eax
  void (__thiscall *v11)(int, char *, _DWORD, _DWORD, _DWORD, _DWORD); // edx
  float v12; // [esp+4h] [ebp-24h]
  _BYTE v13[12]; // [esp+10h] [ebp-18h] BYREF
  float v14[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( !a1[1433] || *(int *)(dword_106B31C8 + 20) > 1 || !sub_10261B20() )
    return;
  if ( a1[1115] )
  {
    a2 = (int)(a1 + 1114);
    if ( (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[1115] + 1364))(a1[1115]) == a1 + 1114
      && (sub_1004CAF0((int)(a1 + 1114)) || sub_1004C9E0(a1 + 1114)) )
    {
LABEL_19:
      sub_103CAFE0((int)a1, COERCE_FLOAT(1));
      return;
    }
  }
  v12 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100B8D50((float *)a1 + 690, v12);
  if ( a1[1433] != 2 )
    return;
  if ( !sub_10023D10(a1, 83) )
  {
    sub_10023D10(a1, 26);
    goto LABEL_19;
  }
  if ( *(float *)(dword_106B31C8 + 12) > (double)*((float *)a1 + 1432) )
  {
    v3 = sub_1026A890((unsigned int *)a1 + 1430);
    v4 = sub_1001F4B0(v3);
    if ( a1[1434] <= 0
      || !*((_BYTE *)a1 + 5753)
      && v4
      && (v5 = *(_DWORD *)(dword_106EBEFC + 48), (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1572))(v4) >= v5) )
    {
      v9 = off_1067CE0C[0];
      v10 = *(float *)a1;
      *((float *)a1 + 1435) = 0.0;
      v11 = *(void (__thiscall **)(int, char *, _DWORD, _DWORD, _DWORD, _DWORD))(LODWORD(v10) + 2344);
      a1[1434] = 0;
      v11((int)a1, v9, 0, 0, 0, 0);
      sub_103CAFE0((int)a1, 0.0);
    }
    else
    {
      sub_100BCCA0(a1, a1[1460], (int)v14, (int)v13);
      v6 = sub_1026A890((unsigned int *)a1 + 1430);
      sub_103CC840(a2, v14, (int)a1, v6);
      v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.5,
             1.0)
         + *(float *)(dword_106B31C8 + 12);
      v8 = --a1[1434] <= 0;
      *((float *)a1 + 1432) = v7;
      if ( v8 )
      {
        a1[1434] = 0;
        *((float *)a1 + 1432) = *(float *)(dword_106B31C8 + 12) + 1.0;
      }
    }
  }
}
