int __userpurge sub_1020FE70@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  float *v9; // eax
  int (__thiscall *v10)(int *); // edx
  float *v11; // eax
  float v12; // ecx
  float v13; // eax
  int v14; // eax
  bool v15; // zf
  float v17; // [esp+14h] [ebp-7Ch]
  _BYTE v18[12]; // [esp+24h] [ebp-6Ch] BYREF
  int v19[18]; // [esp+30h] [ebp-60h] BYREF
  float v20[3]; // [esp+78h] [ebp-18h] BYREF
  float v21; // [esp+84h] [ebp-Ch] BYREF
  float v22; // [esp+88h] [ebp-8h]
  float v23; // [esp+8Ch] [ebp-4h]
  int savedregs; // [esp+90h] [ebp+0h] BYREF
  int v25; // [esp+98h] [ebp+8h]

  v5 = sub_1020B370((unsigned int)a1, a2, a3);
  v25 = v5;
  if ( (a1[64] & 0x8000000) != 0 )
  {
    v6 = *(_DWORD *)(a3 + 64);
    if ( (v6 & 8) != 0 && (v6 & 0x10000000) != 0 )
    {
      v7 = a1[106];
      if ( v7 )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 204))(v7, &v21, 0);
        v8 = 256;
        if ( *(_DWORD *)(dword_10698344 + 48) && a1[55] < 1 )
          v8 = 120;
        v9 = (float *)(*(int (__thiscall **)(int *))(*a1 + 576))(a1);
        v20[0] = *v9 + v21;
        v20[1] = v9[1] + v22;
        v10 = *(int (__thiscall **)(int *))(*a1 + 576);
        v20[2] = v9[2] + v23;
        v11 = (float *)v10(a1);
        sub_1002A5F0((int)&savedregs, (int)a1, v11, v20, 1174421507, (int)a1, 0, (int)v18);
        sub_1023D4B0(8, (int)v19, v8, 1.0, (int)a1, 2, 0);
        v5 = v25;
      }
    }
  }
  if ( 0.0 != *((float *)a1 + 420) )
  {
    v12 = *(float *)(a3 + 4);
    v13 = *(float *)(a3 + 12);
    v22 = *(float *)(a3 + 8);
    v21 = v12;
    v23 = v13;
    v17 = v22 * v22 + v12 * v12 + v13 * v13;
    if ( off_10689708(v17) >= *((float *)a1 + 420) )
    {
      sub_1020FD90((unsigned int *)a1);
      *((float *)a1 + 420) = 0.0;
    }
  }
  v14 = a1[419];
  if ( v14 > 0 && a1[55] < v14 )
  {
    v15 = a1[106] == 0;
    a1[419] = 0;
    if ( !v15 )
    {
      sub_1020FD90((unsigned int *)a1);
      (*(void (__thiscall **)(int *, int))(*a1 + 600))(a1, a3);
    }
  }
  return v5;
}
