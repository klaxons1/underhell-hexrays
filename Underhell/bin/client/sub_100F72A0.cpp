int __usercall sub_100F72A0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // eax
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // edx
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float *v13; // eax
  _BYTE v14[84]; // [esp+4h] [ebp-90h] BYREF
  float v15[3]; // [esp+58h] [ebp-3Ch] BYREF
  float v16[3]; // [esp+64h] [ebp-30h] BYREF
  float v17; // [esp+70h] [ebp-24h] BYREF
  float v18; // [esp+74h] [ebp-20h]
  float v19; // [esp+78h] [ebp-1Ch]
  float v20; // [esp+7Ch] [ebp-18h] BYREF
  float v21; // [esp+80h] [ebp-14h]
  float v22; // [esp+84h] [ebp-10h]
  float v23; // [esp+88h] [ebp-Ch] BYREF
  float v24; // [esp+8Ch] [ebp-8h]
  float v25; // [esp+90h] [ebp-4h]

  sub_100F81B0();
  result = sub_100F83B0(0);
  if ( (_BYTE)result )
  {
    if ( *(float *)(a1 + 240) > 0.0 || !sub_100F7AF0(a1) || (v4 = sub_100F7AF0(a1), !sub_1000EA80(v4, a2)) )
      sub_100F8AA0(0);
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    v23 = *v5;
    v6 = *(float *)(a1 + 232);
    v24 = v5[1];
    v7 = *(float *)(a1 + 236);
    v25 = v5[2];
    v8 = *(float *)(a1 + 240);
    v18 = v7;
    v9 = *(_DWORD *)a1;
    v17 = v6;
    v19 = v8;
    v10 = (float *)(*(int (__thiscall **)(int))(v9 + 40))(a1);
    v16[0] = *v10;
    v11 = *(float *)(a1 + 256);
    v16[1] = v10[1];
    v12 = *(float *)(a1 + 260);
    v16[2] = v10[2];
    v22 = *(float *)(a1 + 264);
    v20 = v11;
    v21 = v12;
    (*(void (__thiscall **)(int, float *, float *, float *, float *))(*(_DWORD *)a1 + 584))(a1, &v23, &v17, v16, &v20);
    *(float *)(a1 + 232) = v17;
    *(float *)(a1 + 236) = v18;
    *(float *)(a1 + 240) = v19;
    sub_10037CA0(a1, v16);
    *(float *)(a1 + 256) = v20;
    *(float *)(a1 + 260) = v21;
    *(float *)(a1 + 264) = v22;
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    v15[0] = v23 - *v13;
    v15[1] = v24 - v13[1];
    v15[2] = v25 - v13[2];
    sub_100F71F0(a1, v15, (int)v14);
    result = sub_100F7730(a1);
    if ( v14[54] )
    {
      *(float *)(a1 + 232) = flt_10459240;
      *(_QWORD *)(a1 + 236) = qword_10459244;
      *(float *)(a1 + 256) = flt_1045924C;
      *(float *)(a1 + 260) = flt_10459250;
      *(float *)(a1 + 264) = flt_10459254;
    }
    else
    {
      return sub_100F82D0(a1);
    }
  }
  return result;
}
