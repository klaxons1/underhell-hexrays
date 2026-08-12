int __thiscall sub_100364E0(int this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  _BYTE v12[12]; // [esp+64h] [ebp-18h] BYREF
  _BYTE v13[12]; // [esp+70h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 1113) & 1) != 0 )
  {
    v2 = *(_DWORD *)dword_1041316C;
    v3 = (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(this + 352) + 36))(
           this + 352,
           190,
           190,
           0,
           0,
           0.0099999998);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 352) + 8))(this + 352, v3);
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 352) + 4))(this + 352, v4);
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 352) + 32))(this + 352, v5);
    (*(void (__thiscall **)(int, int))(v2 + 4))(dword_1041316C, v6);
  }
  if ( (*(_BYTE *)(this + 1113) & 2) != 0 )
  {
    (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)(this + 352) + 60))(this + 352, v12, v13);
    (*(void (__stdcall **)(float *, _BYTE *, _BYTE *, float *, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1041316C
                                                                                                + 4))(
      &flt_10459240,
      v12,
      v13,
      &flt_1045924C,
      0,
      255,
      255,
      0,
      0.0099999998);
  }
  if ( (*(_BYTE *)(this + 1113) & 4) != 0 || (result = dword_10404CEC, *(_DWORD *)(dword_10404CEC + 48)) )
  {
    v8 = this + 4;
    (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)(this + 4) + 80))(this + 4, v13, v12);
    v9 = *(_DWORD *)dword_1041316C;
    v10 = (*(int (__thiscall **)(int, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v8 + 8))(
            v8,
            255,
            0,
            255,
            0,
            0.0099999998);
    v11 = (*(int (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)v8 + 4))(v8, v13, v12, v10);
    return (*(int (__thiscall **)(int, int))(v9 + 4))(dword_1041316C, v11);
  }
  return result;
}
