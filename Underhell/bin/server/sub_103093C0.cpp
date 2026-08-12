char __userpurge sub_103093C0@<al>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3)
{
  char result; // al
  int (__thiscall *v5)(_DWORD *); // edx
  float *v6; // eax
  int v7; // eax
  _DWORD v8[20]; // [esp+Ch] [ebp-50h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*a1 + 764))(a1);
  if ( result )
  {
    sub_1023C380(a1, (int)"NPC_AntlionGuard.Fallover", 0.0, 0);
    if ( (a1[62] & 0x10000) != 0 )
    {
      sub_10247EC0(v8);
      *(float *)&v8[1] = *a3;
      v8[16] = 0;
      *(float *)&v8[2] = a3[1];
      v5 = *(int (__thiscall **)(_DWORD *))(*a1 + 576);
      *(float *)&v8[3] = a3[2];
      v6 = (float *)v5(a1);
      *(float *)&v8[4] = *v6;
      *(float *)&v8[5] = v6[1];
      *(float *)&v8[6] = v6[2];
      v7 = sub_101D0270((int)a1, 0, (int)v8, 0, 0);
      *(_DWORD *)(v7 + 260) = a1[65];
      sub_100EBE30(v7, 1);
      sub_1025FAC0((int)a1);
      return 1;
    }
    else
    {
      return sub_100C40A0(a1, a2, a3);
    }
  }
  return result;
}
