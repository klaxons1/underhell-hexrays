char __thiscall sub_103D2250(int this)
{
  double v2; // st7
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v7; // edx
  int v8; // eax
  void (__thiscall *v9)(int, float *); // edx
  unsigned __int16 v10; // ax
  __int16 v11; // cx
  _DWORD v12[11]; // [esp+2Ch] [ebp-50h] BYREF
  float v13; // [esp+58h] [ebp-24h] BYREF
  float v14; // [esp+5Ch] [ebp-20h]
  float v15; // [esp+60h] [ebp-1Ch]
  float v16[3]; // [esp+64h] [ebp-18h] BYREF
  float v17; // [esp+70h] [ebp-Ch] BYREF
  float v18; // [esp+74h] [ebp-8h] BYREF
  float v19; // [esp+78h] [ebp-4h]

  sub_10112C00(this + 320, 2);
  v2 = *(float *)(this + 1180);
  v19 = v2;
  v16[0] = v2;
  v16[1] = v2;
  v16[2] = v2;
  v13 = -v2;
  v14 = v13;
  v15 = v13;
  sub_100D5D10((int)&v13, (int)v16);
  qmemcpy(v12, &unk_105046B8, sizeof(v12));
  v12[7] = this;
  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, "metal_bouncy");
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = (*(int (__stdcall **)(float, int, int, int, _DWORD *, _DWORD))(*(_DWORD *)dword_106BAFF4 + 36))(
         COERCE_FLOAT(LODWORD(v19)),
         v3,
         this + 580,
         this + 704,
         v12,
         0);
  v5 = v4;
  if ( !v4 )
    return 0;
  sub_100E9500((_DWORD *)this, v4);
  sub_100E0970(this, v7, 6, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 112))(v5, 750.0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 52))(v5, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 56))(v5, 0);
  v17 = 0.0;
  v18 = 0.5;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 136))(v5, &v17, &v18);
  v8 = *(_DWORD *)v5;
  v13 = 1.0e30;
  v9 = *(void (__thiscall **)(int, float *))(v8 + 132);
  v14 = 1.0e30;
  v15 = 1.0e30;
  v9(v5, &v13);
  if ( sub_103D2000((_DWORD *)this) )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 76))(v5);
    v11 = 2048;
  }
  else
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 76))(v5);
    v11 = 544;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 72))(v5, (unsigned __int16)v11 | v10);
  return 1;
}
