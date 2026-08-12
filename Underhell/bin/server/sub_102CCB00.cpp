void __usercall sub_102CCB00(int a1@<ecx>, int a2@<edi>)
{
  float *v3; // eax
  double v4; // st7
  float *v5; // eax
  __int64 v6; // [esp-4h] [ebp-34h]
  float v7; // [esp+0h] [ebp-30h]
  float v8; // [esp+0h] [ebp-30h]
  float v9[3]; // [esp+Ch] [ebp-24h] BYREF
  float v10[3]; // [esp+18h] [ebp-18h] BYREF
  float v11; // [esp+24h] [ebp-Ch] BYREF
  float v12; // [esp+28h] [ebp-8h]
  float v13; // [esp+2Ch] [ebp-4h]
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 1388) && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 924) )
  {
    HIDWORD(v6) = a1;
    LODWORD(v6) = a1;
    sub_1010DD80((_DWORD *)(a1 + 1344), v6, 0.0);
    *(_BYTE *)(a1 + 1388) = 1;
  }
  if ( sub_102C9B50(a1) )
  {
    sub_102CC260(a1, (int)&savedregs, a2, a1, &v11);
    sub_100D5C50((float *)(a1 + 836), v10, &v11);
    v3 = sub_102CAC30(a1, v9, v10);
    v11 = *v3;
    v12 = v3[1];
    v13 = v3[2];
    sub_102CAD30(a1, &v11, 0, 0);
    v4 = *(float *)(dword_106B31C8 + 12);
LABEL_6:
    v7 = v4 + 0.050000001;
    sub_100EC4A0((int *)a1, v7, 0);
    sub_100D8290((float *)a1, 0.1);
    return;
  }
  if ( sub_102C9BB0((_DWORD *)a1) )
  {
    sub_102CC3D0(a1, v10);
    sub_100D5C50((float *)(a1 + 836), &v11, v10);
    v5 = sub_102CAC30(a1, v9, &v11);
    v11 = *v5;
    v12 = v5[1];
    v13 = v5[2];
    sub_102CAD30(a1, &v11, 0, 0);
    v4 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_6;
  }
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)a1, v8, 0);
    sub_102CC5B0(a1);
  }
  else if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 && !sub_102CA1F0((_DWORD *)a1) )
  {
    sub_100EC4A0((int *)a1, *(float *)(a1 + 1376), 0);
  }
}
