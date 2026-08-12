int sub_101443F0()
{
  int v0; // esi
  float *v1; // eax
  double v2; // st7
  _BYTE v4[12]; // [esp+10h] [ebp-1Ch] BYREF
  unsigned __int8 v5[8]; // [esp+1Ch] [ebp-10h] BYREF
  int v6; // [esp+24h] [ebp-8h]
  int v7; // [esp+28h] [ebp-4h]

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 8))(v0);
  (*(void (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)v0 + 208))(v0, v5);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) == 1 )
  {
    v1 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v0 + 612))(v0, v4);
    v2 = *v1;
    sub_101F2950(*v1);
    v7 = v5[0];
    v5[0] = (int)((double)v5[0] * v2);
    v5[1] = (int)((double)v5[1] * v2);
    v6 = (int)(v2 * (double)v5[2]);
    v5[2] = v6;
  }
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v0 + 292))(
    v0,
    *(_DWORD *)v5,
    *(_DWORD *)&v5[1],
    *(_DWORD *)&v5[2],
    255);
  (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 12))(v0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v0 + 4))(v0);
}
