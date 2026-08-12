int __cdecl sub_10168680(
        int a1,
        int a2,
        float *a3,
        char a4,
        char a5,
        char a6,
        int a7,
        float a8,
        float a9,
        float a10,
        int a11)
{
  int v11; // ecx
  int result; // eax
  int v13; // esi
  int v14; // [esp+14h] [ebp-4h]

  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, a11, v11);
  if ( result )
  {
    *(float *)(result + 4) = *a3;
    *(float *)(result + 8) = a3[1];
    *(float *)(result + 12) = a3[2];
    *(_BYTE *)(result + 21) = a5;
    *(float *)(result + 16) = a8;
    *(_BYTE *)(result + 20) = a4;
    *(_BYTE *)(result + 22) = a6;
    *(_BYTE *)(result + 23) = a7;
    *(float *)(result + 24) = *((float *)off_103DC81C + 3) + a9;
    *(float *)(result + 28) = a10;
    result = sub_101BC880();
    if ( (_BYTE)result )
    {
      result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
      if ( (_BYTE)result )
      {
        LOBYTE(v14) = a4;
        BYTE1(v14) = a5;
        BYTE2(v14) = a6;
        HIBYTE(v14) = -1;
        if ( sub_10229D00(32) )
          v13 = sub_10229D20("TempEntity");
        else
          v13 = 0;
        sub_1022ACA0("te", 0);
        sub_1022ABA0("name", "TE_DynamicLight");
        sub_1022ACC0("time", *((float *)off_103DC81C + 3));
        sub_1022ACC0("duration", a9);
        sub_1022ACC0("originx", *a3);
        sub_1022ACC0("originy", a3[1]);
        sub_1022ACC0("originz", a3[2]);
        sub_1022ACC0("radius", a8);
        sub_1022ACC0("decay", a10);
        sub_1022AB60("color", v14);
        sub_1022ACA0("exponent", a7);
        sub_1022ACA0("lightindex", a11);
        sub_101BC9C0(0, v13);
        return sub_1022AF00(v13);
      }
    }
  }
  return result;
}
