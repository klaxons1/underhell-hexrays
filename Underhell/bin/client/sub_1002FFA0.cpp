void __userpurge sub_1002FFA0(int a1@<ecx>, int a2@<ebx>, int *a3, int a4, float *a5, float a6, int a7)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15[1023]; // [esp+38h] [ebp-10D0h] BYREF
  _BYTE v16[20]; // [esp+1034h] [ebp-D4h] BYREF
  _BYTE v17[80]; // [esp+1048h] [ebp-C0h] BYREF
  int v18[24]; // [esp+1098h] [ebp-70h] BYREF
  _BYTE v19[16]; // [esp+10F8h] [ebp-10h] BYREF
  int savedregs; // [esp+1108h] [ebp+0h] BYREF
  int v21; // [esp+1110h] [ebp+8h]

  if ( a3 && (unsigned __int8)sub_101282A0(a3) )
  {
    v9 = *(_DWORD *)(a1 + 1808);
    if ( v9 >= sub_10126D70(a3) || *(_DWORD *)(a1 + 1808) == -1 )
    {
      if ( *(_DWORD *)(a1 + 1808) )
      {
        *(_DWORD *)(a1 + 1808) = 0;
        sub_1000F6C0(a1, 8);
        if ( *(_BYTE *)(a1 + 1760) )
          sub_10029560((_DWORD *)a1);
      }
    }
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)a1 + 600))(a1, a3, v18, a2);
    v21 = *(int *)(a1 + 1816);
    v10 = *(_DWORD *)(dword_10403714 + 48);
    if ( v10 == (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 8) + 36))(a1 + 8) )
    {
      v11 = sub_10127960(*(_DWORD *)(a1 + 1808));
      sub_10025960(
        "%8.4f : %30s : %5.3f : %4.2f\n",
        a6,
        (const char *)(v11 + *(_DWORD *)(v11 + 4)),
        *(float *)&v21,
        1.0);
    }
    sub_1001F9A0((int)a3, a4, a5, a7);
    sub_10024510(
      (int)&savedregs,
      a3,
      *(float **)(a1 + 1228),
      a4,
      a5,
      *(_DWORD *)(a1 + 1808),
      v21,
      (int)v18,
      a7,
      1.0,
      a6);
    sub_10028050((void *)a1, a3, *(float *)&v21, (int)v18, a4, a5, a7);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 656))(a1, a3);
    sub_10023FA0((int)v15);
    v12 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)(a1 + 4) + 4))(
            LODWORD(a6),
            *((_DWORD *)off_103DC81C + 1),
            a7);
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 + 4) + 8))(a1 + 4, v12);
    sub_10024430(v15, (int)a3, v13, a4, *(float *)&a5, (int)v18, SLODWORD(a6));
    sub_10024770(a3, v15, a4, a5, (int)v18, a7, a6);
    if ( *(_DWORD *)(*a3 + 164) )
    {
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 592))(a1, v19);
      sub_1001FB00(a3, a4, (int)a5, (int)v19, a7);
    }
    sub_10026700((_DWORD *)a1, (int)a3, a4, (int)a5, a6);
    sub_1011A810(v17);
    sub_100F9DC0(v16);
  }
}
