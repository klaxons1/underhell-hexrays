float *__thiscall sub_1014ED30(int this, float *a2)
{
  float *result; // eax
  double v4; // st6
  double v5; // st7
  float v6[3]; // [esp+4h] [ebp-24h] BYREF
  float v7[3]; // [esp+10h] [ebp-18h] BYREF
  float v8; // [esp+1Ch] [ebp-Ch] BYREF
  float v9; // [esp+20h] [ebp-8h]
  float v10; // [esp+24h] [ebp-4h]

  v8 = *(float *)(this + 832) + *(float *)(this + 716);
  v9 = *(float *)(this + 836) + *(float *)(this + 720);
  v10 = *(float *)(this + 840) + *(float *)(this + 724);
  sub_100D8E00((_DWORD *)this, &v8, v7);
  v8 = *(float *)(this + 844) + *(float *)(this + 716);
  v9 = *(float *)(this + 848) + *(float *)(this + 720);
  v10 = *(float *)(this + 852) + *(float *)(this + 724);
  sub_100D8E00((_DWORD *)this, &v8, v6);
  result = a2;
  v4 = v7[1] - v6[1];
  v5 = v7[2] - v6[2];
  *a2 = v7[0] - v6[0];
  a2[1] = v4;
  a2[2] = v5;
  return result;
}
