int __userpurge sub_103C61A0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int result; // eax
  int v6; // eax
  int v7; // ecx
  float *v8; // ecx
  float *v9; // ecx
  float *v10; // ecx
  float *v11; // ecx
  float *v12; // ecx
  int v13; // ecx
  float v14; // [esp+8h] [ebp-14h]
  double v15; // [esp+14h] [ebp-8h] BYREF

  result = sub_10035690(a1, a2, a3, a4);
  if ( !*(_DWORD *)(a1 + 3652) )
  {
    v6 = sub_10283150();
    *(_DWORD *)(a1 + 3652) = v6;
    if ( v6 )
    {
      a4 = 18;
      sub_100C1E10((float *)(v6 + 828), &a4);
      v7 = *(_DWORD *)(a1 + 3652);
      v15 = 3.0;
      sub_103B6070((float *)(v7 + 832), &v15);
      v8 = (float *)(*(_DWORD *)(a1 + 3652) + 848);
      a4 = 8;
      sub_10284420(v8, &a4);
      v9 = (float *)(*(_DWORD *)(a1 + 3652) + 852);
      a4 = 32;
      sub_10284480(v9, &a4);
      v10 = (float *)(*(_DWORD *)(a1 + 3652) + 856);
      a4 = 16;
      sub_102842B0(v10, &a4);
      v11 = (float *)(*(_DWORD *)(a1 + 3652) + 840);
      a4 = 8;
      sub_102843C0(v11, &a4);
      v12 = (float *)(*(_DWORD *)(a1 + 3652) + 844);
      a4 = 32;
      sub_100C1DB0(v12, &a4);
      v13 = *(_DWORD *)(a1 + 3652);
      v15 = 0.6;
      sub_1031B680((float *)(v13 + 824), &v15);
      sub_100C34C0((float *)(*(_DWORD *)(a1 + 3652) + 800), 0.25, 0.25, 0.25);
      sub_102BC090((float *)(*(_DWORD *)(a1 + 3652) + 812), 0.0, 0.0, 0.0);
      sub_100F5880(*(int **)(a1 + 3652), 30.0);
      sub_10284B60(*(_DWORD *)(a1 + 3652), a1, 0);
    }
    *(_DWORD *)(a1 + 3684) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                               dword_106B31E4,
                               6,
                               12);
    sub_100EC3F0((_DWORD *)a1, (int)sub_103C5590, 0.0, 0);
    v14 = *(float *)(dword_106B31C8 + 12) + 1.5;
    return sub_100EC4A0((int *)a1, v14, 0);
  }
  return result;
}
