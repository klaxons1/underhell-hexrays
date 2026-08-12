void __userpurge sub_1039CC80(int *a1@<ecx>, int a2@<edi>, int *a3)
{
  int v4; // eax
  unsigned int v5; // eax
  void (__noreturn ***v6)(); // eax
  int v7; // ecx
  int v8; // eax
  int *v9; // edi
  int v10; // edx
  int v11; // edx
  int v12; // eax
  double v13; // st7
  int (__thiscall *v14)(int, int, int); // eax
  int v15; // edi
  float *v16; // [esp+1Ch] [ebp-2Ch]
  float v17; // [esp+20h] [ebp-28h]
  float v18[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  float v19; // [esp+38h] [ebp-10h] BYREF
  float v20; // [esp+3Ch] [ebp-Ch]
  float v21; // [esp+40h] [ebp-8h]
  float v22; // [esp+44h] [ebp-4h]

  v4 = *a3;
  if ( *a3 == dword_106EA430 )
  {
    v5 = a1[966];
    if ( v5 <= 2 )
    {
      if ( *((_BYTE *)a1 + v5 + 3848) )
        --a1[961];
      *((_BYTE *)a1 + v5 + 3848) = 0;
      sub_100C1600((int)a1, v5 + 2, 0);
    }
    sub_100C1600((int)a1, 5, 1);
  }
  else if ( v4 == dword_106EA434 )
  {
    if ( *((_BYTE *)a1 + 3860) )
    {
      v6 = sub_1023DBA0();
      v7 = a1[959];
    }
    else
    {
      v6 = sub_1023DBA0();
      v7 = a1[960];
    }
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v6)[17])(v6, v7, 0, &unk_10677DD4, 3);
    sub_1023C380(a1, (int)"NPC_PoisonZombie.ThrowWarn", 0.0, 0);
  }
  else if ( v4 == dword_106EA42C )
  {
    sub_1039BC70((int)a1);
    sub_1023C380(a1, (int)"NPC_PoisonZombie.Throw", 0.0, 0);
  }
  else if ( v4 == dword_106EA428 )
  {
    sub_100C1600((int)a1, 5, 0);
    v16 = (float *)(*(int (__thiscall **)(int *, float *, float *))(*a1 + 504))(a1, &v19, &flt_106F1CB4);
    v8 = (*(int (__thiscall **)(int *))(*a1 + 2332))(a1);
    v9 = (int *)sub_100E2680(v8, v16, (float *)a1, a2);
    sub_10035270((int)v9, v10, 4);
    if ( (a1[62] & 0x200) != 0 )
      sub_10035270((int)v9, v11, 512);
    (*(void (__thiscall **)(int *, int *))(*v9 + 76))(v9, a1);
    (*(void (__thiscall **)(int *))(*v9 + 96))(v9);
    sub_100E11A0((int)v9, (float *)a1 + 182);
    (*(void (__thiscall **)(int *, int))(*v9 + 1416))(v9, 17);
    sub_100EC4A0(v9, *(float *)(dword_106B31C8 + 12), 0);
    (*(void (__thiscall **)(int *))(*v9 + 400))(v9);
    if ( (a1[63] & 0x800) != 0 )
      sub_100DAE60((int)a1);
    *(float *)(v9[651] + 20) = *((float *)a1 + 177);
    if ( (a1[64] & 0x8000000) != 0 )
      (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, _DWORD))(*v9 + 808))(v9, 100.0, 1, 0.0, 0);
    v12 = (*(int (__thiscall **)(int *))(*a1 + 368))(a1);
    if ( v12 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v12 + 504))(v12, v18);
      sub_10369AD0(v9, (int)v18);
    }
    if ( !a1[961] )
      sub_10020480(a1, 393216);
    *((float *)a1 + 963) = (double)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 4)
                         + *(float *)(dword_106B31C8 + 12);
  }
  else if ( v4 == dword_106EA424 )
  {
    v13 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -5, 5);
    v14 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8);
    v22 = v13;
    v18[0] = 45.0;
    v18[1] = v22;
    v18[2] = (float)v14(dword_106B31E4, -5, 5);
    sub_10422220(a1 + 182, &v19);
    v15 = *a1;
    v19 = v19 * 200.0;
    v20 = v20 * 200.0;
    v21 = 200.0 * v21;
    v17 = ((double (__thiscall *)(int *, int, float *, float *, int))*(_DWORD *)(v15 + 2240))(
            a1,
            (int)*(float *)(dword_106EA49C + 44),
            v18,
            &v19,
            3);
    (*(void (__thiscall **)(int *, _DWORD))(v15 + 2292))(a1, LODWORD(v17));
  }
  else
  {
    sub_10331E50(a1, a3);
  }
}
