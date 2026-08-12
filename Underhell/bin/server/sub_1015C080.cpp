int __thiscall sub_1015C080(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // esi
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // edx
  double v10; // st7
  int v11; // ecx
  int v12; // ecx
  int result; // eax
  float v14[3]; // [esp+Ch] [ebp-18h] BYREF
  float v15; // [esp+18h] [ebp-Ch]
  float v16; // [esp+1Ch] [ebp-8h]
  float v17; // [esp+20h] [ebp-4h]

  if ( a2 )
    v3 = *(_DWORD *)(a2 + 76);
  else
    v3 = 0;
  v4 = sub_101C5260(this[1]);
  v5 = (float *)this[1];
  v6 = v5[116];
  v7 = v5[117];
  v8 = v5[118];
  v15 = v6;
  v16 = v7;
  v17 = v8;
  if ( v4 )
  {
    if ( v3 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v4 + 252) & 0x1000) != 0 )
      sub_100DAFD0(v4);
    v11 = *(_DWORD *)(v4 + 252) >> 12;
    v15 = *(float *)(v4 + 476) + v15;
    v16 = *(float *)(v4 + 480) + v16;
    if ( (v11 & 1) != 0 )
      sub_100DAFD0(v4);
    v10 = *(float *)(v4 + 484);
  }
  else
  {
    if ( !v3 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v3 + 252) & 0x1000) != 0 )
      sub_100DAFD0(v3);
    v9 = *(_DWORD *)(v3 + 252) >> 12;
    v15 = v15 - *(float *)(v3 + 476);
    v16 = v16 - *(float *)(v3 + 480);
    if ( (v9 & 1) != 0 )
      sub_100DAFD0(v3);
    v10 = *(float *)(v3 + 484);
  }
  v17 = v10;
LABEL_18:
  v14[2] = v17;
  v12 = this[1];
  v14[0] = v15;
  v14[1] = v16;
  sub_100D9710((float *)(v12 + 464), v14);
  result = sub_101C73D0(v3);
  if ( v3 )
  {
    sub_10157760(this, a2);
    *(float *)(this[1] + 4136) = 0.0;
    if ( !(unsigned __int8)sub_10163140(a2) )
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B6E60 + 8))(dword_106B6E60, a2, this[2] + 64);
    result = this[2];
    *(float *)(result + 72) = 0.0;
  }
  return result;
}
