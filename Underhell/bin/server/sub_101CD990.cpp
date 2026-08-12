void __thiscall sub_101CD990(int this, int a2, int a3, int a4)
{
  int i; // esi
  _DWORD *v6; // ebx
  _BYTE v7[48]; // [esp+8h] [ebp-180h] BYREF
  _BYTE v8[48]; // [esp+38h] [ebp-150h] BYREF
  _BYTE v9[48]; // [esp+68h] [ebp-120h] BYREF
  _BYTE v10[48]; // [esp+98h] [ebp-F0h] BYREF
  _BYTE v11[48]; // [esp+C8h] [ebp-C0h] BYREF
  _BYTE v12[48]; // [esp+F8h] [ebp-90h] BYREF
  _BYTE v13[48]; // [esp+128h] [ebp-60h] BYREF
  _BYTE v14[12]; // [esp+158h] [ebp-30h] BYREF
  _BYTE v15[12]; // [esp+164h] [ebp-24h] BYREF
  float v16[3]; // [esp+170h] [ebp-18h] BYREF
  float v17[3]; // [esp+17Ch] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10424F80(this + 500, v8);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421CC0(this + 500, v13);
  if ( a3 )
    sub_104227F0(a3);
  if ( a2 )
    sub_10421D00(a2, 3, v13);
  sub_10421E30(v13, v8, v11);
  sub_100D6020((_DWORD *)this, *(_DWORD *)(this + 1156));
  (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 1156) + 192))(*(_DWORD *)(this + 1156), v10);
  sub_10421E30(v11, v10, v12);
  sub_10421A90(v12, v15);
  sub_10421CE0(v12, 3, v14);
  sub_100BD660(this, (int)v14, (int)v15, a4);
  for ( i = 1; i < *(_DWORD *)(this + 1132); ++i )
  {
    v6 = (_DWORD *)(this + 24 * i + 1156);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v6 + 192))(*v6, v9);
    sub_10421E30(v11, v9, v7);
    (*(void (__thiscall **)(_DWORD, _BYTE *, int))(*(_DWORD *)*v6 + 184))(*v6, v7, 1);
    (*(void (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*v6 + 188))(*v6, v17, v16);
    sub_101CBD70((char *)(this + 4440), i, v17);
    sub_101CBE00((char *)(this + 4728), i, v16);
    if ( !i )
    {
      sub_100E0D20(this, (float *)(this + 4440));
      sub_100DCB50((void *)this, 0);
    }
  }
  (*(void (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(this + 1156) + 188))(
    *(_DWORD *)(this + 1156),
    v16,
    v17);
  sub_101CBD70((char *)(this + 4440), 0, v16);
  sub_101CBE00((char *)(this + 4728), 0, v17);
  sub_100E0D20(this, (float *)(this + 4440));
  sub_100DCB50((void *)this, 0);
}
