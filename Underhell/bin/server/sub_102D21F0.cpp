void __thiscall sub_102D21F0(int this, int a2, float *a3, float *a4, int a5, int a6)
{
  int *v7; // edi
  double v8; // st7
  unsigned int v9; // eax
  int *v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  double v13; // st7
  float v14; // [esp+0h] [ebp-20h]
  float v15; // [esp+4h] [ebp-1Ch]
  float v16[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = (int *)sub_100E3960((int)"rpg_missile", a3, (float *)(this + 704), this);
  sub_10408B40((int)v7);
  v14 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(v7, v14, 0);
  v8 = *(float *)(this + 1396);
  v16[0] = *a4 * v8;
  v16[1] = a4[1] * v8;
  v16[2] = v8 * a4[2];
  sub_100DD660((int)v7, v16);
  v9 = *(_DWORD *)(this + 920);
  if ( v9 != -1
    && (v10 = &off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1],
        v11 = v9 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] == v11)
    && *v10
    && (off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] != v11 ? (v12 = 0) : (v12 = *v10),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 320))(v12)) )
  {
    v13 = (double)*(int *)(this + 816);
  }
  else
  {
    v13 = (double)*(int *)(this + 820);
  }
  v15 = v13;
  (*(void (__thiscall **)(int *, _DWORD))(*v7 + 500))(v7, LODWORD(v15));
  sub_102D19C0((char *)this, a2, a3, a4, this, a6);
}
