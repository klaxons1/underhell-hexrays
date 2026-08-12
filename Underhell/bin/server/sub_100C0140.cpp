int __thiscall sub_100C0140(int this)
{
  int v2; // eax
  bool v3; // zf
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  const char *v7; // eax
  void (*v8)(void); // edx
  _DWORD *v9; // ebx
  int i; // edi
  _DWORD *v11; // eax
  double ArgList; // [esp+4h] [ebp-584h]
  char Buffer[1024]; // [esp+20h] [ebp-568h] BYREF
  char v15[256]; // [esp+420h] [ebp-168h] BYREF
  float v16[12]; // [esp+520h] [ebp-68h] BYREF
  int v17[3]; // [esp+550h] [ebp-38h] BYREF
  int v18[3]; // [esp+55Ch] [ebp-2Ch] BYREF
  int v19[3]; // [esp+568h] [ebp-20h] BYREF
  int v20; // [esp+574h] [ebp-14h]
  int v21; // [esp+578h] [ebp-10h]
  int v22; // [esp+57Ch] [ebp-Ch] BYREF
  float v23; // [esp+580h] [ebp-8h]
  float v24; // [esp+584h] [ebp-4h]

  v2 = sub_100DF940();
  v3 = (*(_BYTE *)(this + 236) & 1) == 0;
  v4 = v2;
  v21 = v2;
  if ( !v3 )
  {
    v5 = *(_DWORD *)(this + 908);
    sub_100BE1F0(this, v5);
    sub_10429A00(Buffer, 0x400u, "Sequence: (%3d) %s", v5);
    sub_100D5DE0(v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    v6 = v4 + 1;
    v7 = sub_100BE280(this, *(_DWORD *)(this + 908));
    if ( v7 && strlen(v7) )
    {
      sub_10429A00(Buffer, 0x400u, "Activity %s", (char)v7);
      sub_100D5DE0(v6++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    ArgList = *(float *)(this + 904);
    sub_10429A00(Buffer, 0x400u, "Cycle: %.5f (%.5f)", SLOBYTE(ArgList));
    sub_100D5DE0(v6, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v6 + 1;
    v21 = v4;
  }
  if ( (*(_DWORD *)(this + 236) & 0x100) == 0 )
    return v4;
  v8 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
  v20 = dword_10700AC8;
  v8();
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v9 = *(_DWORD **)(this + 1100);
  if ( !v9 || !*v9 )
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 104))(v20);
  if ( !v9 )
    return v4;
  for ( i = 1; i <= sub_102452B0(v9); ++i )
  {
    (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)this + 796))(this, i, v16);
    sub_10421CE0(v16, 3, &v22);
    *(float *)v18 = v16[0] * 4.0 + *(float *)&v22;
    *(float *)&v18[1] = v16[4] * 4.0 + v23;
    *(float *)&v18[2] = 4.0 * v16[8] + v24;
    sub_1011BC50((int)&v22, (int)v18, 255, 0, 0, 1, 0.050000001);
    *(float *)v19 = v16[1] * 4.0 + *(float *)&v22;
    *(float *)&v19[1] = v16[5] * 4.0 + v23;
    *(float *)&v19[2] = 4.0 * v16[9] + v24;
    sub_1011BC50((int)&v22, (int)v19, 0, 255, 0, 1, 0.050000001);
    *(float *)v17 = v16[2] * 4.0 + *(float *)&v22;
    *(float *)&v17[1] = v16[6] * 4.0 + v23;
    *(float *)&v17[2] = 4.0 * v16[10] + v24;
    sub_1011BC50((int)&v22, (int)v17, 0, 0, 255, 1, 0.050000001);
    v11 = (_DWORD *)sub_102457E0(i - 1);
    sub_10429A00(v15, 0x100u, " < %s (%d)", (_BYTE)v11 + *v11);
    sub_1011CF30((int)&v22, (int)v15, 1, 0.050000001);
  }
  return v21;
}
