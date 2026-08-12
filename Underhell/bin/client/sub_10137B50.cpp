int __thiscall sub_10137B50(
        int *this,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13)
{
  int v14; // eax
  int (__thiscall *v15)(int *, _DWORD *); // edx
  _DWORD v17[13]; // [esp+8h] [ebp-90h] BYREF
  int v18; // [esp+3Ch] [ebp-5Ch]
  int v19; // [esp+40h] [ebp-58h]
  float v20; // [esp+44h] [ebp-54h]
  float v21; // [esp+48h] [ebp-50h]
  float v22; // [esp+4Ch] [ebp-4Ch]
  float v23; // [esp+50h] [ebp-48h]
  float v24; // [esp+54h] [ebp-44h]
  float v25; // [esp+58h] [ebp-40h]
  float v26; // [esp+5Ch] [ebp-3Ch]
  float v27; // [esp+6Ch] [ebp-2Ch]
  float v28; // [esp+70h] [ebp-28h]
  float v29; // [esp+74h] [ebp-24h]
  char v30; // [esp+78h] [ebp-20h]
  int v31; // [esp+7Ch] [ebp-1Ch]
  int v32; // [esp+80h] [ebp-18h]

  v17[0] = 0;
  v17[12] = 0;
  v19 = 0;
  v32 = 0;
  v31 = -1;
  v18 = -1;
  v30 = 1;
  v20 = a5;
  v21 = a6;
  v17[11] = a3;
  v17[1] = sub_1007A6A0(off_103DCD78, a2 & 0xFFF);
  v14 = *this;
  v22 = a7;
  v23 = a8;
  v24 = a9;
  v18 = a4;
  v15 = *(int (__thiscall **)(int *, _DWORD *))(v14 + 80);
  v26 = a13;
  v27 = a10;
  v17[2] = (a2 >> 12) & 0xF;
  v28 = a11;
  v29 = a12;
  v25 = a6;
  return v15(this, v17);
}
