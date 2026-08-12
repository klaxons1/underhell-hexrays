void __usercall sub_1024EC00(float *a1@<ecx>, int a2@<edi>)
{
  int v3; // edx
  const char *v4; // eax
  const char *v5; // eax
  double v6; // st7
  _BYTE v7[4]; // [esp+4h] [ebp-4h] BYREF

  (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 100))(a1);
  if ( 0.0 == a1[27] )
    a1[27] = 100.0;
  if ( !*((_DWORD *)a1 + 53) )
  {
    v4 = sub_100D6390(a1);
    Warning("FuncTrain '%s' has no target.\n", v4);
  }
  if ( 0.0 == a1[238] )
    a1[238] = 2.0;
  sub_100E0970((int)a1, v3, 7, 0);
  sub_10112C00((int)(a1 + 80), 1);
  v5 = *(const char **)(*(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a1 + 28))(a1, v7, a2);
  if ( !v5 )
    v5 = String;
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)a1 + 104))(a1, v5);
  if ( ((_BYTE)a1[62] & 8) != 0 )
    sub_101129A0((unsigned __int16 *)a1 + 160, *((_WORD *)a1 + 178) | 4);
  v6 = a1[232];
  *((_BYTE *)a1 + 944) = 0;
  if ( 0.0 == v6 )
    a1[232] = 0.85000002;
}
