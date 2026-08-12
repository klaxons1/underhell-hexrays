int __userpurge sub_10062E30@<eax>(int a1@<ecx>, int a2@<edi>, float *a3, int a4)
{
  int v5; // esi
  float *v7; // eax
  void (__thiscall *v8)(int, float *); // edx
  int v9; // esi
  float v10; // [esp+Ch] [ebp-D8h]
  float v11; // [esp+Ch] [ebp-D8h]
  float v12[45]; // [esp+1Ch] [ebp-C8h] BYREF
  int v13[3]; // [esp+D0h] [ebp-14h] BYREF
  float v14; // [esp+DCh] [ebp-8h]
  float v15; // [esp+E0h] [ebp-4h] BYREF

  if ( a3[11] >= 0.001 )
  {
    *(_DWORD *)(a1 + 108) = 0;
    *(_DWORD *)(a1 + 128) = 0;
    sub_10061BE0((char *)a1, (int)a3);
    sub_10062B50((int *)a1, (int)a3);
    v10 = *(float *)(a1 + 32) * *(float *)(a1 + 32)
        + *(float *)(a1 + 28) * *(float *)(a1 + 28)
        + *(float *)(a1 + 36) * *(float *)(a1 + 36);
    v15 = off_10689708(v10);
    v14 = sub_10061460(a1, &v15);
    qmemcpy(v12, a3, sizeof(v12));
    v11 = sub_10061600(a1);
    v7 = (float *)sub_102650F0((int)v13, v11);
    v12[6] = *v7;
    v12[7] = v7[1];
    v8 = *(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 100);
    v12[8] = v7[2];
    v8(a1, v12);
    v9 = *(_DWORD *)(a1 + 4);
    *(float *)(v9 + 800) = sub_10078F70(*(_DWORD *)(v9 + 908));
    sub_10060C00(a1, a1, (int)v13, v15);
    return sub_10078AE0((int)a3, v15, v14, a4);
  }
  else
  {
    v5 = sub_10079300(a3, a4);
    sub_10060C00(a1, a1, a2, 0.0);
    return v5;
  }
}
