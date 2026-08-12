int __thiscall sub_10234090(int this, float *a2)
{
  double v3; // st6
  double v4; // st5
  int result; // eax
  float v6; // [esp+8h] [ebp-24h] BYREF
  float v7; // [esp+Ch] [ebp-20h]
  float v8; // [esp+10h] [ebp-1Ch]
  float v9; // [esp+14h] [ebp-18h] BYREF
  float v10; // [esp+18h] [ebp-14h]
  float v11; // [esp+1Ch] [ebp-10h]
  float v12[3]; // [esp+20h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 556) + 588))(*(_DWORD *)(this + 556), v12);
  if ( *(int *)(this + 540) > 0 )
  {
    sub_10233900(v12, (float *)(this + 500), a2, &v6);
    if ( *(int *)(this + 540) <= 1 )
    {
      v9 = v6;
      v10 = v7;
      v11 = v8;
    }
    else
    {
      v3 = *(float *)(this + 548) + v7;
      v4 = *(float *)(this + 552) + v8;
      v9 = (*(float *)(this + 544) + v6) * 0.5;
      v10 = v3 * 0.5;
      v11 = 0.5 * v4;
      off_103EDFF0(&v9);
    }
    *(float *)(this + 544) = v6;
    *(float *)(this + 548) = v7;
    *(float *)(this + 552) = v8;
    sub_10233960(this, v12, &v9);
  }
  *(float *)(this + 500) = *a2;
  *(float *)(this + 504) = a2[1];
  *(float *)(this + 508) = a2[2];
  *(float *)(this + 512) = a2[3];
  *(float *)(this + 516) = a2[4];
  *(float *)(this + 520) = a2[5];
  *(float *)(this + 524) = a2[6];
  *(float *)(this + 528) = a2[7];
  *(float *)(this + 532) = a2[8];
  result = ++*(_DWORD *)(this + 540);
  if ( result == *(_DWORD *)(this + 536) )
    return sub_10233960(this, v12, (float *)(this + 544));
  return result;
}
