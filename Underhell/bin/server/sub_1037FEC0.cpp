void __thiscall sub_1037FEC0(int this, float a2)
{
  double v3; // st7
  int v4; // eax
  double v5; // st7
  void (__thiscall *v6)(int, float *, _DWORD, float *); // eax
  int v7; // ecx
  double v8; // rt0
  int v9; // edi
  _BYTE v10[12]; // [esp+8h] [ebp-88h] BYREF
  float v11[18]; // [esp+14h] [ebp-7Ch] BYREF
  float v12[3]; // [esp+5Ch] [ebp-34h] BYREF
  float v13[3]; // [esp+68h] [ebp-28h] BYREF
  float v14[3]; // [esp+74h] [ebp-1Ch] BYREF
  float v15; // [esp+80h] [ebp-10h]
  float v16; // [esp+84h] [ebp-Ch]
  float v17; // [esp+88h] [ebp-8h]
  float v18; // [esp+8Ch] [ebp-4h]

  v3 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320) + 4);
  v4 = *(_DWORD *)(this + 320);
  v17 = v3;
  v5 = *(float *)((*(int (__thiscall **)(int))(v4 + 8))(this + 320) + 4) - v17;
  v6 = *(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)this + 528);
  v15 = v5 * 0.5;
  v6(this, v12, 0, v14);
  v7 = *(_DWORD *)(this + 252) >> 11;
  v8 = v15 + a2 + 50.0;
  v16 = (v14[0] * 0.25 + v12[0]) * v8;
  v17 = (v14[1] * 0.25 + v12[1]) * v8;
  v18 = v8 * (0.25 * v14[2] + v12[2]);
  if ( (v7 & 1) != 0 )
    sub_100DAE60(this);
  v9 = *(_DWORD *)(this + 3620);
  v13[0] = v16 + *(float *)(this + 580);
  v13[1] = *(float *)(this + 584) + v17;
  v13[2] = *(float *)(this + 588) + v18;
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  sub_102659D0((_DWORD *)this, v9 + 580, (int)v13, 33701899, (int)v10);
  if ( 1.0 != v11[8] || LODWORD(v11[16]) == this )
    sub_1037FC10(this);
  else
    sub_1025F370(*(void **)(this + 3620), v11, 0);
}
