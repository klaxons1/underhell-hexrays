int __usercall sub_10153B10@<eax>(int *a1@<ebx>, int a2@<edi>)
{
  int v2; // esi
  int (***v3)(); // eax
  int v4; // esi
  int (***v5)(); // eax
  int v6; // esi
  int (***v7)(); // eax
  int v8; // esi
  int (***v9)(); // eax
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int (***v13)(); // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  _BYTE *v18; // eax
  int result; // eax

  sub_100E39D0(a1, a2);
  v2 = (int)*off_10646704;
  v3 = sub_10001000();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v2 + 40))(off_10646704, v3);
  v4 = (int)*off_10646704;
  v5 = sub_101174A0();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v4 + 40))(off_10646704, v5);
  v6 = (int)*off_10646704;
  v7 = sub_1010BC10();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v6 + 40))(off_10646704, v7);
  v8 = (int)*off_10646704;
  v9 = sub_1009A680();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v8 + 40))(off_10646704, v9);
  v10 = (int)*off_10646704;
  v11 = sub_1024B230();
  (*(void (__thiscall **)(int (***)(), int))(v10 + 40))(off_10646704, v11);
  v12 = (int)*off_10646704;
  v13 = sub_100A7090();
  (*(void (__thiscall **)(int (***)(), int (***)()))(v12 + 40))(off_10646704, v13);
  v14 = (int)*off_10646704;
  v15 = sub_101D3240();
  (*(void (__thiscall **)(int (***)(), int))(v14 + 40))(off_10646704, v15);
  v16 = (int)*off_10646704;
  v17 = sub_1021E050();
  (*(void (__thiscall **)(int (***)(), int))(v16 + 40))(off_10646704, v17);
  v18 = sub_10018D60(byte_106C7260);
  if ( !v18 || !*v18 )
    sub_1024D5E0(byte_106C7260, "stats.txt");
  sub_1024D600(dword_106B31D8, 0);
  sub_1016FFE0();
  if ( dword_106B8370 )
  {
    (**(void (__thiscall ***)(int, int))dword_106B8370)(dword_106B8370, 1);
    dword_106B8370 = 0;
  }
  sub_104338A0();
  sub_104335A0();
  sub_1042C0C0();
  result = 0;
  if ( byte_106FE594 )
  {
    cvar = 0;
    g_pCVar = 0;
    dword_106FE590 = 0;
    byte_106FE594 = 0;
  }
  return result;
}
