void __thiscall sub_1035D9C0(int *this, int a2, int a3, int a4)
{
  float v5; // ecx
  float v6; // edx
  int v7; // eax
  void (__thiscall *v8)(int, int *); // edx
  int v9[20]; // [esp+8h] [ebp-68h] BYREF
  int v10; // [esp+58h] [ebp-18h]
  int v11; // [esp+5Ch] [ebp-14h]
  int v12; // [esp+60h] [ebp-10h]
  float v13; // [esp+64h] [ebp-Ch]
  float v14; // [esp+68h] [ebp-8h]
  float v15; // [esp+6Ch] [ebp-4h]

  sub_1001E4E0(v9, a2);
  if ( (*(_DWORD *)(a2 + 64) & 0x800000) != 0 )
  {
    v5 = *(float *)(a2 + 8);
    v6 = *(float *)(a2 + 12);
    v13 = *(float *)(a2 + 4);
    v7 = *this;
    v14 = v5;
    v15 = v6;
    v8 = *(void (__thiscall **)(int, int *))(v7 + 1624);
    *(float *)&v10 = v13 * 5000.0;
    *(float *)&v11 = v5 * 5000.0;
    *(float *)&v12 = 5000.0 * v15;
    *(float *)&v9[13] = (float)this[54];
    v8((int)this, v9);
    v9[1] = v10;
    v9[2] = v11;
    v9[3] = v12;
  }
  sub_100360A0(this, (int)v9, a3, a4);
}
