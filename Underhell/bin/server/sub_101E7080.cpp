int __thiscall sub_101E7080(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v13[257]; // [esp+24h] [ebp-63Ch] BYREF
  char Destination[524]; // [esp+428h] [ebp-238h] BYREF
  float v15[11]; // [esp+634h] [ebp-2Ch] BYREF

  sub_104299C0(Destination, "player", 0x200u);
  qmemcpy(v15, &unk_105046B8, sizeof(v15));
  v15[1] = 85.0;
  v15[2] = 1.0e24;
  v15[9] = 0.0;
  LOBYTE(v15[10]) = 0;
  v8 = sub_101DB300(this, a4, this + 716, this + 728, a5, 0, v13);
  *(_DWORD *)(this + 3592) = v8;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 88))(v8, 17);
  v9 = sub_101DB300(this, a6, this + 716, this + 728, a7, 0, v13);
  *(_DWORD *)(this + 3596) = v9;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 88))(v9, 17);
  sub_100E9500((_DWORD *)this, *(_DWORD *)(this + 3592));
  sub_101B4ED0(this);
  v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 108))(dword_106BAFF4, *(_DWORD *)(this + 3592));
  *(_DWORD *)(this + 3588) = v10;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 48))(v10, 350.0);
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(this + 3588) + 52))(50.0);
  sub_101E5490(this, a2, (int)&flt_106F1CA8, *(float *)(dword_106B31C8 + 16));
  if ( (*(_BYTE *)(this + 256) & 2) == 0 )
    return sub_101E34F0(this, a2, a3, 0);
  v11 = *(_DWORD *)(this + 3596);
  *(_DWORD *)(this + 3544) = 1;
  (*(void (__thiscall **)(int, int, float *, int))(*(_DWORD *)v11 + 180))(v11, a2, &flt_106F1CB4, 1);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3596) + 196))(*(_DWORD *)(this + 3596), a3, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3592) + 48))(*(_DWORD *)(this + 3592), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3588) + 20))(
    *(_DWORD *)(this + 3588),
    *(_DWORD *)(this + 3596));
  sub_100D6020((_DWORD *)this, *(_DWORD *)(this + 3596));
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3596) + 48))(*(_DWORD *)(this + 3596), 1);
}
