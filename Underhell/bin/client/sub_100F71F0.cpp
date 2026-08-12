int __thiscall sub_100F71F0(int this, float *a2, int a3)
{
  float *v4; // eax
  float *v5; // eax
  float *v6; // eax
  int result; // eax
  float v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 36))(this);
  v8[0] = *v4;
  v8[1] = v4[1];
  v8[2] = v4[2];
  sub_100F7150((int *)this, v8, a2, a3);
  if ( 0.0 != *(float *)(a3 + 44) )
    sub_10037BA0(this, (float *)(a3 + 12));
  v5 = (float *)sub_10034A00((char *)this);
  *(float *)(this + 708) = *v5;
  *(float *)(this + 712) = v5[1];
  *(float *)(this + 716) = v5[2];
  v6 = (float *)sub_10034AE0((char *)this);
  *(float *)(this + 720) = *v6;
  *(float *)(this + 724) = v6[1];
  *(float *)(this + 728) = v6[2];
  result = *(_DWORD *)(a3 + 76);
  if ( result )
    return sub_100F8C70(result, a3);
  return result;
}
