int __thiscall sub_1016C2F0(int this, int a2, int a3)
{
  int v4; // esi
  float v5; // eax
  float v6; // ecx
  int result; // eax
  int v8; // esi
  int v9; // ebx
  float v10; // [esp+3Ch] [ebp-28h]
  float v11; // [esp+4Ch] [ebp-18h]
  float v12; // [esp+50h] [ebp-14h]
  float v13; // [esp+58h] [ebp-Ch]
  float v14; // [esp+5Ch] [ebp-8h]
  float v15; // [esp+60h] [ebp-4h]

  v4 = *(_DWORD *)(this + 4 * a2 + 68);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v13 = *(float *)(v4 + 580);
  v14 = *(float *)(v4 + 584);
  v15 = *(float *)(v4 + 588);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v5 = *(float *)(v4 + 704);
  v6 = *(float *)(v4 + 708);
  *(_DWORD *)(this + 28) = 0;
  *(float *)(this + 32) = v13;
  v12 = v6;
  *(float *)(this + 36) = v14;
  v11 = v5;
  *(float *)(this + 40) = v15;
  result = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "hltv_fixed",
             1);
  v8 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)result + 40))(result, "posx", (int)v13);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "posy", (int)v14);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "posz", (int)v15);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "theta", (int)v11);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "phi", (int)v12);
    (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v8 + 40))(v8, "target", a3);
    v9 = *(_DWORD *)v8;
    v10 = RandomFloat(50.0, 110.0);
    (*(void (__thiscall **)(int, const char *, _DWORD))(v9 + 44))(v8, "fov", LODWORD(v10));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 16) + 40))(*(_DWORD *)(this + 16), v8);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 40))(dword_106B31F8, v8);
  }
  return result;
}
